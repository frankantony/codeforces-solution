#include<iostream>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		long long vet[N];
		for (int i = 0;i < N;i++)
			cin >> vet[i];
		int r[2*N], l[2*N], cont = 0, count_increased = 0;
		for (int i = 0; i < N-1; i = (i+1) % N) {
			if (vet[i] > vet[i+1]) {
				if ((vet[i+1] + vet[i]) % 2 == 0) {
					r[cont] = i+1;
					l[cont++] = i+2;
				}
				else {
					r[cont] = i+2;
					l[cont++] = i+1;
				}
				vet[i] = vet[i+1];
			}
			else
				count_increased++;

			if (count_increased == N-1)
				break;
			if (i == N-1) {
				count_increased = 0;
				i = 0;
			}
		}

		for (int i = 0;i < N;i++)
			cout << vet[i] << " ";
		cout << endl;
		cout << cont << endl;
		for (int i = 0;i < cont;i++)
			cout << r[i] << " " << l[i] << endl;
		T--;
	}
    return 0;
}

