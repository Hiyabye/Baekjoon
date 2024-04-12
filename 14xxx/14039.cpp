#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<vector<int>> v(4, vector<int>(4));
  for (int i=0; i<4; i++) for (int j=0; j<4; j++) cin >> v[i][j];

  int sum = v[0][0] + v[0][1] + v[0][2] + v[0][3];
  for (int i=0; i<4; i++) {
    if (v[i][0] + v[i][1] + v[i][2] + v[i][3] != sum) return false;
    if (v[0][i] + v[1][i] + v[2][i] + v[3][i] != sum) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "magic" : "not magic");
  return 0;
}