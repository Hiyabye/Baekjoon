#include <iostream>
#include <vector>
using namespace std;

inline long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

inline long long calc(int r, int c, const vector<vector<long long>> &v, int a, int b) {
  for (int i=0; i<a; i++) for (int j=0; j<b; j++) {
    for (int y=r/a*i; y<r/a*(i+1); y++) for (int x=c/b*j; x<c/b*(j+1); x++) {
      if (v[y][x] * v[0][0] != v[y-r/a*i][x-c/b*j] * v[r/a*i][c/b*j]) return 0;
    }
  }

  long long g = v[0][0];
  for (int i=0; i<a; i++) for (int j=0; j<b; j++) {
    g = gcd(g, v[i][j]);
  }
  for (int i=0; i<r; i+=a) for (int j=0; j<c; j+=b) {
    g = gcd(g, v[i][j] * g / v[0][0]);
  }

  long long ret = 0;
  for (int i=1; i*i<=g; i++) {
    if (g % i) continue;
    ret += 2;
    if (i*i == g) ret--;
  }
  return ret;
}

bool solve(void) {
  int r, c; cin >> r >> c;
  if (r == 0 && c == 0) return false;
  vector<vector<long long>> v(r, vector<long long>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  long long ans = 0;
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) {
    if (r % i || c % j) continue;
    if ((i == 1 && j == 1) || (i == r && j == c)) continue;
    ans += calc(r, c, v, i, j);
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}