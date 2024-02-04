#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long ans = 0;
  for (int i=0, cur=0; i<n; i++) {
    if (i > 0 && a[i] <= a[i-1]) cur = i;
    ans += i-cur+1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}