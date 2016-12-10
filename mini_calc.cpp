#include <iostream>

using namespace std;

int get_Sum (int x, int y)
{
	return x+y;
}
int get_Difference (int x, int y)
{
	return x-y;
}
int get_Product (int x, int y)
{
	return x*y;
}
int get_Quotient (int x, int y)
{
	return x/y;
}
int main ()
{
	int Num1,Num2;
	
	cout << "Enter Number 1: ";
	cin >> Num1;
	
	cout << "Enter Number 2: ";
	cin >> Num2;
	
	cout << "Sum is: "<<get_Sum(Num1,Num2) << endl;
	cout << "Difference is: "<<get_Difference(Num1,Num2) << endl;
	cout << "Product is: "<<get_Product(Num1,Num2) << endl;
	cout << "Quotient is: "<<get_Quotient(Num1,Num2) << endl;
	
	return 0;
}
