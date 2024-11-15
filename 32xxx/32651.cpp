#include <iostream>
using namespace std;

void solve(void) {
	int n; cin >> n;
	
	cout << (n <= 100000 && n % 2024 == 0 ? "Yes" : "No");
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	solve();
	return 0;
}
