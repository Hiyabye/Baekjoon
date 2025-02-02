#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, s; cin >> n >> s;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0, l = 0, r = n-1;
  while (l < r) {
    int sum = a[l] + a[r];
    if (sum == s) l++, r--, ans++;
    else if (sum < s) l++;
    else r--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}