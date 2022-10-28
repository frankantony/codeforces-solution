#include<iostream>

using namespace std;

bool isPossible (int n, long long *a) {

	for (int i = 0; i < n-1; i++) {
		if (a[i] < a[i+1]) {
			int k = (a[i+1]-a[i])/a[i];
			a[i+1] = a[i+1]	- k * a[i];
			if (a[i+1] != a[i]) return false;
		}
		else if (a[i] > a[i+1])
			return false;
	}
	return true;
}

int main() {
	int n, T;
	cin >> T;
	while (T) {
		cin >> n;
		long long vet[n];
		for (int i = 0;i < n;i++)
			cin >> vet[i];

		bool result = isPossible(n, vet);

		if (result)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		T--;
	}
    return 0;
}

