#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int ng, nm; cin >> ng >> nm;
  vector<int> g(ng), m(nm);
  for (int i=0; i<ng; i++) cin >> g[i];
  for (int i=0; i<nm; i++) cin >> m[i];
  sort(g.begin(), g.end());
  sort(m.begin(), m.end());

  for (int i=0, j=0; i<ng || j<nm;) {
    if (i == ng || j == nm) {
      cout << (i == ng ? "MechaGodzilla" : "Godzilla") << "\n";
      return;
    }
    if (g[i] < m[j]) i++;
    else j++;
  }
  cout << "uncertain\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}