#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T) {
		char a[8][8], colour_initial = 'R';
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				cin >> a[i][j];

		int count_B;	
		for (int i = 0; i < 8; i++) {
			count_B = 0;
			for (int j = 0; j < 8; j++) {
				if (a[j][i] == 'B')
					count_B++;
			}
			if (count_B == 8)
				colour_initial = 'B';
		}

		cout << colour_initial << endl;

		T--;
	}
    return 0;
}

