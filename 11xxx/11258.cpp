#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int calc(const vector<pair<string, int>> &v, const string &s) {
  int ret = 0;
  if (v[0].first == s) ret += v[0].second;
  if (v[1].first == s.substr(0, 3)) ret += v[1].second;
  if (v[2].first == s.substr(0, 3)) ret += v[2].second;
  if (v[3].first == s.substr(3, 3)) ret += v[3].second;
  if (v[4].first == s.substr(3, 3)) ret += v[4].second;
  if (v[5].first == s.substr(4, 2)) ret += v[5].second;
  return ret;
}

void solve(void) {
  vector<pair<string, int>> v(6);
  for (int i=0; i<6; i++) cin >> v[i].first >> v[i].second;

  string s; cin >> s;
  while (s != "-1") {
    cout << calc(v, s) << "\n";
    cin >> s;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}