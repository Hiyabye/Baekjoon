#include <iostream>
#include <numeric>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> x(9);
  for (int i=0; i<9; i++) cin >> x[i];
  x[8] += x[5]; x[5] = 0;

  int n = accumulate(x.begin(), x.end(), 0);
  priority_queue<int> pq;
  for (int i=0; i<9; i++) {
    while (x[i]--) pq.push(i+1);
  }

  vector<int> ans(n);
  for (int i=0, j=n-1; i<=j;) {
    ans[i++] = pq.top(); pq.pop();
    if (i <= j) ans[j--] = pq.top(); pq.pop();
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}