#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(5));
  for (int i=0; i<n; i++) for (int j=0; j<5; j++) cin >> a[i][j];

  int mx = 0, x = 0, y = 1;
  for (int i=0; i<4; i++) for (int j=i+1; j<5; j++) {
    int cnt = 0;
    for (int k=0; k<n; k++) {
      if (a[k][i] && a[k][j]) cnt++;
    }
    if (cnt > mx) mx = cnt, x = i, y = j;
  }

  cout << mx << "\n";
  for (int i=0; i<5; i++) {
    cout << (x == i || y == i) << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}