#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<char, int> mp = {
  {'1', 0}, {'Q', 0}, {'A', 0}, {'Z', 0},
  {'2', 1}, {'W', 1}, {'S', 1}, {'X', 1},
  {'3', 2}, {'E', 2}, {'D', 2}, {'C', 2},
  {'4', 3}, {'R', 3}, {'F', 3}, {'V', 3}, {'5', 3}, {'T', 3}, {'G', 3}, {'B', 3},
  {'6', 4}, {'Y', 4}, {'H', 4}, {'N', 4}, {'7', 4}, {'U', 4}, {'J', 4}, {'M', 4},
  {'8', 5}, {'I', 5}, {'K', 5}, {',', 5},
  {'9', 6}, {'O', 6}, {'L', 6}, {'.', 6},
  {'0', 7}, {'-', 7}, {'=', 7}, {'P', 7}, {'[', 7}, {']', 7}, {';', 7}, {'\'', 7}, {'/', 7}
};

void solve(void) {
  string s; cin >> s;

  vector<int> ans(8, 0);
  for (char c : s) ans[mp[c]]++;
  for (int x : ans) cout << x << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}