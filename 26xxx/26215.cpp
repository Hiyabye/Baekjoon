#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  int ans = 0;
  while (a.size() > 1) {
    a.front()--; a.back()--;
    if (a.back() == 0) a.pop_back();
    sort(a.begin(), a.end(), greater<int>());
    ans++;
  }
  if (a.size() == 1) ans += a[0];

  cout << (ans > 1440 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}