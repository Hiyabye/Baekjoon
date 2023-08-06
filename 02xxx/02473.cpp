#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  vector<pair<int, int> > v(n-2);
  int idx = -1;
  long long min_sum = 3e9;
  for (int i=0; i<n-2; i++) {
    int lo = i+1, hi = n-1;
    long long sum = 3e9;

    v[i] = make_pair(lo, hi);
    while (lo < hi) {
      if (abs(a[i]+a[lo]+a[hi]) < sum) {
        sum = abs(a[i]+a[lo]+a[hi]);
        v[i] = make_pair(lo, hi);
      }
      if (a[i]+a[lo]+a[hi] < 0) lo++;
      else                      hi--;
    }
    if (sum < min_sum) {
      min_sum = sum;
      idx = i;
    }
  }

  cout << a[idx] << " " << a[v[idx].first] << " " << a[v[idx].second];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}