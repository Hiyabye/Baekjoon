#include <iostream>
#include <unordered_map>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  unordered_map<int, bool> mp;
  while (n--) {
    int x; cin >> x;
    mp[x] = true;
  }

  for (auto [k, v] : mp) {
    if (mp.find(k+3) != mp.end() && mp.find(k+6) != mp.end()) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}