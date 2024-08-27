#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long b = 0, c = 0;
  for (int i=0, j=0; i<n; i++) {
    if (a[i] & 1) b += i - j++;
  }
  for (int i=0, j=0; i<n; i++) {
    if (!(a[i] & 1)) c += i - j++;
  }
  cout << min(b, c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}