#include <cmath>
#include <iostream>
#include <map>
#include <utility>
using namespace std;

inline int sgcd(int a, int b) {
  return abs(b) ? sgcd(abs(b), abs(a) % abs(b)) : abs(a);
}

void solve(void) {
  int n; cin >> n;

  long long a = 0, b = 0, c = 0;
  map<pair<int, int>, int> mp;
  for (int i=0; i<n; i++) {
    int x, y; cin >> x >> y;
    if (x == 0 && y == 0) a++;
    else if (x == 0) b++;
    else if (y == 0) c++;
    else if (x * y > 0) mp[{abs(x) / sgcd(x, y), abs(y) / sgcd(x, y)}]++;
    else mp[{-abs(x) / sgcd(x, y), abs(y) / sgcd(x, y)}]++;
  }

  long long cnt = 0;
  for (auto &p : mp) {
    int x = p.first.first, y = p.first.second;
    cnt += (mp[{-y, x}] + mp[{y, -x}]) * p.second;
  }
  cout << a*n - a*(a+1)/2 + b*c + cnt / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}