#include "stdafx.h"
#include <iostream>
#include<conio.h>

using namespace std;
int main()
{
	int Length, a[100], MIN, MAX, Q1,Q2,Q3, IQR,Out1, Out2;

	cout << "Insert Array Length: ";
	cin >> Length;

	cout << "Insert Array Values: ";
	for (int  i = 0; i < Length; i++)
	{
		cin >> a[i];
	}

	MIN = a[0];
	Q1 = a[Length / 4];
	Q2 = a[Length / 2];
	Q3 = a[3 * Length / 4];
	MAX = a[Length - 1];
	IQR = Q3 - Q1;
	Out1 = Q1 - 1.5*IQR;
	Out2 = Q1 + 1.5*IQR;

	cout << "MIN: " << MIN << "\n";
	cout << "Q1:"  << Q1 << " -- " << "Q2:" << Q2 << " -- " << "Q3:" << Q3 << "\n";
	cout << "MAX: " << MAX <<"\n";
	cout << "Outlier: ";
	for (int i = 0; i < Length; i++)
	{
		if (a[i]<Out1 || a[i]>Out2)
			cout << a[i]<<" , ";
	}
	return 0;
}