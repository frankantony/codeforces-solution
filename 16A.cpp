#include<iostream>

using namespace std;

char a[100][100];

bool verify (int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m-1; j++)
			if (a[i][j+1] != a[i][j])
				return false;
	}
	for (int i = 0; i < n-1; i++) {
		if (a[i][0] == a[i+1][0])
			return false;
	}
	return true;
}

int main() {
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	if (verify(n, m))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}
