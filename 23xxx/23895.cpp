#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, b; cin >> n >> b;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (b < a[i]) continue;
    b -= a[i];
    ans++;
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