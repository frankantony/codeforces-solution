#include<iostream>

using namespace std;

int normalize (int x) {
	return x >= 0? x: 0;
}

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		int a[N], b[N];
		for (int i = 0; i < N; i++)
			cin >> a[i];
		for (int i = 0; i < N; i++)
			cin >> b[i];
		int maximum = b[N-1], minimum = b[0];
		cout << normalize(minimum - a[0]);
		for (int i = 1;i < N;i++)
			cout << " " << normalize(minimum - a[i]);
		cout << endl;
		cout << normalize(maximum - a[0]);
		for (int i = 1;i < N;i++)
			cout << " " << normalize(maximum - a[i]);
		cout << endl;

		T--;
	}
    return 0;
}

