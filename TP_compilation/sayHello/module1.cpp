#include "module1.hpp"

std::string getHello(int n) {
  int * ptr = &n;
  *ptr = 37;
  std::string str = "Hello World ";
  str += std::to_string(n);
  str += "!";
  return str;
}

