#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, T;
	cin >> T;
	while (T) {
		cin >> n;
		long long vet[n];
		for (int i = 0;i < n;i++)
			cin >> vet[i];
		sort(vet, vet + n);
		long long result = (vet[n-1]-vet[0]) + (vet[n-2]-vet[1]);
		cout << result << endl;
		T--;
	}
    return 0;
}

