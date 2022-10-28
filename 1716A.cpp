#include<iostream>

using namespace std;

long long calculate (long long N) {
	if (N == 1)
		return 2;
	else if (N == 2 && N == 3)
		return 1;
	long long value = N/3; 
	return (N % 3) ? value + 1 : value;
}

long long module (long long N) {
	return N >= 0 ? N: -N;
}

int main() {
	int T;
	long long N;
	cin >> T;
	while (T) {
		cin >> N;
		N = abs(N);
		long long result = calculate (N);
		cout << result << endl;
		T--;
	}
    return 0;
}

