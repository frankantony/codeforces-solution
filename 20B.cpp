#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

int main() {
	float A, B, C;
	cin >> A >> B >> C;
	float delta = B*B - 4*A*C, root1, root2;
	if (C == 0  && B != 0 && A != 0)
		cout << "-1" << endl;
	else if (A == 0) {
		cout << "1" << endl;
		root1 = -C / B;
		cout << fixed << setprecision(5);
		cout << root1 << endl;
	}
	else if (delta < 0)
		cout << "0" << endl;
	else if (delta == 0) {
		cout << "1" << endl;
		root1 = -B/(2*A);
		cout << fixed << setprecision(5);
		cout << root1 << endl;
	}
	else {
		cout << "2" << endl;
		root1 = (-B + sqrt(delta))/(2*A);
		root2 = (-B - sqrt(delta))/(2*A);
		cout << fixed << setprecision(5);
		if (root1 <= root2) {
			cout << root1 << endl;
			cout << root2 << endl;
		}
		else {
			cout << root2 << endl;
			cout << root1 << endl;		
		}

	}
    return 0;
}

