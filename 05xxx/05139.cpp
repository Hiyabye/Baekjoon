#include <iostream>
#include <vector>
using namespace std;

inline bool check(int h, int idx, const vector<vector<char>> &v) {
  for (int i=0; i<h; i++) {
    if (v[i][idx] == 'X') return true;
  }
  return false;
}

inline int calc(int h, int idx, const vector<vector<char>> &v) {
  int ret = 0;
  for (int i=0; i<h; i++) {
    if (v[i][idx] == 'X') break;
    ret += (v[i][idx] == 'H' ? 3 : 1);
  }
  return ret;
}

void solve(int idx) {
  int h, w; cin >> h >> w;
  vector<vector<char>> v(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> v[i][j];

  cout << "Data Set " << idx << ":\n";
  for (int i=0; i<w; i++) {
    cout << (check(h, i, v) ? to_string(calc(h, i, v)) : "N") << " ";
  }
  cout << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}