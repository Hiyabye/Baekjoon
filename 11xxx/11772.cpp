#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long ans = 0;
  while (n--) {
    int p; cin >> p;
    ans += pow(p / 10, p % 10);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}