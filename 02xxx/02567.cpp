#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void solve(void) {
  int n; cin >> n;

  vector<vector<bool>> v(101, vector<bool>(101, false));
  while (n--) {
    int a, b; cin >> a >> b;
    for (int y=a; y<a+10; y++) for (int x=b; x<b+10; x++) {
      v[y][x] = true;
    }
  }

  int ans = 0;
  for (int y=1; y<=100; y++) for (int x=1; x<=100; x++) {
    if (!v[y][x]) continue;
    for (int k=0; k<4; k++) {
      int ny = y + dy[k], nx = x + dx[k];
      if (ny < 0 || ny > 100 || nx < 0 || nx > 100 || !v[ny][nx]) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}