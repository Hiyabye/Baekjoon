#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;

  vector<int> ans(n+1, 0);
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    ans[x]++;
  }

  for (int i=n; i>=0; i--) {
    if (ans[i] == i) return i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}