#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
	int n = int(s.length());
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i]) {
			return false;
		}
	}
	return true;
}



int main() {
	string s;
	cin >> s;
	if (isPalindrome(s)) {
		cout << "是回文" << endl;
	}
	else {
		cout << "不是回文" << endl;
	}


	int count[26] = { 0 };
	for (int i = 0; i < s.length(); i++) {
		int idx = s[i] - 'a';
		count[idx]++;
	}
	for (int i = 0; i < 26; i++) {
		if (count[i] > 0) {
			cout << char(i + 'a') << ":" << count[i] << endl;
		}
	}
}