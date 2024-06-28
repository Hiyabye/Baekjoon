#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n, ans = 0;
  cin >> n;

  map<string, bool> m;
  string s;
  for (int i=0; i<n; i++) {
    cin >> s;
    if (s == "ENTER") m.clear();
    else if (m.find(s) == m.end()) {
      m[s] = true;
      ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}