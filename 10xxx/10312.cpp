#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;

  vector<int> ans;
  while (k) {
    ans.push_back(k % 3);
    k /= 3;
  }

  reverse(ans.begin(), ans.end());
  for (int n : ans) cout << n << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}