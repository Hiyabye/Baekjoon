#include <iostream>
#include <vector>
using namespace std;

inline bool row(const vector<vector<int>> &v, int idx) {
  vector<bool> a(7, false);
  for (int i=0; i<6; i++) {
    if (a[v[idx][i]]) return false;
    a[v[idx][i]] = true;
  }
  return true;
}

inline bool col(const vector<vector<int>> &v, int idx) {
  vector<bool> a(7, false);
  for (int i=0; i<6; i++) {
    if (a[v[i][idx]]) return false;
    a[v[i][idx]] = true;
  }
  return true;
}

inline bool diag(const vector<vector<int>> &v) {
  vector<bool> a(7, false), b(7, false);
  for (int i=0; i<6; i++) {
    if (a[v[i][i]]) return false;
    if (b[v[i][5-i]]) return false;
    a[v[i][i]] = true;
    b[v[i][5-i]] = true;
  }
  return true;
}

inline bool square(const vector<vector<int>> &v) {
  for (int i=0; i<3; i++) for (int j=0; j<2; j++) {
    vector<bool> a(7, false);
    for (int k=0; k<2; k++) for (int l=0; l<3; l++) {
      if (a[v[2*i+k][3*j+l]]) return false;
      a[v[2*i+k][3*j+l]] = true;
    }
  }
  return true;
}

bool solve(void) {
  vector<vector<int>> v(6, vector<int>(6));
  for (int i=0; i<6; i++) for (int j=0; j<6; j++) cin >> v[i][j];

  for (int i=0; i<6; i++) if (!row(v, i) || !col(v, i)) return false;
  return diag(v) && square(v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) cout << "Case#" << i << ": " << solve() << "\n";
  return 0;
}