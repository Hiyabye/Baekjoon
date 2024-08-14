#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline bool prefix(const string &s, const string &t) {
  return s.length() <= t.length() && equal(s.begin(), s.end(), t.begin());
}

inline bool suffix(const string &s, const string &t) {
  return s.length() <= t.length() && equal(s.rbegin(), s.rend(), t.rbegin());
}

bool solve(void) {
  vector<string> v(3);
  for (int i=0; i<3; i++) cin >> v[i];

  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    if (i == j) continue;
    if (prefix(v[i], v[j]) || suffix(v[i], v[j])) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}