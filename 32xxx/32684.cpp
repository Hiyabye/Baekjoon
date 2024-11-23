#include <iostream>
using namespace std;

double calc(void) {
	int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
  return a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2;
}

void solve(void) {
	cout << (calc() > calc() + 1.5 ? "cocjr0208" : "ekwoo");
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
	return 0;
}