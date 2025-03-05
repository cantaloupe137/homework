#include<iostream>
using namespace std;

int main() {
	int n;
	bool found = false;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > 3) {
			found = true;
			break;
		}
	}
	if (found) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}