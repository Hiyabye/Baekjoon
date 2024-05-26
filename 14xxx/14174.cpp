#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> calc(const string &a, const string &b) {
  vector<int> p(26, 0), q(26, 0);
  for (char c : a) p[c - 'a']++;
  for (char c : b) q[c - 'a']++;
  vector<int> ret(26, 0);
  for (int i=0; i<26; i++) ret[i] = max(p[i], q[i]);
  return ret;
}

vector<int> merge(const vector<int> &a, const vector<int> &b) {
  vector<int> ret(26, 0);
  for (int i=0; i<26; i++) ret[i] = a[i] + b[i];
  return ret;
}

void solve(void) {
  int n; cin >> n;

  vector<int> ans(26, 0);
  while (n--) {
    string a, b; cin >> a >> b;
    ans = merge(ans, calc(a, b));
  }

  for (int i=0; i<26; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}