#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int n, m;
vector<vector<int> > a;
vector<pair<int, int> > house, chicken, selected;
vector<bool> visited;

int backtrack(int idx, int cnt) {
  if (cnt == m) {
    int sum = 0;
    for (int i=0; i<house.size(); i++) {
      int dist = 1e9;
      for (int j=0; j<selected.size(); j++) {
        dist = min(dist, abs(house[i].first-selected[j].first)+abs(house[i].second-selected[j].second));
      }
      sum += dist;
    }
    return sum;
  }

  int ret = 1e9;
  for (int i=idx; i<chicken.size(); i++) {
    if (visited[i]) continue;
    visited[i] = true;
    selected.push_back(chicken[i]);
    ret = min(ret, backtrack(i+1, cnt+1));
    selected.pop_back();
    visited[i] = false;
  }
  return ret;
}

void solve(void) {
  cin >> n >> m;
  a.resize(n, vector<int>(n));
  visited.resize(n, false);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) house.push_back(make_pair(i, j));
      else if (a[i][j] == 2) chicken.push_back(make_pair(i, j));
    }
  }

  cout << backtrack(0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}