#include<iostream>
#include<string>

using namespace std;

bool isEqual (string a, string b) {
	int len = a.size();
	for (int i = 0; i < len; i++)
		if (a[i] != b[i])
			return false;
	return true;
}

int main() {
	int n, T;
	string st;
	cin >> T;
	while (T) {
		cin >> st;
		int len = st.size();
		for (int i = 0; i < len; i++) {
			if (st[i] == 'Y')
				st[i] = 'y';
			else if (st[i] == 'E')
				st[i] = 'e';
			else if (st[i] == 'S')
				st[i] = 's';
		}

		bool valid = isEqual("yes", st);
		if (valid)
			cout << "YES" << endl;
		else
		cout << "NO" << endl;

		T--;
	}
    return 0;
}

