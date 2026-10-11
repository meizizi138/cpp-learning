#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int total;
	cin >> total;
	int h = total / 3600; 
	int m = (total % 3600) / 60;
	int s = total % 60;
	cout << "用时 " << h << " 小时 " << setfill ('0') << setw(2) << m << " 分 " << setw(2)<< s << " 秒 ";
	return 0;
}