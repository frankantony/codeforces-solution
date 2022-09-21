#include<iostream>

using namespace std;

long long mdc (long long a,long long b) {
	if (b == 0)
		return a;
	return mdc(b, a % b);
}

int count_claps (long long a,long long b, long long c, long long d) {
	if (a == 0 && c == 0) return 0;
	long long a_b = mdc(a, b), c_d = mdc(c, d);
	a = a / a_b;
	b = b / a_b;
	c = c / c_d;
	d = d / c_d;
	long long x = c * b, y = d * a;
	long long x_y = mdc(x, y) == 0 ? 1 : mdc(x,y);
	x = x / x_y;
	y = y / x_y;
	if ((x == 1 && y == 1))
		return 0;
	else if (y == 1)
		return 1;
	return 2;
}

int main() {
	long long a, b, c, d;
	int T;
	cin >> T;
	while (T) {
		cin >> a >> b >> c >> d;
		int v = count_claps (a, b, c, d), w = count_claps (c, d, a, b);
		if (w <= v)
			cout << w << endl;
		else
			cout << v << endl;
		T--;
	}
    return 0;
}
