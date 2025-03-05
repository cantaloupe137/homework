//將一大小為n的字元陣列的所有元素清為0。
#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	char* arr = new char[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = '0';
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	
	cout << endl;
	delete[] arr;
	return 0;
}