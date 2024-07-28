#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<int, int> mp;
  while (n--) {
    char c; int a, b; cin >> c >> a >> b;
    for (int i=a; i<b; i++) mp[i]++;
  }

  for (auto [_, v] : mp) {
    cout << (char)(v + 64);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}