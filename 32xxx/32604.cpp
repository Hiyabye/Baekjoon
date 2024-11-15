#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++) cin >> a[i] >> b[i];
	
	for (int i=1; i<n; i++) {
		if (a[i-1] > a[i] || b[i-1] > b[i]) return false;
	}
	return true;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cout << (solve() ? "yes" : "no");
	return 0;
}
