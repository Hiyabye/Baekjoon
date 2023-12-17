#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int g, l; cin >> g >> l;

  pair<int, int> ans = make_pair(g, l);
  for (int i=1; i*i<=l/g; i++) {
    if ((l/g) % i) continue;
    if (gcd(i, (l/g)/i) != 1) continue;
    ans = make_pair(i*g, l/i);
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}