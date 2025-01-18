#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

inline bool check(const string &s, const unordered_set<char> &us) {
  for (char c : s) {
    if (us.find(c) == us.end()) return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  unordered_set<char> us;
  for (int i=0; i<n; i++) {
    us.insert(v[i][0]);
  }

  for (int i=0; i<n; i++) {
    if (check(v[i], us)) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 'Y' : 'N');
  return 0;
}