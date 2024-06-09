#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  pair<int, string> ans = {0, ""};
  for (int i=0; i<n; i++) {
    int a = 0, b = 0, c = 0;
    for (int j=0; j<4; j++) a += (s[j] - v[i][j]) * (s[j] - v[i][j]);
    for (int j=4; j<6; j++) b += (s[j] - v[i][j]) * (s[j] - v[i][j]);
    for (int j=6; j<8; j++) c += (s[j] - v[i][j]) * (s[j] - v[i][j]);
    if (a*b*c > ans.first || (a*b*c == ans.first && v[i] < ans.second)) ans = {a*b*c, v[i]};
  }
  cout << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}