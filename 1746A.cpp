#include<iostream>

using namespace std;

int main() {
	int n, k, T;
	cin >> T;
	while (T) {
		cin >> n >> k;
		int vet[n];
		for (int i = 0;i < n;i++)
			cin >> vet[i];

		bool isPossible = false;
		for (int i = 0; i < n; i++)
			if (vet[i] == 1)
				isPossible = true;

		if (isPossible)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		T--;
	}
    return 0;
}

