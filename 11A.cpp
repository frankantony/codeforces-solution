#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int N, D;
	cin >> N >> D;
	int a[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];

	int result = 0;	
	for (int i = 0; i < N-1; i++)	{
		if (a[i] >= a[i+1]) {
			int k = ceil((a[i] - a[i+1]) / D) + 1;
			a[i+1] = a[i+1] + k * D;
			result += k;
		}
	}

	cout << result << endl;
    return 0;
}

