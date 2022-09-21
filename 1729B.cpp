#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string s;
	int T, len;
	cin >> T;
	while(T) {
		cin >> len >> s;
		string result = "";
		for (int i = len-1; i >= 0; i--) {
			char aux;
			if (s[i] != '0') {
				aux = (s[i] - '0' - 1) + 'a';
				result += aux;
			}
			else {
				int number = (s[i-1]-'0') + (s[i-2]-'0')*10;
				aux = number + 'a' - 1;
				result += aux;
				i = i-2;
			}
		}
		reverse(result.begin(), result.end());
		cout << result << endl;
		T--;
	}
    return 0;
}
