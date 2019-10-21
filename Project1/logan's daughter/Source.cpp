#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()

//*****************************************************************************************************
// 		As logan's daughter is new to maths , she can't find sum if digits in a string s are in arbitrary order like 3 + 5 + 2.Therefore her father will help her to find the sum by arranging digits in non - decreasing order in string s like 2 + 3 + 5 .
//      Your job is to help logan to arrange the digits in non - decreasing order in string s so that her daughter can find the sum.
//*****************************************************************************************************

{

	int X, Y, Z;

	cin >> X >> Y >> Z; cin.ignore();

	multiset<int> myset;

	myset.insert(X);

	myset.insert(Y);

	myset.insert(Z);

	multiset<int>::iterator it = myset.begin();

	cout << *it;

	++it;

	for (; it != myset.end(); ++it)
	{

		cout << " + " << *it;

	}

	cout << endl;
}

