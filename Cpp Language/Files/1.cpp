#include <iostream>
#include <fstream>

int main()
{
    std::ofstream File;
    std::string outputFileName = "data.txt";

    File.open(outputFileName);

    if (File.is_open())
    {
        File << "Hello boy!" << std::endl;
        File << 123 << std::endl;
    }
    else
    {
        std::cout << "Could not create a file " << outputFileName; 
    }

    File.close();

    return 0;
}