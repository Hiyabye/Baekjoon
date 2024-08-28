#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n, 0);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (char c : s) v[i] |= (1 << (c - 'a'));
  }

  int mask = (1<<27)-1;
  while (m--) {
    int o; char x; cin >> o >> x;
    if (o == 1) {
      mask &= ~(1 << (x - 'a'));
    } else if (o == 2) {
      mask |= (1 << (x - 'a'));
    }
    int cnt = 0;
    for (int i=0; i<n; i++) {
      if ((v[i] & mask) == v[i]) cnt++;
    }
    cout << cnt << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}