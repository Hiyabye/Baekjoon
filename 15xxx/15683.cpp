#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int n, m;
vector<pair<int, int> > cctv;

void check(vector<vector<int> > &a, int x, int y, int dir) {
  if (dir == 0) {
    for (int i=y+1; i<m; i++) {
      if (a[x][i] == 6) break;
      if (a[x][i] == 0) a[x][i] = -1;
    }
  } else if (dir == 1) {
    for (int i=x+1; i<n; i++) {
      if (a[i][y] == 6) break;
      if (a[i][y] == 0) a[i][y] = -1;
    }
  } else if (dir == 2) {
    for (int i=y-1; i>=0; i--) {
      if (a[x][i] == 6) break;
      if (a[x][i] == 0) a[x][i] = -1;
    }
  } else if (dir == 3) {
    for (int i=x-1; i>=0; i--) {
      if (a[i][y] == 6) break;
      if (a[i][y] == 0) a[i][y] = -1;
    }
  }
}

int backtrack(vector<vector<int> > a, int idx) {
  if (idx == cctv.size()) {
    int ret = 0;
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
        if (a[i][j] == 0) ret++;
      }
    }
    return ret;
  }

  int ret = 1e9;
  vector<vector<int> > b;
  int x = cctv[idx].first, y = cctv[idx].second;

  switch (a[x][y]) {
    case 1:
      for (int i=0; i<4; i++) {
        b = a;
        check(b, x, y, i);
        ret = min(ret, backtrack(b, idx+1));
      }
      break;

    case 2:
      for (int i=0; i<2; i++) {
        b = a;
        check(b, x, y, i);
        check(b, x, y, i+2);
        ret = min(ret, backtrack(b, idx+1));
      }
      break;

    case 3:
      for (int i=0; i<4; i++) {
        b = a;
        check(b, x, y, i);
        check(b, x, y, (i+1)%4);
        ret = min(ret, backtrack(b, idx+1));
      }
      break;

    case 4:
      for (int i=0; i<4; i++) {
        b = a;
        check(b, x, y, i);
        check(b, x, y, (i+1)%4);
        check(b, x, y, (i+2)%4);
        ret = min(ret, backtrack(b, idx+1));
      }
      break;

    case 5:
      b = a;
      for (int i=0; i<4; i++) {
        check(b, x, y, i);
      }
      ret = min(ret, backtrack(b, idx+1));
      break;
  }

  return ret;
}

void solve(void) {
  cin >> n >> m;
  vector<vector<int> > a(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> a[i][j];
      if (a[i][j] != 0 && a[i][j] != 6) {
        cctv.push_back(make_pair(i, j));
      }
    }
  }

  cout << backtrack(a, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}