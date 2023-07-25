#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, a, b, c;
  cin >> n;

  vector<int> dpMax(3), dpMin(3), tmp(3);
  cin >> dpMax[0] >> dpMax[1] >> dpMax[2];
  dpMin = dpMax;
  for (int i=1; i<n; i++) {
    cin >> a >> b >> c;
    tmp[0] = max(dpMax[0], dpMax[1]) + a;
    tmp[1] = max(max(dpMax[0], dpMax[1]), dpMax[2]) + b;
    tmp[2] = max(dpMax[1], dpMax[2]) + c;
    dpMax = tmp;
    tmp[0] = min(dpMin[0], dpMin[1]) + a;
    tmp[1] = min(min(dpMin[0], dpMin[1]), dpMin[2]) + b;
    tmp[2] = min(dpMin[1], dpMin[2]) + c;
    dpMin = tmp;
  }
  cout << max(max(dpMax[0], dpMax[1]), dpMax[2]) << " " << min(min(dpMin[0], dpMin[1]), dpMin[2]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}