#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<bool>> v(6, vector<bool>(6, 0));
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    v[a][b] = true;
  }

  if (!v[1][3] && !v[3][1]) return false;
  if (!v[1][4] && !v[4][1]) return false;
  if (!v[3][4] && !v[4][3]) return false;
  return !v[2][1] && !v[2][3] && !v[2][4] && !v[5][1] && !v[5][3] && !v[5][4];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Wa-pa-pa-pa-pa-pa-pow!" : "Woof-meow-tweet-squeek");
  return 0;
}