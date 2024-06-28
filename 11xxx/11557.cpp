#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, string> > v(n);
  for (int i=0; i<n; i++) cin >> v[i].second >> v[i].first;
  sort(v.begin(), v.end(), greater<pair<int, string> >());
  cout << v[0].second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}