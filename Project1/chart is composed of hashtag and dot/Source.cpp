#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()

//*****************************************************************************************************
/*The chart is composed of '#' and '.' (dots) and is given line by line.
	New properties are given as a list of numbers H, which are new columns' heights.*/
	//*****************************************************************************************************
	//CHECK
	{


			string S[100];
			int N;
			cin >> N; cin.ignore();
			for (int i = 0; i < N; i++) {
				getline(cin, S[i]);
			}
			int M;
			cin >> M; cin.ignore();
			for (int i = 0; i < M; i++) {
				int H;
				cin >> H; cin.ignore();
				for (int j = 0; j <= N; j++)
					if (j<H + 1)
						S[N - j] += "#";
					else
						S[N - j] += ".";
			}
			for (int i = 0; i < N; i++)
				cout << S[i] << endl;
		}
