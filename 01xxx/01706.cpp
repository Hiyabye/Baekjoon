#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  set<string> st;
  for (int i=0; i<r; i++) {
    int x = 0;
    while (x < c && v[i][x] == '#') x++;
    while (x < c) {
      string s;
      while (x < c && v[i][x] != '#') s += v[i][x++];
      if (s.length() > 1) st.insert(s);
      x++;
    }
  }
  for (int i=0; i<c; i++) {
    int x = 0;
    while (x < r && v[x][i] == '#') x++;
    while (x < r) {
      string s;
      while (x < r && v[x][i] != '#') s += v[x++][i];
      if (s.length() > 1) st.insert(s);
      x++;
    }
  }
  cout << *st.begin();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}