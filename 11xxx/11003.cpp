#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void solve(void) {
  int n, l;
  cin >> n >> l;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  deque<pair<int, int> > dq;
  for (int i=1; i<=n; i++) {
    if (!dq.empty() && dq.front().second < i-l+1) dq.pop_front();
    while (!dq.empty() && dq.back().first > a[i-1]) dq.pop_back();
    dq.push_back(make_pair(a[i-1], i));
    cout << dq.front().first << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}