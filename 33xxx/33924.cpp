#include <iostream>
#include <string>
using namespace std;

int v[4][9] = {
  {0, 5, 6, 7, 8, 1, 2, 3, 4},
  {0, 4, 3, 2, 1, 8, 7, 6, 5},
  {0, 8, 7, 6, 5, 4, 3, 2, 1},
  {0, 2, 4, 1, 6, 3, 8, 5, 7}
};

void solve(void) {
  int n, m; cin >> n >> m;
  int k; cin >> k;
  string s; cin >> s;

  int cur = (n - 1) * 2 + m;
  for (char c : s) {
    if (c == 'A')      cur = v[0][cur];
    else if (c == 'B') cur = v[1][cur];
    else if (c == 'C') cur = v[2][cur];
    else if (c == 'D') cur = v[3][cur];
  }
  cout << (cur+1)/2 << " " << (cur+1)%2+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}