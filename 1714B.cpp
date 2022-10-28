#include<iostream>

using namespace std;

int main() {
	int N, T;
	cin >> T;
	while (T) {
		cin >> N;
		int dict[N+1], vet[N];
		for (int i = 0; i <= N; i++)
			dict[i] = 0;
		for (int i = 0; i < N; i++)
			cin >> vet[i];
		int i;
		for (i = N-1; i >= 0; i--) {
			if (dict[vet[i]] > 0)
				break;
			else
				dict[vet[i]] = dict[vet[i]] + 1;
		}
		cout << i+1 << endl;
		T--;
	}
    return 0;
}

