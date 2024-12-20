#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n-1; j++) {
    if (l[j] > l[j+1]) {
      swap(l[j], l[j+1]);
      ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}