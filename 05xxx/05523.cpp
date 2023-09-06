#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int x = 0, y = 0;
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    if (a > b) x++;
    if (a < b) y++;
  }
  
  cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}