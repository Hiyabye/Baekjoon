#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int x, b; cin >> x >> b;
  bool sign = (x < 0 && b > 0);
  if (sign) x *= -1;

  vector<int> v;
  while (x) {
    int r = x % b;
    x /= b;
    if (r < 0) r += abs(b), x++;
    v.push_back(r);
  }

  if (v.empty()) v.push_back(0);
  if (sign) cout << '-';
  for (int i=v.size()-1; i>=0; i--) {
    cout << v[i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}