#include<iostream>

using namespace std;

int main() {
	int n;
	string st;
	cin >> n >> st;
	int k = n / 2, cont = 0;
	for (int i = 0; cont < k-1; i += 2) {
		cout << st[i] << st[i+1] << "-";
		cont++;
	}

	int value = n - 2 * cont;
	if (value == 2)
		cout << st[n-2] << st[n-1];
	else if (value == 3)
		cout << st[n-3] << st[n-2] << st[n-1];
	else if (value == 4)
		cout << st[n-4] << st[n-3] << "-" << st[n-2] << st[n-1];

	cout << endl;
    return 0;
}
