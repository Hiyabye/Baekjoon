#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<long long> &v, int a, int b) {
  if (a == b) return false;
  if (a > b) swap(a, b);
  for (int i=a+1; i<b; i++) {
    if (v[a]*i + v[b]*a + v[i]*b >= v[a]*b + v[b]*i + v[i]*a) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<n; j++) {
      if (check(v, i, j)) cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}