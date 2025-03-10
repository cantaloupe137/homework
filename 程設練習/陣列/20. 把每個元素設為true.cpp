//將一大小為n的bool陣列的所有元素設為true。
#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	bool* arr = new bool[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = true;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	
	cout << endl;
	delete[] arr;
	return 0;
}
