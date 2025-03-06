//求一大小為n的整數陣列中，是否有任一元素之值不小於n？
#include<iostream>
using namespace std;
int main() {
	int n;
	bool find = false;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (n <= arr[i]) {
			find = true;
			break;
		}
	}

	if (find) cout << "yes" << endl;
	else cout << "no" << endl;
	delete[] arr;
	return 0;
}
