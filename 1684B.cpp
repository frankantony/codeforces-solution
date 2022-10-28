#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	long long a, b, c;
	int T;
	cin >> T;
	while (T) {
		cin >> a >> b >> c;
		long long vet[] = {a, b, c};
		sort(vet, vet + 3);
		long long x = vet[1] + vet[2] + vet[0] - ((vet[1] + vet[2]) % vet[1]);
		cout << x << " " << vet[1] << " " << vet[2] << endl;
		T--;
	}
    return 0;
}

