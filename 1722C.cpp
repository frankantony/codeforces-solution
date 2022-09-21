#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T) {
		cin >> N;
		string st[3][N];
		unordered_map<string, int> map;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < N; j++) {
				cin >> st[i][j];
				map[st[i][j]] = map[st[i][j]] + 1;
			}
		}
		int result[3];
		for (int i = 0; i < 3; i++) {
			result[i] = 0;
			for (int j = 0; j < N; j++) {
				if (map[st[i][j]] == 1)
					result[i] += 3;
				else if (map[st[i][j]] == 2)
					result[i] += 1;
			}
		}
		cout << result[0] << " " << result[1] << " " << result[2] << endl;
		T--;
	}
    return 0;
}

