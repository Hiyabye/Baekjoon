#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  long long x, y;
  cin >> x >> y;
  long long z = (y*100)/x;

  if (z >= 99) {
    cout << "-1";
    return;
  }

  long long l = 0, r = 1e9;
  while (l <= r) {
    long long m = (l+r)/2;
    long long nz = (100*(y+m))/(x+m);
    if (nz <= z) l = m+1;
    else r = m-1;
  }
  cout << l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}