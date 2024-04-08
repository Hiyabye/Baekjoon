#include <iostream>
#include <vector>
using namespace std;

void mark(vector<vector<char>> &a, int n, int x, int y, char c) {
  for (int i=x-1; i>=0; i--) {
    if (a[i][y] == 'O' || a[i][y] == 'X') break;
    a[i][y] = c;
  }
  for (int i=x+1; i<n; i++) {
    if (a[i][y] == 'O' || a[i][y] == 'X') break;
    a[i][y] = c;
  }
  for (int i=y-1; i>=0; i--) {
    if (a[x][i] == 'O' || a[x][i] == 'X') break;
    a[x][i] = c;
  }
  for (int i=y+1; i<n; i++) {
    if (a[x][i] == 'O' || a[x][i] == 'X') break;
    a[x][i] = c;
  }
}

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> a(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 'X') mark(a, n, i, j, 'B');
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 'O') mark(a, n, i, j, '.');
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << a[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}