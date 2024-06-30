#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];
  int t; cin >> t;

  map<int, int> d;
  for (int i=0; i<n; i++) d[t%h[i]] = h[i];
  cout << d.begin()->second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}