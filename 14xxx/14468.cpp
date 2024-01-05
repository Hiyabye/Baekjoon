#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

void solve(void) {
  string s; cin >> s;

  vector<pair<int, int>> v(26, make_pair(-1, -1));
  for (int i=0; i<52; i++) {
    int c = s[i] - 'A';
    if (v[c].first == -1) v[c].first = i;
    else v[c].second = i;
  }

  int ans = 0;
  for (int i=0; i<26; i++) {
    for (int j=0; j<26; j++) {
      if (i == j) continue;
      if (v[i].first < v[j].first && v[j].first < v[i].second && v[i].second < v[j].second) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}