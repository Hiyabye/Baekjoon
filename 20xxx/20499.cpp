#include <iostream>
using namespace std;

void solve(void) {
  int k, d, a; char tmp; cin >> k >> tmp >> d >> tmp >> a;

  if (k + a < d || d == 0) cout << "hasu";
  else cout << "gosu";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}