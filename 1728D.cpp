#include<iostream>
#include<string>

using namespace std;

int verify (string a, string b) {
	int len = a.size();
	for (int i = 0; i < len; i++) {
		if (a[i] < b[i]) return 1;
		else if (a[i] > b[i]) return -1;
	}
	return 0;
}

int main() {
	int T;
	cin >> T;
	while (T) {
		string s;
		cin >> s;
		int len = s.size();
		string a = "", b = "";
		int i = 0, j = len-1;
		while (i <= j) {
			bool alicePlays = (j-i) % 2 == 1;
			if (s[i] <= s[j]) {
				if (alicePlays)
					a += s[i];
				else
					b += s[i];
				i++;
			}
			else {
				if (alicePlays)
					a += s[j];
				else
					b += s[j];
				j--;
			}
		}
		int result = verify (a, b);
		if (result == 1)
			cout << "Alice";
		else if (result == -1)
			cout << "Bob";
		else
			cout << "Draw";
		cout << endl;

		T--;
	}
    return 0;
}

