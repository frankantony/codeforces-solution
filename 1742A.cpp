#include<iostream>

using namespace std;

int main() {
	int a, b, c, T;
	cin >> T;
	while (T) {
		cin >> a >> b >> c;
		if (a + b == c || a + c == b || b + c == a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		T--;
	}

    return 0;
}

