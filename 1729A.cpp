#include<iostream>

using namespace std;

int abs (int a) {
	if (a >= 0)
		return a;
	return -a;
}

int main() {
	int a, b, c, T;
	cin >> T;
	while (T) {
		cin >> a >> b >> c;
		int first = a-1, second = abs(b-c) + abs(c-1);
		if (first < second)
			cout << "1" << endl;
		else if (first > second)
			cout << "2" << endl;
		else
			cout << "3" << endl;
		T--;
	}
    return 0;
}

