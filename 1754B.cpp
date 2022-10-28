#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T) {
		int n;
		cin >> n;
		int middle = ceil(n/2.0);
		int i = middle, j = n;
		while (j > middle || i >= 1) {
			if (i >= 1)
				cout << i-- << " ";
			if (j > middle)
				cout << j-- << " ";
		}

		cout << endl;
		T--;
	}
    return 0;
}

