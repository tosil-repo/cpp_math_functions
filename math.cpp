#include "math.hpp"

using namespace std;
int Math::Multiply(int Num1, int Num2){
	Mul= Num1 * Num2;
	std::cout << "Multiplication of "<<Num1<< " * " <<Num2<< " = "<< Mul<<endl;
	return Mul;
}

int Math::Divide(int Num1, int Num2){
	Div = Num1/Num2;
	std::cout << "Division of "<<Num1<< " / " <<Num2 <<" = "<< Div<<endl;
	return Div;
}

int Math::Factorial(int Num){
	Fact = 1;
	for(i=1;i<=Num;i++)
	{
		Fact *= i;
	}
	std::cout<<"Factorial of " <<Num<< " = "<<Fact<<endl;
	return Fact;
}

void Math::GetTime(void){ 
   std::time_t t = std::time(0);
   std::tm* now = std::localtime(&t);
   std::cout<< "System date = "<< (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n"; 
}