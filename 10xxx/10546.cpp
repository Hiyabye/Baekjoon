#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(void) {
  int n; cin >> n;
  vector<string> a(n), b(n-1);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n-1; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (int i=0; i<n-1; i++) {
    if (a[i] != b[i]) return a[i];
  }
  return a[n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}