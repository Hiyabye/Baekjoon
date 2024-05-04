#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int calc(int x) {
  if (x < 60) return 0;
  if (x < 100) return 1;
  if (x < 140) return 2;
  if (x < 200) return 3;
  if (x < 250) return 4;
  return 5;
}

void solve(void) {
  int n; cin >> n;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];
  sort(l.begin(), l.end(), greater<int>());

  pair<int, int> ans = {0, 0};
  for (int i=0; i<min(n, 42); i++) {
    ans.first += l[i];
    ans.second += calc(l[i]);
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}