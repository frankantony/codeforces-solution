#include<iostream>

using namespace std;

int main() {
	int n, q, T;
	cin >> T;
	while (T) {
		cin >> n >> q;
		long long result = 0;
		long long vet[n], even = 0, odd = 0;

		for (int i = 0; i < n; i++) {
			cin >> vet[i];
			result += vet[i];
			if (vet[i] % 2 == 0)
				even++;
			else
				odd++;
		}

		int choose, value;
		for (int i = 0; i < q; i++) {
			cin >> choose >> value;
			if (choose == 0) {
				result += even * value;
				if (value % 2 != 0) {
					even = 0;
					odd = n;
				}
			}
			else {				
				result += odd * value;
				if (value % 2 != 0) {
					even = n;
					odd = 0;
				}
			}

			cout << result << endl;
		}

		T--;
	}
    return 0;
}

