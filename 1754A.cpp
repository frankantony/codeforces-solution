#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T) {
		int n;
		cin >> n;
		string st;
		cin >> st;
		int count = 0, len = st.size();
		for (int i = 0; i < len; i++) {
			if (st[i] == 'Q')
				count++;
			else
				count--;

			if (count < 0)
				count = 0;
		}
		
		if (count == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

		T--;
	}
    return 0;
}

