#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
using namespace std;

int main() {
	// ===== 实验 1：int 溢出 =====
	cout << "===== 实验 1：int 溢出 =====" << endl;
	int big = INT_MAX;
	cout << "INT_MAX   = " << big << endl;
	cout << "INT_MAX+1 = " << big + 1 << "   <-- 注意看它变成了什么" << endl;
	int over = 2000000000;
	cout << "\n2000000000 * 2 = " << over * 2 << "   <-- 也溢出了" << endl;

	// ===== 实验 2：字符和数字 =====
	cout << "\n===== 实验 2：字符 vs 数字 =====" << endl;
	char c = 'A';
	cout << "char c = 'A';" << endl;
	cout << "  当字符输出: " << c << endl;
	cout << "  当整数输出: " << (int)c << endl;
	cout << "  c + 1      : " << (char)(c + 1) << endl;
	cout << "\n'5' 和 5 的区别：" << endl;
	cout << "  (int)'5'   = " << (int)'5' << "   <-- 字符 '5' 的 ASCII 码" << endl;
	cout << "  '5' - '0'  = " << ('5' - '0') << "     <-- 这才是数字 5" << endl;

	// ===== 实验 3：截断 vs 四舍五入 =====
	cout << "\n===== 实验 3：截断 vs 四舍五入 =====" << endl;
	double d = 3.99;
	cout << "double d = " << d << endl;
	cout << "  (int)d        = " << (int)d << "   <-- 直接截断" << endl;
	cout << "  (int)(d+0.5)  = " << (int)(d + 0.5) << "   <-- 手动四舍五入" << endl;
	cout << "  round(d)      = " << round(d) << "   <-- 用函数" << endl;
	cout << "  floor(d)      = " << floor(d) << endl;
	cout << "  ceil(d)       = " << ceil(d) << endl;

	// ===== bonus：负数截断的方向 =====
	cout << "\n===== 附加：负数怎么截断 =====" << endl;
	cout << "  (int)(-3.99)  = " << (int)(-3.99) << "   <-- 是 -3 还是 -4？" << endl;
	cout << "  round(-3.5)   = " << round(-3.5) << endl;

	return 0;
}