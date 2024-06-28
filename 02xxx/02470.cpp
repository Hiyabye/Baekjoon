#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  int lo = 0, hi = n-1, sum = 2e9;
  pair<int, int> ans;
  while (lo < hi) {
    if (abs(a[lo]+a[hi]) < sum) {
      sum = abs(a[lo]+a[hi]);
      ans = make_pair(a[lo], a[hi]);
    }
    if (a[lo]+a[hi] < 0) lo++;
    else hi--;
  }
  
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}