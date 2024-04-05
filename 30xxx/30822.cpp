#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> cnt(26, 0);
  for (char c : s) cnt[c - 'a']++;
  cout << min({cnt['u'-'a'], cnt['o'-'a'], cnt['s'-'a'], cnt['p'-'a'], cnt['c'-'a']});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}