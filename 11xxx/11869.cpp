#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m; cin >> m;
  vector<int> p(m);
  for (int i=0; i<m; i++) cin >> p[i];

  int ans = 0;
  for (int i=0; i<m; i++) ans ^= p[i];
  cout << (ans > 0 ? "koosaga" : "cubelover");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}