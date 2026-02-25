#include <iostream>
using namespace std;

void solve(void) {
  int k, s; cin >> k >> s;

  cout << s / k + s % k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}