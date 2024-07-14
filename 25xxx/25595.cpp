#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  bool a = false, b = false, c = false;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == 1) {
      if (i+j & 1) a = true;
      else b = true;
    } else if (v[i][j] == 2) {
      if (i+j & 1) c = true;
    }
    if (a && b) return false;
  }
  if (a ^ b) return a ^ c;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Lena" : "Kiriya");
  return 0;
}