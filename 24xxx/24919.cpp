#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<vector<char>> v(2*n, vector<char>(2*n));
  for (int i=0; i<2*n; i++) for (int j=0; j<2*n; j++) cin >> v[i][j];

  int a = 0, b = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) a += (v[i][j] == 'I');
  for (int i=n; i<2*n; i++) for (int j=n; j<2*n; j++) a -= (v[i][j] == 'I');
  for (int i=0; i<n; i++) for (int j=n; j<2*n; j++) b += (v[i][j] == 'I');
  for (int i=n; i<2*n; i++) for (int j=0; j<n; j++) b -= (v[i][j] == 'I');
  cout << "Case #" << idx << ": " << abs(a) + abs(b) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}