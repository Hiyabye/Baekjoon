#include <iostream>
#include <utility>
using namespace std;

inline int calc(int pa, int pb, const pair<int, int> &c) {
  return pa * c.first + pb * c.second;
}

void solve(void) {
  int pa, ka, pb, kb, n; cin >> pa >> ka >> pb >> kb >> n;

  pair<int, int> ans = {(n+ka-1)/ka, (n+kb-1)/kb};
  for (int i=0; i<=(n+ka-1)/ka; i++) {
    int j = (n-ka*i+kb-1)/kb;
    if (calc(pa, pb, {i, j}) < calc(pa, pb, ans)) ans = {i, j};
  }
  cout << ans.first << " " << ans.second << " " << calc(pa, pb, ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}