#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//6 5 4 3 2 1
	//9 5 5 4 1 1
	sort(a.begin(), a.end()); // sort the sequence in non-decreasing order
	int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		// check if the no. of grannies at this point is what the i-th granny expects to see
		if ((i + 1) >= a[i]) {
			ans = i + 1;
			break;
		}
	}
	// don't forget to add 1 because Maria already there
	cout << ans + 1 << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

