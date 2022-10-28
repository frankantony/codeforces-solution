#include<iostream>

using namespace std;

long long mdc (long long a, long long b) {
	if (b == 0)
		return a;
	return mdc (b, a % b);
}

int main() {
	int T;
	long long n, m, C, q;
	cin >> T;
	while (T) {
		cin >> n >> m >> C >> q;
		long long vet[n];

		for (int i = 0; i < n; i++)
			cin >> vet[i];

		int l[q], r[q];
		long long q = 1;
		for (int i = 0; i < q; i++)
			cin >> l[i] >> r[i];
		
		T--;
	}
    return 0;
}

