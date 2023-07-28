#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<vector<int> > a;

void process(int x, int y, int size) {
  bool flag = true;
  for (int i=x; i<x+size; i++) {
    for (int j=y; j<y+size; j++) {
      if (a[i][j] != a[x][y]) {
        flag = false;
        break;
      }
    }
  }
  if (flag) {
    cout << a[x][y];
    return;
  }

  cout << "(";
  for (int i=0; i<2; i++) {
    for (int j=0; j<2; j++) {
      process(x+i*size/2, y+j*size/2, size/2);
    }
  }
  cout << ")";
}

void solve(void) {
  cin >> n;
  a.resize(n, vector<int>(n));
  for (int i=0; i<n; i++) {
    cin >> s;
    for (int j=0; j<n; j++) {
      a[i][j] = s[j] - '0';
    }
  }

  process(0, 0, n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}