#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<int>> v(r, vector<int>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  int a = 0;
  for (int i=0; i<r; i++) for (int j=1; j<c; j++) a += v[i][j] & v[i][j-1];
  for (int j=0; j<c; j++) for (int i=1; i<r; i++) a += v[i][j] & v[i-1][j];

  int b = 0;
  for (int i=1; i<r; i++) for (int j=1; j<c; j++) b += v[i][j] & v[i-1][j-1];
  for (int i=1; i<r; i++) for (int j=0; j<c-1; j++) b += v[i][j] & v[i-1][j+1];

  cout << a << " " << a + b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}