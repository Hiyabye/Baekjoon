#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<bool> ans(10, false);
  for (int i=0; i<n; i++) {
    if (s[i] == 'T') continue;
    ans[i * 10 / n] = true;
  }
  cout << count(ans.begin(), ans.end(), false);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}