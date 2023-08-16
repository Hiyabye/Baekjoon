#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int r, b;
  cin >> r >> b;

  int l = ((r+4)+sqrt((r+4)*(r+4)-16*(r+b))) / 4;
  int w = (r+4) / 2 - l;
  cout << l << " " << w;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}