#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  if (n & 1) {
    cout << "still running";
    return;
  }

  int ans = 0;
  for (int i=0; i<n; i+=2) {
    ans += t[i+1] - t[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}