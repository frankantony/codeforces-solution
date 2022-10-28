#include<iostream>
#include<map>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		int a[N];

		for (int i = 0; i < N; i++)
			cin >> a[i];

		string st;
		cin >> st;
		map<char, int> dict;
		bool isPossible = true;
		for (int i = 0; i < N; i++) {
			if (dict[a[i]] && dict[a[i]] != st[i])
				isPossible = false;
			else
				dict[a[i]] = st[i];
		}

		if (isPossible)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		T--;
	}
    return 0;
}

