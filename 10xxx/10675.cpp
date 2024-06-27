#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(int a, int b, int c, int k, const vector<int> &v) {
  auto it_a = find(v.begin(), v.end(), a);
  auto it_b = find(v.begin(), v.end(), b);

  return it_a != v.end() && it_b != v.end() && it_a < it_b ? c : 1e9;
}

void solve(void) {
  int a, b, n; cin >> a >> b >> n;

  int ans = 1e9;
  while (n--) {
    int c; cin >> c;
    int k; cin >> k;
    vector<int> v(k);
    for (int i=0; i<k; i++) cin >> v[i];
    ans = min(ans, calc(a, b, c, k, v));
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}