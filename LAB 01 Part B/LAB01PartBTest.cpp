#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, remainder;

	cout << "Etner two integers: ";
	cin >> num1 >> num2;

	if (num2 % num1 == 0)
	{
		cout << '\n' << num1 << " is a multiple of " << num2 << '\n';
	}
	else 
	{
		cout << '\n' << num1 << " is NOT a multiple of " << num2 << '\n';
	}
}