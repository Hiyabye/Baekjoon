#include <iostream>
#include <string>
#include <vector>
using namespace std;
using Board = vector<string>;

int check(const Board &a, const Board &b) {
  int ret = 0;
  for (int i=0; i<5; i++) for (int j=0; j<7; j++) {
    if (a[i][j] ^ b[i][j]) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<Board> v(n, Board(5));
  for (int i=0; i<n; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  pair<int, int> ans = {0, 1};
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (check(v[i], v[j]) < check(v[ans.first], v[ans.second])) {
      ans = {i, j};
    }
  }
  cout << ans.first+1 << " " << ans.second+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}