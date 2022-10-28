#include<iostream>
#include<algorithm>

using namespace std;

bool verify (int n, bool *map) {
	int vet[5], cont = 0;
	for (int i = 0; i < 4; i++)
		vet[i] = 0;

	vet[4] = -1;
	while (n != 0) {
		int a = n % 10;
		if (!map[a]) 
			return false;
		vet[cont++] = a;
		n /= 10;
	}

	if (cont < 4 && !map[0])
		return false;

	sort(vet, vet + 4);
	cont = 1;
	for (int i = 0; i < 4; i++) {
		if (vet[i] == vet[i+1])
			cont++;
		else {
			if (cont != 2)
				return false;
			cont = 1;
		}
	}
	return true;
}

int main() {
	int n, T;
	cin >> T;

	while (T) {
		cin >> n;
		bool map[10];
		for (int i = 0; i < 10; i++)
			map[i] = true;

		int value;
		for (int i = 0; i < n; i++) {
			cin >> value;
			map[value] = false;
		}

		int result = 0;
		for (int i = 0; i < 9999; i++)
			if (verify (i, map))
				result++;

		cout << result << endl;
		T--;
	}
    return 0;
}

