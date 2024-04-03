#include <iostream>
#include <vector>
using namespace std;

bool asc(int n, const vector<int> &v) {
  for (int i=1; i<n; i++) if (v[i] <= v[i-1]) return false;
  return true;
}

bool desc(int n, const vector<int> &v) {
  for (int i=1; i<n; i++) if (v[i] >= v[i-1]) return false;
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  cout << n << "\n";
  if (asc(n, v) || desc(n, v)) cout << v[1] << " " << v[0];
  else cout << v[0] << " " << v[1];
  for (int i=2; i<n; i++) cout << " " << v[i];
  cout << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cout << t << "\n\n";
  while (t--) solve();
  return 0;
}