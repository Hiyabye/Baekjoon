#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  string t; getline(cin, t);

  unordered_map<char, int> cnt;
  for (char c : s) cnt[c]++;
  for (char c : t) cnt[c]--;

  for (auto [k, v] : cnt) {
    if (v) cout << k;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}