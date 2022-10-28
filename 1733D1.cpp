#include<iostream>

using namespace std;

struct Different {
	int index, value;
};

int cost (string a, string b) {
	int l = 0, r = N-1;
	while (l < r) {
		if (a[l] != b[l]) {
			
		}
	}
}

int main() {
	int n, x, y, T;
	cin >> T;
	while (T) {
		cin >> n >> x >> y;
		int index[n], cont = 0;
		string a,b;
		cin >> a >> b;
		for (int i = 0;i < n;i++)
			if (a[i] != b[i])
				index[cont++] = i;
		int l = index[0], r = index[cont-1];
		while (l <= r) {
			
		}

		if (cont % 2 != 0)
			cout << "-1" << endl;
		
		T--;
	}
    return 0;
}

