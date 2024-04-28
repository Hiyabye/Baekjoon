#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int a = 0, b = 0, c = 0;
  for (int i=0; i<2; i++) for (int j=i+1; j<3; j++) for (int k=j+1; k<4; k++) {
    if (v[i] + v[j] <= v[k]) continue;
    if (hypot(v[i], v[j]) == v[k]) a++;
    else if (hypot(v[i], v[j]) > v[k]) b++;
    else c++;
  }
  cout << a << " " << b << " " << c << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}