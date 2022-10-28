#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		int a[N], b[N], a_sort[N], b_sort[N];

		for (int i = 0; i < N; i++) {
			cin >> a[i];
			a_sort[i] = a[i];
		}

		for (int i = 0; i < N; i++) {
			cin >> b[i];
			b_sort[i] = b[i];
		}

		sort (a_sort, a_sort + N);
		sort (b_sort, b_sort + N);
		
		int result = 0;
		for (int i = 0; i < N; i++)
			if (a_sort[i] != b_sort[i])
				result++;

		int newCont = 0;
		for (int i = 0; i < N; i++)
			if (a[i] != b[i])
				newCont++;

		cout << result + (result != newCont) << endl;

		T--;
	}
    return 0;
}

