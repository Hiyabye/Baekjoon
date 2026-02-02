#include <iostream>
#include <map>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  map<char, int> mp;
  for (char c : s) mp[c]++;

  int odd = 0;
  for (const auto &[_, v] : mp) {
    if (v & 1) odd++;
  }
  return odd <= 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}