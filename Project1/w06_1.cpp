#include <iostream>
using namespace std;

void swapByPointer(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int x, y;
	cin >> x >> y;

	cout << "交换前:x=" << x << ",y=" << y << endl;
	swapByPointer(&x, &y);              // ← 注意这里的 &
	cout << "交换后:x=" << x << ",y=" << y << endl;

	return 0;
}