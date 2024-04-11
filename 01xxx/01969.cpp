#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

char calc(map<char, int> &mp) {
  char ret = 'A';
  for (auto it : mp) {
    if (it.second > mp[ret]) ret = it.first;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  string ans = "";
  for (int i=0; i<m; i++) {
    map<char, int> mp;
    for (int j=0; j<n; j++) mp[v[j][i]]++;
    ans += calc(mp);
  }

  int cnt = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (v[i][j] != ans[j]) cnt++;
    }
  }
  cout << ans << "\n" << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}