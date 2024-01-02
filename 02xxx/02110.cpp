#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate(vector<int> &x, int mid) {
  int cnt = 1, prev = x[0];
  for (int i=1; i<x.size(); i++) {
    if (x[i]-prev >= mid) {
      cnt++;
      prev = x[i];
    }
  }
  return cnt;
}

void solve(void) {
  int n, c;
  cin >> n >> c;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  sort(x.begin(), x.end());

  int lo = 1, hi = x[n-1]-x[0], ans = 0;
  while (lo <= hi) {
    int mid = (lo+hi)/2;
    if (calculate(x, mid) >= c) {
      ans = mid;
      lo = mid+1;
    } else {
      hi = mid-1;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}