#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  cout << (*max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end())) * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}