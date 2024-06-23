#include <iostream>
#include <vector>
using namespace std;

bool check(const vector<vector<char>> &v, char c) {
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      if (i<3 && v[i][j] == c && v[i+1][j] == c && v[i+2][j] == c) return true;
      if (j<3 && v[i][j] == c && v[i][j+1] == c && v[i][j+2] == c) return true;
      if (i<3 && j<3 && v[i][j] == c && v[i+1][j+1] == c && v[i+2][j+2] == c) return true;
      if (i<3 && j>1 && v[i][j] == c && v[i+1][j-1] == c && v[i+2][j-2] == c) return true;
    }
  }
  return false;
}

void solve(void) {
  vector<vector<char>> v(5, vector<char>(5));
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  if (check(v, 'A') == check(v, 'B')) cout << "draw\n";
  else if (check(v, 'A')) cout << "A wins\n";
  else cout << "B wins\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}