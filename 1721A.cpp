#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T) {
		string st = "";
		string c;
		for (int i = 0;i < 2;i++) {
			cin >> c;
			st += c;
		}
		int count = 0;
		sort(st.begin(), st.end());

		for (int i = 0;i < 3;i++)
			if (st[i] != st[i+1])
				count++;

		cout << count << endl;
		T--;
	}
    return 0;
}

