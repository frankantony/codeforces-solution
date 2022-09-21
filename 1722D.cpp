#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool cmp (int a, int b) {
	return a > b;
}

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		string st;
		cin >> st;
		long long vet[N], sum = 0;
		int cont = 0;
		for (int i = 0;i < N;i++) {
			if (st[i] == 'L') {
				vet[cont++] = (N-i-1) - i;
				sum += i;
			}
			else {
				vet[cont++] = i - (N-i-1);
				sum += N-i-1;
			}
		}

		sort(vet, vet + N, cmp);

		for (int i = 0; i < N;i++) {
			if (vet[i] > 0)
				sum += vet[i];
			cout << sum << " ";
		}

		cout << endl;
		T--;
	}
    return 0;
}

