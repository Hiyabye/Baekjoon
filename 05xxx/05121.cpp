#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, w; cin >> n >> w;
  vector<int> s(n+1);
  for (int i=1; i<=n; i++) cin >> s[i];
  for (int i=1; i<=n; i++) s[i] += s[i-1];

  int mn = 1e9, mx = -1e9;
  for (int i=w; i<=n; i++) {
    mn = min(mn, (s[i]-s[i-w]) / w);
    mx = max(mx, (s[i]-s[i-w]) / w);
  }
  cout << "Data Set " << idx << ":\n" << mx-mn << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}