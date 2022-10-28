#include<iostream>

using namespace std;

bool isAlmostPrime (int N) {
	int i = 2, cont = 0, vet[N];
	while (N != 0 && i <= N) {
		if (N % i == 0) {
			N /= i;
			if (cont == 0 || vet[cont-1] != i)
				vet[cont++] = i;
			if (cont > 2)
				return false;
		} else
			i++;
	}
	return cont == 2;
}
int main() {
	int N, i = 2, value, cont = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (isAlmostPrime (i))
			cont++;
	}
	cout << cont << endl;
    return 0;
}
