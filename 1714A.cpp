#include<iostream>

using namespace std;

struct Date {
	int H, M;
};

int diference_date_minutes (Date a, Date b) {
	int minutes_a = a.H * 60 + a.M, minutes_b = b.H * 60 + b.M;
	if (minutes_b >= minutes_a)
		return minutes_b - minutes_a;
	else
		return (24*60 - minutes_a) + minutes_b;
}

int main() {
	int T, N;
	Date current_date;
	cin >> T;
	while (T) {
		cin >> N >> current_date.H >> current_date.M;
		Date date;
		cin >> date.H >> date.M;
		int minimum = diference_date_minutes(current_date, date);
		for (int i = 0; i < N-1; i++) {
			cin >> date.H >> date.M;
			int dif = diference_date_minutes(current_date, date);
			if (minimum > dif)
				minimum = dif;
		}
		cout << (minimum / 60) << " " << (minimum % 60) << endl;
		T--;
	}
    return 0;
}

