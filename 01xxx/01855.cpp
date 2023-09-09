#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int k; cin >> k;
  string s; cin >> s;

  vector<vector<char> > v(s.length()/k, vector<char>(k));
  for (int i=0; i<s.length(); i++) v[i/k][i%k] = s[i];
  for (int i=0; i<v.size(); i++) if (i & 1) reverse(v[i].begin(), v[i].end());
  for (int i=0; i<k; i++) for (int j=0; j<v.size(); j++) cout << v[j][i];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}