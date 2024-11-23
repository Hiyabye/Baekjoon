#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;

  return (a == 1 || a == 3) && (b == 6 || b == 8) && (c == 2 || c == 5);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

  cout << (solve() ? "JAH" : "EI");
	return 0;
}