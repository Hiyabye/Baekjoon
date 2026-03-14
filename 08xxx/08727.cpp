#include <iostream>
#include <vector>
using namespace std;

inline void print(long long x) {
  if (x < 0) cout << 0;
  else if (x & 1) cout << x / 2 << ".5";
  else cout << x / 2;
}

void solve(void) {
  long long c, z, n; cin >> c >> z >> n;
  vector<long long> p(6);
  for (int i=0; i<6; i++) cin >> p[i];

  long long r = p[4] * 2 + p[3] + p[5] - c * 2;
  long long y = p[0] * 2 + p[1] + p[5] - z * 2;
  long long g = p[2] * 2 + p[1] + p[3] - n * 2;

  print(r); cout << " ";
  print(y); cout << " ";
  print(g);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}