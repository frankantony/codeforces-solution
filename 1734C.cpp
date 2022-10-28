#include<iostream>

using namespace std;

int main() {
	int n, T;
	cin >> T;
	while (T) {
		cin >> n;
		string st;
		cin >> st;
		int small[n+1];
		long long sum = 0;
		for (int i = n; i >= 1; i--) {
			for (int j = i; j <= n; j += i) {
				if (st[j-1] == '1')
					break;
				small[j] = i;
			}
		}

		for (int i = 1; i <= n; i++)
			if (st[i-1] == '0')
				sum += small[i];
		cout << sum << endl;
		T--;
	}
    return 0;
}

