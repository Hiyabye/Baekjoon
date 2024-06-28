#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  map<string, bool> m;
  string a, b;
  for (int i=0; i<n; i++) {
    cin >> a >> b;
    if (a == "ChongChong") m[a] = true;
    if (b == "ChongChong") m[b] = true;
    if (m.find(a) == m.end()) {
      if (m.find(b) == m.end()) m[a] = m[b] = false;
      else m[a] = m[b];
    } else {
      if (m.find(b) == m.end()) m[b] = m[a];
      else m[a] = m[b] = m[a] || m[b];
    }
  }

  int ans = 0;
  for (auto it : m) {
    if (it.second) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}