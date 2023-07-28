#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> > a;
vector<int> ans(3, 0);

void count(int x, int y, int size) {
  bool flag = true;
  for (int i=x; i<x+size; i++) {
    for (int j=y; j<y+size; j++) {
      if (a[i][j] != a[x][y]) {
        flag = false;
        break;
      }
    }
  }
  if (flag) {
    ans[a[x][y]+1]++;
    return;
  }

  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      count(x+i*size/3, y+j*size/3, size/3);
    }
  }
}

void solve(void) {
  cin >> n;
  a.resize(n, vector<int>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
    }
  }

  count(0, 0, n);
  cout << ans[0] << "\n" << ans[1] << "\n" << ans[2];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}