#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

inline bool check(int n, const vector<string> &v, int k) {
  unordered_set<string> s;
  for (int i=0; i<n; i++) {
    string t = v[i].substr(v[i].length()-k);
    if (s.find(t) != s.end()) return false;
    s.insert(t);
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 1;
  while (!check(n, v, ans)) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}