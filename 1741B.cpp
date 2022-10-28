#include<iostream>
#include<cmath>

using namespace std;

void print (int N, int *vet) {
	cout << vet[0];
	for (int i = 1; i < N; i++)
		cout << " " << vet[i];
	cout << endl;
}

int main() {
	int T, N, x, y;
	cin >> T;
	while (T) {
		cin >> N;
		int a[N], b[N];

		int k = ceil (N / 2);

		for (int i = 0; i < k; i++) {
				a[i] = N-i;
				b[i] = N-i;
		}

		for (int i = k; i >= 1; i--) {
				a[i] = i;
				b[i] = k-i+1;
		}

		cout << "Vetor A:" << endl;
		print (N, a);
		cout << "Vetor B:" << endl;
		print(N, b);

		bool isPossible = true;
		for (int i = 0; i < N; i++)
			if (a[i] == i+1 || b[i] == i+1)
				isPossible = false;
		
		if (isPossible)
			print(N, a);
		else
			cout << "-1" << endl;
		T--;
	}

    return 0;
}

