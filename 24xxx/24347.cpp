#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> c(4);
  for (int i=0; i<4; i++) cin >> c[i];
  sort(c.begin(), c.end());

  string ans = c[0] + c[1] + c[2] + c[3];
  while (next_permutation(c.begin(), c.end())) {
    string s = c[0] + c[1] + c[2] + c[3];
    ans = max(ans, s);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}