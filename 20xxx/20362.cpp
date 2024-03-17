#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; string s; cin >> n >> s;
  vector<pair<string, string>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  int idx = -1;
  for (int i=0; i<n; i++) {
    if (v[i].first == s) {
      idx = i;
      break;
    }
  }

  int cnt = 0;
  for (int i=0; i<idx; i++) {
    if (v[i].second == v[idx].second) cnt++;
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}