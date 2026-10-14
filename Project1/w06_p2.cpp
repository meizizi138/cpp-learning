#include <iostream>
#include <string>
using namespace std;

// w06_p2 判断回文字符串
//
// 这题的核心和 w05_p2（数组反转）是同一个"对称结构"：
//   数组反转 -> 交换 arr[i] 和 arr[n-1-i]
//   回文判断 -> 比较 s[i] 和 s[n-1-i]（只比较，不交换）
//
// 关键：return true 必须在【循环外面】
//   循环里只能 return false（一发现不对称就立刻否定）
//   循环走完都没否定，才是回文

bool isPalindrome(string s) {
	int n = int(s.length());
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i]) {
			return false;              // 一发现不对称，立刻返回 false
		}
	}                                   // 循环到这里结束
	return true;                        // 全部比完都没问题，才是回文
}

int main() {
	string s;
	cin >> s;                           // 判题题不要写提示语

	cout << s;                          // 先输出原串（题目要求 <原串> 是回文）
	if (isPalindrome(s)) {
		cout << " 是回文" << endl;       // 注意：s 和"是回文"之间有一个空格
	}
	else {
		cout << " 不是回文" << endl;
	}

	return 0;
}
