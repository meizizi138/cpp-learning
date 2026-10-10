#include <iostream>
using namespace std;
//
//int main() {
//	double num1, num2;
//	cout << "请输入两个数字：" << endl;
//	cin >> num1 >> num2;
//	if (num2 == 0) {
//		cout << "除数为0发生错误" << endl;
//		return 1;
//	}
//	cout << "两数相加等于：" << num1 + num2 << endl;
//	cout << "两数相减等于：" << num1 - num2 << endl;
//	cout << "两数相乘等于：" << num1 * num2 << endl;
//	cout << "两数相除等于：" << num1 / num2 << endl;
//	return 0;
//}
//

#include <cstdlib>
#include <ctime>

int main() {
	int num = 0;
	srand(time(0));
	int answer = rand() % 100 + 1;
	int guess = 0;
	while (guess != answer){
		num = num + 1;
		cout << "请输入数字进行猜数字："<< endl;
		cin >> guess;
		if (guess == answer) {
			cout << "成功胜利,一共猜了" << num << "次了" <<endl;
		return 0;
		}
		else if (guess < answer) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "猜大了" << endl;
		}
		}
}