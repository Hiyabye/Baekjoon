#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<vector<int> > board(100, vector<int>(100, 0));
  while (n--) {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    x1--; y1--; x2--; y2--;
    for (int j=x1; j<=x2; j++) {
      for (int k=y1; k<=y2; k++) {
        board[j][k]++;
      }
    }
  }

  int ans = 0;
  for (int i=0; i<100; i++) {
    for (int j=0; j<100; j++) {
      if (board[i][j] > m) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}