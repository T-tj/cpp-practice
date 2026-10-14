//肥胖问题
#include <iostream>
using namespace std;
int main()
{
	double m, h;
	cin >> m >> h;
	double bmi = m / (h * h);
	if (bmi<18.5)
	{
		cout <<  "Underweight" << '\n';
	}
	else if ( bmi < 24)  
	{
		cout << "Normal" << '\n';
	}
	else
	{
		cout <<bmi << '\n' << "Overweight" << '\n';
	}
	return 0;
}