// CoC.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()


	//*****************************************************************************************************
		//Write a program that prints the sum of all the positive multiples of 3 or 5 or 7 below N.
		//For example, if N = 15 we get 3, 5, 6, 7, 9, 10, 12, 14 and the sum of these multiples is 66.
	//*****************************************************************************************************

	{
	

		int N;
		cin >> N; cin.ignore();
		int sum = 0;

		for (int i = 0; i < N; i++)
		{
			if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
			{
				sum += i;
			}

		}
		cout << sum;
	

	}






