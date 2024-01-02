#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

void solve(void) {
  int n, m, x;
  cin >> n >> m;
  vector<pair<int, string> > a;
  string s;
  cin >> s >> x;
  a.push_back(make_pair(x, s));
  for (int i=1; i<n; i++) {
    cin >> s >> x;
    if (a[i-1].first == x) continue;
    else a.push_back(make_pair(x, s));
  }

  for (int i=0; i<m; i++) {
    cin >> x;
    int l = 0, r = n-1;
    while (l < r) {
      int m = l+(r-l)/2;
      if (a[m].first >= x) r = m;
      else l = m+1;
    }
    cout << a[l].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}