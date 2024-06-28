#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n-1), b(n);
  for (int i=0; i<n-1; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  long long ans = 0, min = b[0];
  for (int i=0; i<n-1; i++) {
    if (min > b[i]) min = b[i];
    ans += min * a[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}