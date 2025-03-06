//求一大小為n的整數陣列中第二大的數？
#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max = arr[0], max_2 = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max_2 = max;
			max = arr[i];
		}
		else if (arr[i] > max_2 && arr[i] != max) {
			max_2 = max;
		}
	}

	if (max_2 == max) cout << "no";
	else cout << max_2;
	delete[] arr;
	return 0;
}
