#include <iostream>
#include <string>
using namespace std;

void reverseWords(string s) {
	int n = int(s.length());
	int start = 0;
	for (int i = 0; i <= n; i++) {
		if (i == n || s[i] == ' ') {
			int left = start, right = i - 1;
			while (left < right) {
				char t = s[left];
				s[left] = s[right];
				s[right] = t;
				left++, right--;
			}
			start = i + 1;
		}
	}
	cout << s << endl;
}

int main() {
	string s;
	getline(cin, s);
	reverseWords(s);
}