#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

inline bool check(unordered_map<char, int> &a, unordered_map<char, int> &b) {
  for (char c='a'; c<='z'; c++) {
    if (a[c] < b[c]) return false;
  }
  return true;
}

void solve(void) {
  string s; cin >> s;
  unordered_map<char, int> a;
  for (char c : s) a[c]++;

  int n; cin >> n;
  while (n--) {
    string t; cin >> t;
    unordered_map<char, int> b;
    for (char c : t) b[c]++;
    if (check(a, b)) cout << t << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}