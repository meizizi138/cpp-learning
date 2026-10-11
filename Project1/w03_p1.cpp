#include <iostream>
using namespace std;

int main() {
	double score;
	cin >> score;
	if (score > 100|| score < 0) {
		cout << "数据非法";
		return 0;
	}
	else if(score >= 90) {
		cout << "A";
	}
	else if(score >= 80) {
		cout << "B";
	}
	else if(score >= 70) {
		cout << "C";
	}
	else if(score >= 60) {
		cout << "D";
	}
	else {
		cout << "E";
	}

}