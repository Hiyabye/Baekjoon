#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int k; cin >> k;

  vector<vector<char>> ans(k, vector<char>((s.length()+k-1)/k, 'z'));
  for (int i=0; i<s.length(); i++) ans[i%k][i/k] = s[i];

  for (int i=0; i<k; i++) sort(ans[i].begin(), ans[i].end());
  for (int i=0; i<s.length(); i++) s[i] = ans[i%k][i/k];
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}