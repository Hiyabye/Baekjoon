#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
	string x; cin >> x;
	
	int sum = 0;
	for (char c : x) sum += c - '0';
	return sum % 9 == 0;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) cout << (solve() ? "YES" : "NO") << "\n";
	return 0;
}
