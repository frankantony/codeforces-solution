#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, T;
	cin >> T;
	while (T) {
		cin >> n;
		int vet[n];
		for (int i = 0;i < n;i++)
			cin >> vet[i];
		sort(vet, vet + n);
		cout << vet[n-1] - vet[0] << endl;
		T--;
	}
    return 0;
}

