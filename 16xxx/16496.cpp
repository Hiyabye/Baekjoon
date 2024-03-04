#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cmp(const string &a, const string &b) {
  return a + b > b + a;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end(), cmp);

  string ans = "";
  for (int i=0; i<n; i++) ans += v[i];
  while (ans.length() > 1 && ans.front() == '0') ans.erase(0, 1);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}