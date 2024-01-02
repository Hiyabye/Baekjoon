#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int p;
  cin >> p;
  vector<pair<int, string> > v(p);
  for (int i=0; i<p; i++) {
    cin >> v[i].first >> v[i].second;
  }

  sort(v.begin(), v.end());
  cout << v.back().second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}