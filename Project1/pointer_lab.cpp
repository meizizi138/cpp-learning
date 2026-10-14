#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int* p = &a;
	//1.
	cout << &a << endl;
	cout << &p << endl;
	cout << p << endl;
	//2.
	*p = 2;
	cout << a << endl;
	cout << p << endl;
	//3.
	cout << p << endl;
	cout << p + 1 << endl;
	//4.
	int n;
	cout << "输入数组长度 ：" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout << "和 = " << sum << endl;

	delete[] arr;
	arr = nullptr;
		//5.
		// ===== 实验 5：空指针 =====
		// 预期：delete 后置空能让"误用"变成可判断的状态
		// 实际：见实验 4 的最后两行（delete[] arr; arr = nullptr;）
		// 结论：悬空指针判断不出来，空指针可以 —— 所以 delete 后要置空
}