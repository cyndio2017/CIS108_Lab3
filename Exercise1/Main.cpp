#include "Calculator.h"
#include <iostream>
using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "Lil Baby Calculator\n";
	cout << "Please enter your math problem.  Use format a+b | a-b | a*b | a/b \n";

	Calculator c;
	while (true)
	{
		cin >> x >> oper >> y;
		result = c.Calculate(x, oper, y);
		cout << "The answer is: " << result << endl;
		cout << "Do you have another problem?  Go ahead and enter it \n";
	}
	return 0;
}