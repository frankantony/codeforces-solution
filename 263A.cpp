#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int mat[5][5];
	int line, column;
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			cin >> mat[i][j];
			if (mat[i][j] == 1) {
				line = i + 1;
				column = j + 1;
			}
		}
	}
	int result = abs(3-line) + abs(3-column);
	cout << result << endl;
    return 0;
}
