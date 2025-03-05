//將一大小為n的字元陣列反轉。
#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	char* arr = new char[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n / 2; i++) {
		swap(arr[i], arr[n - i - 1]);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	
	cout << endl;
	delete[] arr;
	return 0;
}