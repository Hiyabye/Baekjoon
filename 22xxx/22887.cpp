#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, c; cin >> n >> c;
  if (c < n-1 || c >= n*(n+1)/2) {
    cout << "Case #" << idx << ": IMPOSSIBLE\n";
    return;
  }

  vector<int> r(n, 1);
  for (int i=1; i<n; i++) {
    r[n-i] += clamp(c-n+1, 0, i);
    c -= clamp(c-n+1, 0, i);
  }
  
  vector<int> y(n);
  for (int i=0; i<n; i++) y[i] = i+1;
  for (int i=n-2; i>=0; i--) reverse(y.begin()+i, y.begin()+i+r[i+1]);

  cout << "Case #" << idx << ": ";
  for (int i=0; i<n; i++) cout << y[i] << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}