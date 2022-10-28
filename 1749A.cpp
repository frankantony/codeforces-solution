#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T) {
		int n, m;
		cin >> n >> m;
		int column[n], row[n], mat[n][n];

		for (int i = 0; i < n; i++) {
			column[i] = 0;
			row[i] = 0;
			for (int j = 0; j < n; j++) {
				mat[i][j] = 0;
			}
		}

		int x, y;
		for (int i = 0; i < m; i++) {
			cin >> x >> y;
			mat[x-1][y-1] = 1;
			row[x-1]++;
			column[y-1]++;
		}

		bool valid = false;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (mat[i][j] == 0 && column[j] + row[i] == 1)
					valid = true;

		if (valid)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		T--;
	}
    return 0;
}

