//求一大小為n的整數陣列中最小的數？
#include<iostream>
using namespace std;

int main() {

	int n, count = 0;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) min = arr[i];
	}

	cout << min << endl;

	delete[] arr;
	return 0;
}
