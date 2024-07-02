#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  unordered_map<char, int> mp;
  for (char c : a) mp[c]++;
  for (char c : b) mp[c]--;

  int ans = 0;
  for (auto [_, v] : mp) {
    ans += abs(v);
  }
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}