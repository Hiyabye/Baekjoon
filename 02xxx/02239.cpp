#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

string s;
vector<vector<int> > a(9, vector<int>(9));
vector<pair<int, int> > b;

void backtrack(int idx) {
  if (idx == b.size()) {
    for (int i=0; i<9; i++) {
      for (int j=0; j<9; j++) {
        cout << a[i][j];
      }
      cout << "\n";
    }
    exit(0);
  }

  int x = b[idx].first, y = b[idx].second;
  vector<bool> c(10, false);
  for (int i=0; i<9; i++) {
    c[a[x][i]] = true;
    c[a[i][y]] = true;
  }
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      c[a[x/3*3+i][y/3*3+j]] = true;
    }
  }
  for (int i=1; i<=9; i++) {
    if (c[i]) continue;
    a[x][y] = i;
    backtrack(idx+1);
    a[x][y] = 0;
  }
}

void solve(void) {
  for (int i=0; i<9; i++) {
    cin >> s;
    for (int j=0; j<9; j++) {
      a[i][j] = s[j] - '0';
      if (a[i][j] == 0) {
        b.push_back(make_pair(i, j));
      }
    }
  }

  backtrack(0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}