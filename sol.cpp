#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// we assume that the list provided is already sorted
	// in non-decreasing order
	// start the iteration from the end of the list
	// and change the value of 'k' elements into 'x'
	// to achieve the minimum total time needed by Luba
	for (int i = n - 1; i >= 0; i--) {
		if (k > 0) {
			a[i] = x;
			k--;
		}
	}
	int total_time = 0;
	// calculate the minimum total time
	for (int i = 0; i < n; i++) {
		total_time += a[i];
	}
	cout << total_time << '\n';
	return 0;
}
