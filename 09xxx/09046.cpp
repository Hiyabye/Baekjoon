#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

char solve(void) {
  string s; getline(cin, s);

  vector<int> v(26, 0);
  for (char c : s) {
    if (c == ' ') continue;
    v[c - 'a']++;
  }
  
  int mx = *max_element(v.begin(), v.end());
  if (count(v.begin(), v.end(), mx) > 1) return '?';
  return 'a' + distance(v.begin(), find(v.begin(), v.end(), mx));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) cout << solve() << "\n";
  return 0;
}