#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int v; cin >> v;

  map<int, int> m;
  for (int i=0; i<v; i++) {
    int x; cin >> x;
    if (m.find(x) == m.end()) m[x] = 1;
    else m[x]++;
  }

  int mx = 0, ans = 0;
  for (int i=1; i<=1000; i++) {
    if (m.find(i) != m.end() && m[i] > mx) {
      mx = m[i];
      ans = i;
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}