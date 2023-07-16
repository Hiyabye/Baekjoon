#include <bits/stdc++.h>

using namespace std;
  
int n, k;
vector<int> dist(100001, -1);
queue<int> q;

void solve(void) {
  cin >> n >> k;
  dist[n] = 0;
  q.push(n);

  while (!q.empty()) {
    int cur = q.front();
    q.pop();

    if (cur == k) break;
    if (cur > 0 && dist[cur-1] == -1) {
      dist[cur-1] = dist[cur] + 1;
      q.push(cur-1);
    }
    if (cur < 100000 && dist[cur+1] == -1) {
      dist[cur+1] = dist[cur] + 1;
      q.push(cur+1);
    }
    if (cur <= 50000 && dist[cur*2] == -1) {
      dist[cur*2] = dist[cur] + 1;
      q.push(cur*2);
    }
  }
  cout << dist[k] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}