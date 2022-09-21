#include<iostream>

using namespace std;

bool isOrdered (int N, int* vet) {
	for(int i = 0;i < N-1;i++)
		if (vet[i] > vet[i+1])
			return false;
	return true;
}

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		int vet[N];
		for (int i = 0;i < N;i++)
			cin >> vet[i];
		if (isOrdered (N, vet))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		T--;
	}
    return 0;
}

