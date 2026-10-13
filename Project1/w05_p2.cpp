#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0;i <= n - 1;i++) {
		cin >> arr[i];
	}

	for (int t = 0; t < n / 2;t++) {
		int m = arr[t];
		arr[t] = arr[n - 1 - t];
		arr[n - 1 - t] = m;
	}

	for (int j = 0; j < n; j++) {
		cout << arr[j] << " ";
	}
	return 0;
}