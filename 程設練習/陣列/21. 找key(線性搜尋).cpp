//在一個未排序、大小為n的整數陣列中，尋找到一個特定的元素key。
#include<iostream>
using namespace std;

int main() {
	
	int n, key;
	cin >> n >> key;

	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bool found = false;

	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			found = true;
			break;
		}
	}
	if (found) cout << "yes" << endl;
	else cout << "no" << endl;

	delete[] arr;
	return 0;
}
