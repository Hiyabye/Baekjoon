#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;

  long long ans = (long long)sqrt(min(a1, a2) + min(a3, a4));
  while (ans * ans < min(a1, a2) + min(a3, a4)) ans++;
  while (ans * ans > min(a1, a2) + min(a3, a4)) ans--;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}