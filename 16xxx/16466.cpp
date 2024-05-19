#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  for (int i=0; i<n; i++) {
    if (a[i] != i+1) return i+1;
  }
  return n+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}