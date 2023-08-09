#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  vector<int> n(5);
  for (int i=0; i<5; i++) cin >> n[i];
  sort(n.begin(), n.end());

  if (n[3] - n[1] >= 4) cout << "KIN\n";
  else cout << n[1] + n[2] + n[3] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}