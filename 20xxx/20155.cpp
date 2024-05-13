#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> cnt(m, 0);
  while (n--) {
    int x; cin >> x;
    cnt[--x]++;
  }
  cout << *max_element(cnt.begin(), cnt.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}