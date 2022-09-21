#include<iostream>

using namespace std;

int main() {
	int T, N, K;
	cin >> T;
	while (T) {
		cin >> N >> K;
		long long vet[N];

		for (int i = 0; i < N; i++)
			cin >> vet[i];

		for (int i = 0;i < N;i++) {
			for (int j = i+1;j < N;j++) {
				if ((i+1) % K == (j+1) % K && vet[i] < vet[j]) {
					long long aux = vet[i];
					vet[i] = vet[j];
					vet[j] = aux;
				}
			}
		}

		long long result = 0;
		for (int i = 0;i < K;i++)
			result += vet[i];
		cout << result << endl;
		T--;
	}
    return 0;
}

