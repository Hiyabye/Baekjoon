#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, l; cin >> n >> l;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];
  sort(h.begin(), h.end());

  for (int i=0; i<n; i++) {
    if (l >= h[i]) l++;
    else break;
  }
  cout << l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}