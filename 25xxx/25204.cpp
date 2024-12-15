#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cmp(const string &a, const string &b) {
  for (int i=0; i<a.length() && i<b.length(); i++) {
    if (a[i] == b[i]) continue;
    if (a[i] == '-' || b[i] == '-') return b[i] == '-';
    if (toupper(a[i]) != toupper(b[i])) return toupper(a[i]) < toupper(b[i]);
    return a[i] < b[i];
  }
  return a.length() < b.length();
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << v[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}