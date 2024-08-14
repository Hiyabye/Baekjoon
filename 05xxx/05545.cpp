#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a, b; cin >> a >> b;
  int c; cin >> c;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];
  sort(d.begin(), d.end(), greater<int>());

  int e = c, f = a;
  for (int i=0; i<n; i++) {
    if ((e + d[i]) * f <= e * (f + b)) break;
    e += d[i]; f += b;
  }
  cout << e / f;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}