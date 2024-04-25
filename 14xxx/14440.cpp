#include <iostream>
#include <vector>
#define MOD 100
using namespace std;
using Matrix = vector<vector<int>>;

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(a.size(), vector<int>(b[0].size(), 0));
  for (int i=0; i<a.size(); i++) for (int j=0; j<b[0].size(); j++) for (int k=0; k<a[0].size(); k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, int exp) {
  Matrix ret = {{1, 0}, {0, 1}};
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

void format(int x) {
  if (x < 0) {
    cout << "-";
    x = -x;
  }
  if (x < 10) cout << "0";
  cout << x;
}

void solve(void) {
  int x, y, a0, a1, n; cin >> x >> y >> a0 >> a1 >> n;

  if (n == 0) format(a0);
  else format(matmul(matpow({{x, y}, {1, 0}}, n-1), {{a1}, {a0}})[0][0]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}