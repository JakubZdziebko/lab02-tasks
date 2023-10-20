#include <iostream>
#include <string>

int main()
{
  int a = 15;
  long b = 12;
  auto c = a+b;
  float d = 1.15;
  double e = 5.1;
  auto f = d/e;
  auto x = b%a;
  //if a result is a fraction the type usually becomes float
  auto g = e/b;
  //in order for the a/b to be a fraction the auto type needs to become float, double or long double
  //auto a = 17 becomes an integer while auto a = 17.0 becomes floating point number
  short h = 32767;
  //after exceeding the limit of a given type, the number resets to the lowest possible and adds the rest
  auto op1 = 17;
  auto op2 = 2;
  
  auto r1 = op1 << op2;
  std::cout<<r1<<std::endl;
  r1 = op1 >> op2;
  std::cout<<r1<<std::endl;
  r1 = op1 & op2;
  std::cout<<r1<<std::endl;
  r1 = op1 | op2;
  std::cout<<r1<<std::endl;
  r1 = op1 ^ op2;
  std::cout<<r1<<std::endl;
  r1^=op2;
  std::cout<<r1<<std::endl;
  //the actions taken were: moving op1 value by number of bits equal to op2, doing the same in reverse, performing AND operation on the bits of two numbers, performing OR operation, performing XOR operation and finally performing XOR only on r1 value
  return 0;
}