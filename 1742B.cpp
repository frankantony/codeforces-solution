#include<iostream>
#include<algorithm>

using namespace std;

bool isPossible (int N, long long *vet) {
	
	for (int i = 0; i < N; i++) 
		if (vet[i] == vet[i+1])
			return false;
	return true;
}

int main() {
	int N, T;
	cin >> T;
	while (T) {
		cin >> N;
		long long vet[N];
		for (int i = 0; i < N; i++)
			cin >> vet[i];
		sort(vet, vet + N);
		if (isPossible (N, vet))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		T--;
	}
    return 0;
}

