#include "7.h"

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(true);
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10, false);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}