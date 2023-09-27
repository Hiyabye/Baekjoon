#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, string> > v(n);
  for (int i=0; i<n; i++) cin >> v[i].second >> v[i].first;
  sort(v.begin(), v.end());

  cout << v[0].second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}