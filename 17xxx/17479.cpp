#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;
  vector<unordered_map<string, int>> mp(3);
  while (a--) {
    string s; int t; cin >> s >> t;
    mp[0][s] = t;
  }
  while (b--) {
    string s; int t; cin >> s >> t;
    mp[1][s] = t;
  }
  while (c--) {
    string s; cin >> s;
    mp[2][s] = 0;
  }
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  long long cur = 0, flag = 0;
  for (int i=0; i<n; i++) {
    if (mp[0].find(v[i]) != mp[0].end()) {
      cur += mp[0][v[i]];
    }
  }
  for (int i=0; i<n; i++) {
    if (mp[1].find(v[i]) != mp[1].end()) {
      if (cur < 20000) return false;
      cur += mp[1][v[i]];
    }
  }
  for (int i=0; i<n; i++) {
    if (mp[2].find(v[i]) != mp[2].end()) {
      if (cur < 50000 || flag) return false;
      cur += mp[2][v[i]];
      flag = 1;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Okay" : "No");
  return 0;
}