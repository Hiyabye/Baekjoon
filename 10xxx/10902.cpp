#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n), s(n);
  for (int i=0; i<n; i++) cin >> t[i] >> s[i];

  int f = distance(s.begin(), max_element(s.begin(), s.end()));
  cout << (*max_element(s.begin(), s.end()) ? t[f] + f * 20 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}