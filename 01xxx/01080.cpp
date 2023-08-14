#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  string s;
  vector<vector<int> > a(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    cin >> s;
    for (int j=0; j<m; j++) {
      a[i][j] = s[j] - '0';
    }
  }
  vector<vector<int> > b(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    cin >> s;
    for (int j=0; j<m; j++) {
      b[i][j] = s[j] - '0';
    }
  }

  int ans = 0;
  for (int i=0; i<n-2; i++) {
    for (int j=0; j<m-2; j++) {
      if (a[i][j] == b[i][j]) continue;
      ans++;
      for (int k=i; k<i+3; k++) {
        for (int l=j; l<j+3; l++) {
          a[k][l] = 1 - a[k][l];
        }
      }
    }
  }

  bool good = true;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (a[i][j] != b[i][j]) {
        good = false;
        break;
      }
    }
  }
  cout << (good ? ans : -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}