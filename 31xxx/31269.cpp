#include <algorithm>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i], a[i]--;
  for (int i=0; i<n; i++) cin >> b[i];

  vector<pair<pair<int, int>, int>> c(n);
  for (int i=0; i<n; i++) {
    c[a[i]] = {{n-i, 0}, a[i]};
  }

  vector<pair<int, int>> d(n);
  for (int i=0; i<n; i++) {
    d[i] = {b[i], i};
  }
  sort(d.begin(), d.end(), greater<pair<int, int>>());

  for (int i=0; i<n; i++) {
    c[d[i].second].first.first += n - i;
    c[d[i].second].first.second = n - i;
  }
  sort(c.begin(), c.end(), greater<pair<pair<int, int>, int>>());

  for (int i=0; i<n; i++) {
    cout << i+1 << ". Kod" << setw(2) << setfill('0') << c[i].second+1 << " (" << c[i].first.first << ")\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}