#include <iostream>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;

  pair<int, int> ans = {0, 0};
  for (int x=1; x<=100 && x*364<n; x++) {
    int k = n / 52 - x * 7;
    if (k % 21) continue;
    ans = {x, k / 21};
  }
  cout << ans.first << "\n" << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}