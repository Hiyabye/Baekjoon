#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<string> s(n), t(n);
  for (int i=0; i<n; i++) cin >> s[i] >> t[i];

  unordered_set<string> st;
  for (int i=0; i<m; i++) st.insert(t[i]);

  vector<string> ans;
  for (int i=m; i<n && ans.size()<k; i++) {
    if (st.find(t[i]) == st.end()) {
      st.insert(t[i]);
      ans.push_back(s[i]);
    }
  }

  cout << ans.size() << "\n";
  for (const string &a : ans) cout << a << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}