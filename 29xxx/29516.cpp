#include <iostream>
#include <vector>
using namespace std;

inline bool calc1(int a, int b, const vector<vector<char>> &v, int idx) {
  char c = '\0';
  for (int i=0; i<a; i++) for (int j=0; j<b; j++) {
    if (i == idx) continue;
    if (c == '\0') c = v[i][j];
    else if (v[i][j] != c) return false;
  }
  return true; 
}

inline bool calc2(int a, int b, const vector<vector<char>> &v, int idx) {
  char c = '\0';
  for (int i=0; i<a; i++) for (int j=0; j<b; j++) {
    if (j == idx) continue;
    if (c == '\0') c = v[i][j];
    else if (v[i][j] != c) return false;
  }
  return true; 
}

bool solve(void) {
  int a, b; cin >> a >> b;
  vector<vector<char>> v(a, vector<char>(b));
  for (int i=0; i<a; i++) for (int j=0; j<b; j++) cin >> v[i][j];

  for (int i=0; i<a; i++) if (calc1(a, b, v, i)) return true;
  for (int i=0; i<b; i++) if (calc2(a, b, v, i)) return true;
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}