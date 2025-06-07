#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

inline int calc(int r, int g, int b) {
  return max({abs(r-g), abs(g-b), abs(b-r)});
}

void solve(int idx) {
  int k, v; cin >> k >> v;

  int ans = 0;
  for (int r=0; r<=k; r++) for (int g=0; g<=k; g++) for (int b=0; b<=k; b++) {
    if (calc(r, g, b) <= v) ans++;
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}