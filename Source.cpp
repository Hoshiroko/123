#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int**a = new int *[n];
	for (int i = 0; i<n; ++i) {
		a[i] = new int[n];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	int index = 0, sum = 0, max = 0;
	for (int i = 0; i < n; ++i) {
		sum = 0;
		for (int j = 0; j < m; ++j) {
			sum += a[i][j];
		}
		if (sum > max) {
			max = sum;
			index = i;
		}
	}
	delete[]a;
	cout << max << endl << index << endl;
	return 0;
}