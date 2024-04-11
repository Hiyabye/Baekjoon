#include <iostream>
using namespace std;

void solve(void) {
  long long a, b, c, d; cin >> a >> b >> c >> d;

  cout << (c + d) / (a - b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}