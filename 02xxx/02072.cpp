#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {0, 1, 1, 1};
int dy[4] = {1, 0, 1, -1};

inline bool valid(int x, int y) {
  return 0 <= x && x < 19 && 0 <= y && y < 19;
}

inline int calc(const vector<vector<int>> &v, int x, int y, int k) {
  int cnt = 1;
  for (int d=1; valid(x+dx[k]*d, y+dy[k]*d); d++) {
    if (v[x+dx[k]*d][y+dy[k]*d] == v[x][y]) cnt++;
    else break;
  }
  for (int d=-1; valid(x+dx[k]*d, y+dy[k]*d); d--) {
    if (v[x+dx[k]*d][y+dy[k]*d] == v[x][y]) cnt++;
    else break;
  }
  return cnt;
}

inline bool check(const vector<vector<int>> &v) {
  for (int i=0; i<19; i++) for (int j=0; j<19; j++) {
    if (v[i][j] == 0) continue;
    for (int k=0; k<4; k++) {
      if (calc(v, i, j, k) == 5) return true;
    }
  }
  return false;
}

int solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  vector<vector<int>> v(19, vector<int>(19, 0));
  for (int i=0; i<n; i++) {
    v[--x[i]][--y[i]] = i & 1 ? 2 : 1;
    if (check(v)) return i + 1;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}