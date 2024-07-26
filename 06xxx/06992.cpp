#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<int> &v) {
  for (int i=2; i<n; i++) {
    if (v[i] - v[i-1] != v[1] - v[0]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  if (!check(n, v)) {
    cout << "The sequence [" << v[0];
    for (int i=1; i<n; i++) cout << ", " << v[i];
    cout << "] is not an arithmetic sequence.\n";
  } else {
    cout << "The next 5 numbers after [" << v[0];
    for (int i=1; i<n; i++) cout << ", " << v[i];
    cout << "] are: [" << v[n-1] + v[1] - v[0];
    for (int i=2; i<=5; i++) cout << ", " << v[n-1] + i * (v[1] - v[0]);
    cout << "]\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}