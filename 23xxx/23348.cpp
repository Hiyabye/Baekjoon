#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;
  int n; cin >> n;

  vector<int> v(n, 0);
  for (int i=0; i<n; i++) {
    for (int j=0; j<3; j++) {
      int x, y, z; cin >> x >> y >> z;
      v[i] += a*x + b*y + c*z;
    }
  }
  cout << *max_element(v.begin(), v.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}