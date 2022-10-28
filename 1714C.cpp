#include<iostream>

using namespace std;

int main() {
	int n, T;
	cin >> T;
	while (T) {
		cin >> n;
		int vet[10], cont = 0, i = 9;
		while (n > 0) {
			if (n >= i) {
				n -= i;
				vet[cont++] = i;
			}
			i--;
		}

		for (int j = cont-1; j >= 0; j--)
			cout << vet[j];
		cout << endl;
		T--;
	}
    return 0;
}

