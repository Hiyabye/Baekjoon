#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<char, char> mp;
  while (n--) {
    char a, b; cin >> a >> b;
    mp[a] = b;
  }

  int m; cin >> m;
  while (m--) {
    char c; cin >> c;
    cout << (mp.find(c) != mp.end() ? mp[c] : c);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}