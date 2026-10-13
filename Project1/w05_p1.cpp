#include <iostream>
#include <iomanip>
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

int sumUp(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

int countValues(int arr[], int n,int num) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == num) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "总分:" << sumUp(arr, n) << endl;
	cout << fixed << setprecision(2);
	cout << "平均分:" << 1.0 * sumUp(arr, n) / n << endl;
	cout << "最高分:" << findMax(arr, n) << " 出现次数:" << countValues(arr, n, findMax(arr, n)) << endl;
	cout << "最低分:" << findMin(arr, n) << " 出现次数:" << countValues(arr, n, findMin(arr, n)) << endl;





}