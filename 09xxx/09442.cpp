#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;
  string s; cin >> s;
  vector<pair<string, string>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].second;

  string t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for (int i=0; i<26; i++) {
    t[s[i] - 'A'] = (char)('A' + i);
  }

  for (int i=0; i<n; i++) {
    v[i].first = v[i].second;
    for (char &c : v[i].first) {
      c = t[c - 'A'];
    }
  }
  sort(v.begin(), v.end());

  cout << "year " << idx << "\n";
  for (int i=0; i<n; i++) {
    cout << v[i].second << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}