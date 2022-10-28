#include<iostream>
#include<algorithm>

using namespace std;

bool cmp (long long x, long long y) {
	return x > y;
}

int main() {
	int T, N, x, y, Q;
	cin >> N >> Q;
	long long vet[N];
	for (int i = 0; i < N; i++)
		cin >> vet[i];
	sort(vet, vet + N, cmp);
	long long sum[N];
	sum[0] = vet[0];
	for (int i = 1; i < N; i++)
		sum[i] = sum[i-1] + vet[i];

	for (int i = 0; i < Q; i++) {
		cin >> x >> y;
		if (x == y)
			cout << sum[x-1] << endl;
		else
			cout << sum[x-1] - sum[x-y-1] << endl;
	}
    return 0;
}

