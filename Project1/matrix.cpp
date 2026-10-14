#include <iostream>
using namespace std;

const int MAXN = 20;
void printTrans(int a[MAXN][MAXN], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	int a[MAXN][MAXN];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	printTrans(a, n, m);
}