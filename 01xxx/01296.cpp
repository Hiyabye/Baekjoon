#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;
  vector<pair<string, long long>> p(n);

  for (int i=0; i<n; i++) {
    cin >> p[i].first;
    int l = count(s.begin(), s.end(), 'L') + count(p[i].first.begin(), p[i].first.end(), 'L');
    int o = count(s.begin(), s.end(), 'O') + count(p[i].first.begin(), p[i].first.end(), 'O');
    int v = count(s.begin(), s.end(), 'V') + count(p[i].first.begin(), p[i].first.end(), 'V');
    int e = count(s.begin(), s.end(), 'E') + count(p[i].first.begin(), p[i].first.end(), 'E');
    p[i].second = ((l+o)*(l+v)*(l+e)*(o+v)*(o+e)*(v+e)) % 100;
  }

  sort(p.begin(), p.end(), [](auto a, auto b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
  });
  cout << p[0].first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}