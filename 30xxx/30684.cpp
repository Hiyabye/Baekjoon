#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<string> ans;
  for (int i=0; i<n; i++) {
    if (v[i].length() != 3) continue;
    ans.push_back(v[i]);
  }
  cout << *min_element(ans.begin(), ans.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}