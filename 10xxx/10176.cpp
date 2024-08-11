#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  vector<bool> v(26, false);
  for (char c : s) {
    if (!isalpha(c)) continue;
    v[tolower(c) - 'a'] = true;
  }

  for (int i=0; i<13; i++) {
    if (v[i] != v[25 - i]) return false;
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