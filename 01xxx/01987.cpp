#include <bits/stdc++.h>
using namespace std;

int r, c;
vector<vector<char> > a;
vector<bool> alpha(26, false);

int backtrack(int x, int y, int cnt) {
  if (x == r-1 && y == c-1) return cnt;

  int ret = cnt;
  if (x > 0 && !alpha[a[x-1][y]-'A']) {
    alpha[a[x-1][y]-'A'] = true;
    ret = max(ret, backtrack(x-1, y, cnt+1));
    alpha[a[x-1][y]-'A'] = false;
  }
  if (x < r-1 && !alpha[a[x+1][y]-'A']) {
    alpha[a[x+1][y]-'A'] = true;
    ret = max(ret, backtrack(x+1, y, cnt+1));
    alpha[a[x+1][y]-'A'] = false;
  }
  if (y > 0 && !alpha[a[x][y-1]-'A']) {
    alpha[a[x][y-1]-'A'] = true;
    ret = max(ret, backtrack(x, y-1, cnt+1));
    alpha[a[x][y-1]-'A'] = false;
  }
  if (y < c-1 && !alpha[a[x][y+1]-'A']) {
    alpha[a[x][y+1]-'A'] = true;
    ret = max(ret, backtrack(x, y+1, cnt+1));
    alpha[a[x][y+1]-'A'] = false;
  }
  return ret;
}

void solve(void) {
  cin >> r >> c;
  a.resize(r, vector<char>(c));
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      cin >> a[i][j];
    }
  }
  alpha[a[0][0]-'A'] = true;

  cout << backtrack(0, 0, 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}