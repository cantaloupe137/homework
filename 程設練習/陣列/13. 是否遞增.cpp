//求一大小為n的整數陣列中，所有元素之值是否為遞增？
#include<iostream>
using namespace std;
int main() {
	
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bool increase = true;

	for (int i = 1; i < n; i++) {
		if (arr[i - 1] >= arr[i]) {
			increase = false;
			break;
		}
	}

	if (increase) cout << "yes" << endl;
	else cout << "no" << endl;

	delete[] arr;
	return 0;
}
