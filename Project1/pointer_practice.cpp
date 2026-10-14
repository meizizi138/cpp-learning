#include <iostream>
using namespace std;


int sumByPointer(int* arr, int n) {
	int total = 0;
	for (int* q = arr; q < arr + n; q++) {
		total += *q;
	}
	return total;
}

int main(){
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << sumByPointer(arr, n) << endl;
	return 0;
}