#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int check(int n, int x, int y, vector<vector<char> > &a) {
  int row = 0, col = 0;
  char cur = a[x][y];
  
  for (int i=x; i<n; i++) {
    if (a[i][y] == cur) row++;
    else break;
  }
  for (int i=x-1; i>=0; i--) {
    if (a[i][y] == cur) row++;
    else break;
  }
  for (int i=y; i<n; i++) {
    if (a[x][i] == cur) col++;
    else break;
  }
  for (int i=y-1; i>=0; i--) {
    if (a[x][i] == cur) col++;
    else break;
  }

  return max(row, col);
}

void solve(void) {
  int n;
  cin >> n;
  vector<vector<char> > a(n, vector<char>(n));
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    for (int j=0; j<n; j++) {
      a[i][j] = s[j];
    }
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (i > 0) {
        swap(a[i][j], a[i-1][j]);
        ans = max(ans, check(n, i, j, a));
        swap(a[i][j], a[i-1][j]);
      }
      if (j > 0) {
        swap(a[i][j], a[i][j-1]);
        ans = max(ans, check(n, i, j, a));
        swap(a[i][j], a[i][j-1]);
      }
      if (i < n-1) {
        swap(a[i][j], a[i+1][j]);
        ans = max(ans, check(n, i, j, a));
        swap(a[i][j], a[i+1][j]);
      }
      if (j < n-1) {
        swap(a[i][j], a[i][j+1]);
        ans = max(ans, check(n, i, j, a));
        swap(a[i][j], a[i][j+1]);
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}