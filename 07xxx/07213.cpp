#include <algorithm>
#include <iostream>
using namespace std;

inline int match(int &p, int &q) {
  int cnt = min(p, q);
  p -= cnt; q -= cnt;
  return cnt;
}

inline int calc1(int a1, int p1, int z1, int a2, int p2, int z2) {
  int ret = 0;
  ret += (match(a1, z2) + match(p1, a2) + match(z1, p2)) * 1;
  ret += (match(a1, a2) + match(p1, p2) + match(z1, z2)) * 0;
  ret += (match(a1, p2) + match(p1, z2) + match(z1, a2)) * -1;
  return ret;
}

inline int calc2(int a1, int p1, int z1, int a2, int p2, int z2) {
  int ret = 0;
  ret += (match(a1, p2) + match(p1, z2) + match(z1, a2)) * -1;
  ret += (match(a1, a2) + match(p1, p2) + match(z1, z2)) * 0;
  ret += (match(a1, z2) + match(p1, a2) + match(z1, p2)) * 1;
  return ret;
}

void solve(void) {
  int a1, p1, z1; cin >> a1 >> p1 >> z1;
  int a2, p2, z2; cin >> a2 >> p2 >> z2;

  cout << calc1(a1, p1, z1, a2, p2, z2) << "\n";
  cout << calc2(a1, p1, z1, a2, p2, z2) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}