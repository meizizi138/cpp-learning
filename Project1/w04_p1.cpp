#include <iostream>
using namespace std;

void isPrime() {
	int a, b;
	cin >> a >> b;
	int times1 = 0;
	for (int i = 1;i <= a;i++) {
		if (a % i == 0) {
			times1++;
		}
	}
	if (times1 == 2) {
		cout << a << " 是素数" << endl;
	}
	else {
		cout << a << " 不是素数" << endl;
	}
	int times2 = 0;
	for (int i = 1;i <= b;i++) {
		if (b % i == 0) {
			times2++;
		}
	}
	if (times2 == 2) {
		cout << b << " 是素数" << endl; 
	}
	else {
		cout << b << " 不是素数" << endl;
	}
}

	int main() {
		isPrime();
		return 0;
	}