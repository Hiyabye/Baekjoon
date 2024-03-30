#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];

  int ans = 0;
  for (int i=1; i<n-1; i++) {
    if (h[i-1] < h[i] && h[i] > h[i+1]) ans++;
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