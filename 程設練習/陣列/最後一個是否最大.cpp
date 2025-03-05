//求一大小為n的整數陣列中，最後一個元素之值是否為其中之最大值？
#include<iostream>
using namespace std;
int main() {
	
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bool isBiggest = true;
	
	for (int i = 0; i < n - 1; i++) {
		if (arr[n - 1] <= arr[i]) {
			isBiggest = false;
			break;
		}
	}

	if (isBiggest) cout << "yes" << endl;
	else cout << "no" << endl;

	delete[] arr;
	return 0;
}