//求一大小為n的自然數陣列，所有元素之最大公因數。
#include<iostream>
using namespace std;

static int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

static int gcdArr(int arr[], int n) {
	if (n == 1) return arr[0];
	return gcd(arr[0], gcdArr(arr + 1, n - 1));
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << gcdArr(arr, n);
	delete[] arr;
	return 0;
}