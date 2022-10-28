#include<iostream>

using namespace std;

void print_vector (int *vet, int N) {
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
		int d[N], a[N];
		for (int i = 0; i < N; i++)
			cin >> d[i];
		a[0] = d[0];

		bool isUnique = true;
		for (int i = 1; i < N; i++) {
			x = d[i] + a[i-1];
			y = -d[i] + a[i-1];
			if (x >= 0 && y >= 0 && x != y) {
				isUnique = false;
				break;
			}
			else
				a[i] = (x >= 0) ? x : y;
		}

		if (isUnique) 
			print_vector (a, N);
		else
			cout << "-1" << endl;
		
		T--;
	}

    return 0;
}

