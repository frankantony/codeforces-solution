#include<iostream>

using namespace std;

int main() {
	float A1, B1, C1, A2, B2, C2;
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	float det_main = A1 * B2 - A2 * B1;
	float det_sec1 = C2 * B1 - B2 * C1;
	float det_sec2 = C1 * A2 - C2 * A1;
	if (det_main != 0)
		cout << "1";
	else {
		if ((A1 == 0 && B1 == 0 && C1 != 0) || (A2 == 0 && B2 == 0 && C2 != 0) || (det_sec1 != 0 || det_sec2 != 0))
			cout << "0";
		else
			cout << "-1";
	}
	cout << endl;
    return 0;
}

