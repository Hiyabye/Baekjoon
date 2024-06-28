#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (!(n % i)) ans += i;
  }
  cout << 5*ans-24;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}