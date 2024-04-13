#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> s(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> s[i][j];

  int a = (n == 2) ? 1 : (s[1][0] + s[2][0] - s[2][1]) / 2;
  cout << a << " ";
  for (int i=1; i<n; i++) cout << s[0][i] - a << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}