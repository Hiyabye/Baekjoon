#include <iostream>
#include <set>
#include <utility>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n, x, y;
  cin >> n;

  set<pair<int, int> > s;
  for (int i=0; i<n; i++) {
    cin >> x >> y;
    if (x == 0) {
      if (y > 0) s.insert(make_pair(0, 1));
      else s.insert(make_pair(0, -1));
    } else if (y == 0) {
      if (x > 0) s.insert(make_pair(1, 0));
      else s.insert(make_pair(-1, 0));
    } else {
      int g = gcd(abs(x), abs(y));
      s.insert(make_pair(x/g, y/g));
    }
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}