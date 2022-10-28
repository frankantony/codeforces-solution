#include<iostream>

using namespace std;

int main() {
	int T, N, M;
	cin >> T;
	while (T) {
		cin >> N >> M;
		int x = (N/2) + 1, y = (M/2) + 1;
	
		cout << x << " " << y << " " << endl;
		T--;
	}
    return 0;
}

