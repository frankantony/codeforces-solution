#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool equals (string a, string b) {
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int len_a = a.size(), len_b = b.size();
	if (len_a != len_b)
		return false;
	for (int i = 0;i < len_a;i++)
		if (a[i] != b[i])
			return false;
	return true;
}

int main() {
	string s;
	int T, len;
	cin >> T;
	while(T) {
		int cont = 0;
		cin >> len >> s;
		
		if (equals(s,"Timur"))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		T--;
	}
    return 0;
}
