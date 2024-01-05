#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  pair<int, int> l = make_pair(0, 0);
  for (int i=0; i<n; i++) {
    if (v[i] > l.second) l = make_pair(l.first+1, v[i]);
  }

  pair<int, int> r = make_pair(0, 0);
  for (int i=n-1; i>=0; i--) {
    if (v[i] > r.second) r = make_pair(r.first+1, v[i]);
  }

  cout << l.first << "\n" << r.first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}