#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  if (n == 1) {
    cout << (a[0] > 0) << "\n" << a[0];
    return;
  } else if (a[n-1] == 0) {
    cout << "0\n";
    while (n--) cout << "0 ";
    return;
  }

  int mex = 0;
  for (int i=0; i<n; i++) {
    if (a[i] > mex) break;
    if (a[i] == mex) mex++;
  }

  cout << mex+1 << "\n";
  for (int x : a) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}