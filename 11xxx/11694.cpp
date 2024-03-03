#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  int ans = 0;
  for (int i=0; i<n; i++) ans ^= p[i];

  int one = count(p.begin(), p.end(), 1);
  if (one == 0) cout << (ans ? "koosaga" : "cubelover");
  else if (one == n) cout << (ans & 1 ? "cubelover" : "koosaga");
  else if (one & 1) cout << (ans ? "koosaga" : "cubelover");
  else cout << "cubelover";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}