#include<iostream>

using namespace std;

int main() {
	int T, N, C;
	cin >> T;
	while (T) {
		cin >> N >> C;
		int vet[N], cont[101];

		for (int i = 0; i <= 100; i++)
			cont[i] = 0;

		for (int i = 0; i < N; i++) {
			cin >> vet[i];
			cont[vet[i]]++;
		}

		int result = 0;		
		for (int i = 1; i <= 100; i++) {
			if (C <= cont[i])
				result += C;
			else
				result += cont[i];
		}

		cout << result << endl;
		T--;
	}
    return 0;
}

