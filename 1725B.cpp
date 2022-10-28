#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	int T, N, D;
	cin >> N >> D;
	int vet[N];
	for (int i = 0;i < N;i++)
		cin >> vet[i];
	sort(vet, vet + N);
	int k, result = 0, cont = 0;
	for (int i = N-1; i >= 0 ;i--) {
		k = ceil (D / vet[i]) + 1;
		if (k <= N - cont  && k * vet[i] > D)
			result++;
		else
			break;
		cont += k;	
	}
	cout << result << endl;
    return 0;
}

