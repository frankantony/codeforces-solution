#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int T, N, K;
	cin >> T;
	while (T) {
		cin >> N;
		int vet[N + 1];
		vet[N] = 10005;
		for (int i = 0; i < N; i++)
			cin >> vet[i];
		sort(vet, vet + N);
		int count = 1, result = 0;
		for (int i = 0; i < N; i++) {
			if (vet[i] == vet[i+1])
				count++;
			else {
				result += (count % 2);
				count = 1;
			}
		}
		cout << result << endl;
		T--;
	}
    return 0;
}

