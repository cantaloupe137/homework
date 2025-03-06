//將一大小為n的字元陣列，頭一個和最末一個元素的內容對調。
#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	char* arr = new char[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	swap(arr[0], arr[n - 1]);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	
	cout << endl;
	delete[] arr;
	return 0;
}
