#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> > s;
vector<bool> visited;

int backtrack(int idx, int cnt) {
  if (idx == n/2) {
    int start = 0, link = 0;
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        if (visited[i] && visited[j]) start += s[i][j];
        if (!visited[i] && !visited[j]) link += s[i][j];
      }
    }
    return abs(start-link);
  }

  int ret = INT_MAX;
  for (int i=cnt; i<n; i++) {
    if (visited[i]) continue;
    visited[i] = true;
    ret = min(ret, backtrack(idx+1, i+1));
    visited[i] = false;
  }
  return ret;
}

void solve(void) {
  cin >> n;
  s.resize(n, vector<int>(n));
  visited.resize(n, false);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> s[i][j];
    }
  }
  
  cout << backtrack(0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}