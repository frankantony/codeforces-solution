#include<iostream>

using namespace std;

int main() {
	int a, b, c, d, T;
	cin >> T;
	while (T) {
		cin >> a >> b >> c >> d;
		int vet[] = {a, b, c, d}, result = 0;
		for (int i = 1; i < 4; i++)
			if (vet[i] > a)
				result++;

		cout << result << endl;
		T--;
	}
    return 0;
}

