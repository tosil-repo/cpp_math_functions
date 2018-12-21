#ifndef A2DD_H
#define A2DD_H
#include <ctime>
#include<iostream>

class Math
{
  int Num1;
  int Num2;
  int Fact, Mul, Div, Num, i;

public:
  int Multiply(int Num1,int Num2);
  int Divide(int Num1, int Num2);
  int Factorial(int  Fact);
  void GetTime(void);

};

#endif