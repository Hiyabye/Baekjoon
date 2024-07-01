#include <iostream>
#include <string>
#include <vector>
using namespace std;

int check(int n, const vector<string> &v) {
  for (int i=0; i<n; i++) {
    if ('a' <= v[i][0] && v[i][0] <= 'z') return i;
  }
  return -1;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int idx = check(n, v);
  for (int i=idx+1; i<n; i++) cout << v[i] << " ";
  if (idx != -1) cout << v[idx] << " ";
  for (int i=0; i<idx; i++) cout << v[i] << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}