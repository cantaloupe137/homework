//求一大小為n的整數陣列中，有多少元素為偶數？
#include<iostream>
using namespace std;

int countEven(int n) {
	int count = 0;
	if (n % 2 == 0) count++;
	return count;
}

int main() {
	int n, count = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		count += countEven(arr[i]);
	}
	cout << count << endl;
	delete[] arr;
	return 0;
}
