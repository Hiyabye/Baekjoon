#include <iostream>
#include <unordered_map>
using namespace std;

void solve(int idx) {
  int g; cin >> g;
  unordered_map<int, int> mp;
  while (g--) {
    int c; cin >> c;
    mp[c]++;
  }

  for (auto [k, v] : mp) {
    if (v == 1) {
      cout << "Case #" << idx << ": " << k << "\n";
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}