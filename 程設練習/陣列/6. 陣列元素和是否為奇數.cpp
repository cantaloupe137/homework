//求一大小為n的整數陣列，所有元素之和是否為奇？
#include<iostream>
using namespace std;

bool isOdd(int n) {
	return n % 2 != 0;
}
int main() {
	bool judge = true;
	int n, sum = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (isOdd(sum)) cout << "yes";
	else cout << "no" << endl;
	delete[] arr;
	return 0;
}
