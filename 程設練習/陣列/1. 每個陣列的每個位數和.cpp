// 求一大小為n的整數陣列中，所有元素的所有位數的和。
#include<iostream>
using namespace std;

//處理每個數字的位數和
int sumAllDigit(int n) {
	int sum = 0;
	while (n != 0) {
		int first = n % 10;
		sum += first;
		n /= 10;
	}
	return sum;
}


int main() {
	int n, sum1 = 0;
	cin >> n;
	int* arr = new int[n];

	//輸入陣列內容
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//加總
	for (int i = 0; i < n; i++) {
		sum1 += sumAllDigit(arr[i]);
	}
	
	cout << sumAllDigit(sum1);
	
	delete[] arr;
	return 0;
}
