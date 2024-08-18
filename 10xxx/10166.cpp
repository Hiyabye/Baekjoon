#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int d1, d2; cin >> d1 >> d2;

  unordered_map<int, unordered_set<int>> mp;
  for (int i=d1; i<=d2; i++) for (int j=1; j<=i; j++) {
    int g = gcd(i, j);
    mp[i / g].insert(j / g);
  }

  int ans = 0;
  for (auto& [_, s] : mp) {
    ans += s.size();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}