#include <iostream>
#include <future>
#include <thread>
#include <vector>
#include <libmail/send_mail.h>
#include <libmail/randomize_results.h>

std::string status(bool b);

int main()
{
	libmail::randomize_results();
	std::vector<std::string> responsible_devs = {
		"dev1@company.com",
		"dev2@company.com",
		"dev3@company.com",
		"dev4@company.com",
		"dev5@company.com",
	};
	std::string message = "build failed";

	int howMany = responsible_devs.size();
	
	std::vector<std::thread> threads;
	std::vector<std::promise<bool>> promises;
	std::vector<std::future<bool>> futures;

	for (size_t i = 0; i < howMany; i++)
	{
		futures.emplace_back(promises[i].get_future());
		auto function = [&, i](std::promise<bool> promise)
		{
			promise.set_value(libmail::send_mail(responsible_devs[i], message));
		};
		
		threads.emplace_back(function, std::move(promises[i]));
	}
	
	for (size_t i = 0; i < howMany; i++)
	{
		std::cout << "Sending mail to: " << i << " - " << status(futures[i].get());
	}
	
	for (auto &&i : threads)
		i.join();
	
	return 0;
}

std::string status(bool b)
{
	if (b)
		return "OK";
	else return "FAIL";
}

/*
We are trying to build new CI system. You will be responsible for implementing new notification component.
Here are the most important attributes that you have to achieve:

Performance: the component should be able to notify 5 devs in 2 seconds.
Debuggability: In case of error while sending mails the component should print debug info.
Sending mail to: dev1@company.com - OK
Sending mail to: dev2@company.com - OK
Sending mail to: dev3@company.com - FAIL
Sending mail to: dev4@company.com - FAIL
Sending mail to: dev5@company.com - FAIL

Your SW architect decided to use libmail as a framework for mail notifications.
libmail can be found in 3rdparty folder. Use promises and futures to achieve the goal.
The main thread should be the only one which prints anything on the screen.
*/