#include <iostream>
using namespace std;

//int main() {
//	int sum = 0;
//	int times = 0;
//	int num1;
//	cout << "请输入数字：（输入0结束）" << endl;
//	cin >> num1;
//	while (num1 != 0) {
//		sum += num1;
//		times++;
//		cin >> num1;
//	}
//	cout << "您输入数字之和为：" << sum << ",共输入" << times << "次。" << endl;
//
//}

//int main() {
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 1;i <= n; i++) {
//		sum += i;
//	}
//	cout << "和=" << sum << endl;
//	cout << "偶数：";
//	for (int j = 1;j <= n;j++) {
//		if (j % 2 == 0) {
//			cout << j << " ";
//		}
//	}
//	cout << endl;
//}

int main() {
	int day;
	cin >> day;
	switch (day) {
	case 1:
		cout << "星期一";
		break;
	case 2:
		cout << "星期二";
		break;
	case 3:
		cout << "星期三";
		break;
	case 4:
		cout << "星期四";
		break;
	case 5:
		cout << "星期五";
		break;
	case 6:
		cout << "星期六";
		break;
	case 7:
		cout << "星期日";
		break;
	default:
		cout << "输入有误";
		break;
	}
}