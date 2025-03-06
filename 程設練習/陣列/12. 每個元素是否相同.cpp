//求一大小為n的整數陣列中，所有元素之值是否皆為相同？
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int check = arr[0];
	bool same = true;

	for (int i = 0; i < n; i++) {
		if (check != arr[i]) {
			same = false;
			break;
		}
	}

	if (same) cout << "yes" << endl;
	else cout << "no" << endl;
	
	

	delete[] arr;

	return 0;
}
