//求一大小為n的整數陣列中，所有元素的所有位數的和。
#include<iostream>
using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	cout << sum;
	delete[] arr;
	return 0;
}
