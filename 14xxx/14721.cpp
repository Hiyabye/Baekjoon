#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int p = 0, q = 0; long long r = 1e18;
  for (int a=1; a<=100; a++) for (int b=1; b<=100; b++) {
    long long rss = 0;
    for (int i=0; i<n; i++) {
      rss += (y[i]-x[i]*a-b) * (y[i]-x[i]*a-b);
    }
    if (rss < r) p = a, q = b, r = rss;
  }
  cout << p << " " << q;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}