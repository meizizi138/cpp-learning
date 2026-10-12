#include <iostream>
#include <iomanip>
using namespace std;

// w04_p2 菜单式面积计算器
//
// 结构原则：函数只负责【算】，main 负责【读输入、打印】
//   —— 函数收参数、返回结果，不读不写，这样才能被复用

const double PI = 3.14159;      // 题目指定用 3.14159

// 只算，不读不打印
double areaCircle(double r) {
	return PI * r * r;
}

double areaRect(double w, double h) {
	return w * h;
}

double areaTri(double b, double h) {
	return 0.5 * b * h;
}

int main() {
	int type;
	cin >> type;                     // 判题题不要写提示语

	if (type == 1) {
		double r;
		cin >> r;                    // 圆只要 1 个参数
		cout << fixed << setprecision(2);
		cout << "面积=" << areaCircle(r) << endl;
	}
	else if (type == 2) {
		double w, h;
		cin >> w >> h;               // 矩形要 2 个
		cout << fixed << setprecision(2);
		cout << "面积=" << areaRect(w, h) << endl;
	}
	else if (type == 3) {
		double b, h;
		cin >> b >> h;               // 三角形要 2 个
		cout << fixed << setprecision(2);
		cout << "面积=" << areaTri(b, h) << endl;
	}
	else {
		cout << "无效选项" << endl;   // 无效时【不读】第二行参数
	}

	return 0;
}
