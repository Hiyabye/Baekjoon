#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(3);
  for (int i=0; i<3; i++) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int t = (c - a) * 60 + (d - b);
    if (t < 0) t += 1440;
    v[i] = t;
  }

  int mn = *min_element(v.begin(), v.end());
  int mx = *max_element(v.begin(), v.end());

  cout << mn / 60 << ":" << (mn % 60 < 10 ? "0" : "") << mn % 60 << "\n";
  cout << mx / 60 << ":" << (mx % 60 < 10 ? "0" : "") << mx % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}