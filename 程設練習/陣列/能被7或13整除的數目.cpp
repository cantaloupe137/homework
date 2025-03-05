//求一大小為n的自然數陣列，可被7或13整除的元素的數目。
#include<iostream>
using namespace std;

int bySevenOrThirteen(int n) {
	int count = 0;
	if (n % 7 == 0 || n % 13 == 0) count++;
	return count;
}

int main() {
	int n, count = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		count += bySevenOrThirteen(arr[i]);
	}
	cout << count << endl;
	delete[] arr;
	return 0;
}
