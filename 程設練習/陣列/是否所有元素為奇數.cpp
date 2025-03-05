//求一大小為n的整數陣列中，是否所有元素皆為奇數？
#include<iostream>
using namespace std;

bool isOdd(int n) {
	if (n % 2 == 0) return false;
	return true;
}

int main() {
	int n;
	bool judge = true;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (!isOdd(arr[i])) {
			judge = false;
			break;
		}
	}

	cout << (judge ? "yes" : "no" ) << endl;

	delete[] arr;
}