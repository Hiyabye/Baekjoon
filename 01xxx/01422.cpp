#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cmp(const string &a, const string &b) {
  return a + b > b + a;
}

void solve(void) {
  int k, n; cin >> k >> n;
  vector<string> v(k);
  for (int i=0; i<k; i++) cin >> v[i];
  sort(v.begin(), v.end(), cmp);

  int idx = 0, mx = v[0].length();
  for (int i=1; i<k; i++) {
    if (v[i].length() <= mx) continue;
    idx = i;
    mx = v[i].length();
  }

  string ans;
  for (int i=0; i<idx; i++) ans += v[i];
  for (int i=k; i<n; i++) ans += v[idx];
  for (int i=idx; i<k; i++) ans += v[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}