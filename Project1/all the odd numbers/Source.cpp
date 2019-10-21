#include <iostream>
#include <set>
#include <string>
using namespace std;


//*****************************************************************************************************
//Your program must output all the odd numbers from 1 to N where N is given as input.
//	If N is an odd number, it must be included in the output.
//*****************************************************************************************************
int main()
{

	int N;
	cin >> N; cin.ignore();

		for (int i = 1; i < N + 1; i++)
		{

			if (i % 2 != 0)
			{

				cout << i << endl;

			}

		}
	
}