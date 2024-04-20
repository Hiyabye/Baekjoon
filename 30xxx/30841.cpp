#include <iostream>
using namespace std;

void solve(void) {
  long long a, b; cin >> a >> b;

  if (a == 0 || b == 0) cout << 0;
  else cout << a * b / (a + b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}