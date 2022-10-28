#include<iostream>

using namespace std;

int main() {
	int n, T;
	cin >> T;
	while (T) {
		cin >> n;
		int vet[n], dict[n+1];
		for (int i = 0;i < n;i++) {
			cin >> vet[i];
			dict[i] = 0;
		}
		dict[n] = 0;

		int cont = 0;
		for (int i = 0; i < n-1; i++) {
			if (dict[vet[i]] == 1)
				vet[i] = 0;
			if (dict[vet[i+1]] == 1)
				vet[i+1] = 0;
			if (vet[i] > vet[i+1]) {
				if (dict[vet[i]] == 0)
					cont++;
				dict[vet[i]] = 1;
				vet[i] = 0;
			}
		}

		for (int i = 0; i < n-1; i++) {
			if (dict[vet[i]] == 1)
				vet[i] = 0;
			if (dict[vet[i+1]] == 1)
				vet[i+1] = 0;
			if (vet[i] > vet[i+1]) {
				if (dict[vet[i]] == 0)
					cont++;
				dict[vet[i]] = 1;
				vet[i] = 0;
			}
		}

		cout << cont << endl;
		T--;
	}
    return 0;
}

