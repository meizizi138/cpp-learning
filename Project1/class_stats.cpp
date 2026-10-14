#include <iostream>
#include <iomanip>

const int n = 30;
using namespace std;
int findMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int  findMin(int arr[], int n) {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

double average(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return 1.0 * sum / n;
}

void sortAst(int arr[n], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

void printBands(int arr[n], int n) {
	int excellent = 0, good = 0, average = 0, pass = 0, fail = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 90) {
			excellent++;
		}
		else if (arr[i] >= 80) {
			good++;
		}
		else if (arr[i] >= 70) {
			average++;
		}
		else if (arr[i] >= 60) {
			pass++;
		}
		else {
			fail++;
		}
	}
	cout << "优秀: " << excellent << "人" <<endl;
	cout << "良好: " << good << "人" <<endl;
	cout << "中等: " << average << "人" <<endl;
	cout << "及格: " << pass << "人" <<endl;
	cout << "不及格: " << fail << "人" <<endl;
}

void printAll(int arr[n], int n) {
	for (int b = 0;b < n; b++) {
		cout << arr[b] << " ";
	}
}

int main(){
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << fixed << setprecision(2);
	cout << "平均分: " << average(arr, n) << endl;
	cout << "最高分: " << findMax(arr, n) << endl;
	cout << "最低分: " << findMin(arr, n) << endl;
	sortAst(arr, n);
	printAll(arr, n);
	cout << endl;
	printBands(arr, n);
	return 0;
}
