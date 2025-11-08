#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  vector<int> cnt(26, 0);
  for (char c : s) cnt[c-'A']++;
  for (char c : t) cnt[c-'A']--;

  for (int x : cnt) {
    if (x < 0) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "OK" : "NEED FIX");
  return 0;
}