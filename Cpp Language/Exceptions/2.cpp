#include <iostream>

int podziel(int a, int b) {
  if (b == 0)
    throw "Dzielnik jest zerem";
  if (a % b != 0)
    throw "Nieprawidlowe dzielenie";
  return a / b;
}

int main () {
  int a, b;
  std::cin >> a >> b;
  try {
    int c = podziel(a, b);
    std::cout << "a/b = " << c;
  }
  catch (const char* msg) {
    std::cout << msg;
  }
  std::cout << std::endl;
  system("pause");
  return 0;
}