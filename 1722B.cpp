#include<iostream>

using namespace std;

bool isEqual (string a, string b, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == 'G')
			a[i] = 'B';
		if (b[i] == 'G')
			b[i] = 'B';
	}
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			return false;
	return true;
}

int main() {
	int n, t;
	string a,b;
	cin >> t;
	while (t) {
		cin >> n >> a >> b;
		if (isEqual(a,b,n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		t--;
	}
    return 0;
}

