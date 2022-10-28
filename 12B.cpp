#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	string n, a;
	cin >> n >> a;
	sort(n.begin(), n.end());

	int len = n.size();
	for (int i = 0; i < len; i++) {
		if (n[i] != '0') {
			char aux = n[0];
			n[0] = n[i];
			n[i] = aux;
			break;
		}
	}

	if (n == a)
		cout << "OK" << endl;
	else
		cout << "WRONG_ANSWER" << endl;

    return 0;
}

