#include <iostream>
#include <functional>
#include <queue>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m, k; cin >> n >> m >> k;
  priority_queue<int, vector<int>, greater<int>> pq;
  while (m--) pq.push(0);

  while (n--) {
    int t; cin >> t;
    int cur = pq.top(); pq.pop();
    pq.push(t + cur);
  }
  return pq.top() <= k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "WAIT" : "GO");
  return 0;
}