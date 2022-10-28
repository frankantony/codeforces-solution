#include<iostream>

using namespace std;

long long calculate (long long n, long long m) {
	if (n == 1) return m-1;
	else if (m == 1) return n-1;
	return n * (m-1);
}

int main() {
	long long n, m;
	cin >> n >> m;
	cout << calculate(n, m) << endl;

    return 0;
}

