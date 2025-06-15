#include <algorithm>
#include <iostream>
using namespace std;

int solve(void) {
  int n; long long x, y; cin >> n >> x >> y;
  long long vmx = 0, vn;
  while (n--) {
    cin >> vn;
    if (n) vmx = max(vmx, vn);
  }
  if (vn > vmx) return 0;
  if (x * vn <= (vn+x-y) * vmx) return -1;

  int ans = y;
  for (int i=y-1; i>=vn; i--) {
    if (x * vn > (vn+x-i) * vmx) ans = i;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}