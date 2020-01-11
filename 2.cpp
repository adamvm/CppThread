#include <iostream>

class ExecTest
{
public:
   ExecTest() {
      std::printf("ExecTest();\n");  //celowo używam std::printf bo nie wiadomo, czy std::cout będzie już zainicjowane !!!
   }
} Obj;

int main()
{
   std::cout << "int main();" << std::endl;
   std::cin.get();
   return 0;
}