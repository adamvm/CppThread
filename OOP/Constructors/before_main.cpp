#include <iostream>

class ExecTest
{
public:
   ExecTest() {
      std::printf("ExecTest();\n");
   }
} Obj;

int main()
{
   std::cout << "int main();" << std::endl;
   std::cin.get();
   return 0;
}