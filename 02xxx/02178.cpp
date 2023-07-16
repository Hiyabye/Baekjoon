#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > a(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    for (int j=0; j<m; j++) {
      a[i][j] = s[j] - '0';
    }
  }
  queue<pair<int, int> > q;
  q.push(make_pair(0, 0));

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if (x > 0 && a[x-1][y] == 1) {
      q.push(make_pair(x-1, y));
      a[x-1][y] = a[x][y] + 1;
    }
    if (x < n-1 && a[x+1][y] == 1) {
      q.push(make_pair(x+1, y));
      a[x+1][y] = a[x][y] + 1;
    }
    if (y > 0 && a[x][y-1] == 1) {
      q.push(make_pair(x, y-1));
      a[x][y-1] = a[x][y] + 1;
    }
    if (y < m-1 && a[x][y+1] == 1) {
      q.push(make_pair(x, y+1));
      a[x][y+1] = a[x][y] + 1;
    }
  }
  cout << a[n-1][m-1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}