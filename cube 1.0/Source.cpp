#include<iostream>
#include <math.h>
using namespace std;
int main()
{

	int i;
	float yi, yi1, x;
	cout << "Enter x";
	cin >> x;
	yi = x;
	yi1 = x;
	do {
		yi = yi1;
		yi1 = 0.5 * (3 * x / (x / yi + 2 * yi * yi) + yi);

		//cout<< "yi=" << yi<< endl;
	//	cout <<"yi1="<< yi1 << endl;

	} while (fabs(yi1 - yi) > 0.00001);
	cout << yi1;
}