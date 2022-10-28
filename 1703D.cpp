#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main() {
	int n, T;
	cin >> T;
	while (T) {
		cin >> n;
		map <string, bool> dict;
		string s, a, b;
		string result = "";
		vector <string> vet;
		for (int i = 0; i < n; i++) {
			cin >> s;
			vet.push_back(s);
			dict[s] = true;
		}

		for (int i = 0; i < vet.size(); i++) {
			string x = vet[i];
			int len = x.size();
			bool exists = false;
			for (int j = 1; j < len; j++) {
				string left = x.substr (0, j);
				string right = x.substr (j, len - j);
				if (dict[right] && dict[left]) {
					exists = true;			
				}
			}

			if (exists)
				cout << "1";
			else
				cout << "0";
		}

		cout << endl;

		T--;
	}
    return 0;
}

