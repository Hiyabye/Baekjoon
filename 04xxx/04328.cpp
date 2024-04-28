#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int b; cin >> b;
  if (b == 0) return false;
  string p, m; cin >> p >> m;

  int mod = 0;
  for (char c : m) {
    mod = mod * b + c - '0';
  }

  int rem = 0;
  for (char c : p) {
    rem = (rem * b + c - '0') % mod;
  }

  vector<int> ans;
  while (rem) {
    ans.push_back(rem % b);
    rem /= b;
  }
  if (ans.empty()) ans.push_back(0);

  for (auto it = ans.rbegin(); it != ans.rend(); ++it) cout << *it;
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}