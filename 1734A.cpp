#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		long long vet[N];

		for (int i = 0; i < N; i++)
			cin >> vet[i];
		sort(vet, vet + N);
		int result = vet[2] - vet[0], value;
		int j = 1;
		while (j < N-2) {
			value = vet[j+2] - vet[j];
			if (result > value)
				result = value;
			j++;
		}
		cout << result << endl;
		T--;
	}
    return 0;
}

