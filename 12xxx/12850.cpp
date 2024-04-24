#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
using Matrix = vector<vector<long long>>;

const Matrix base = {
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 0, 0},
  {0, 1, 1, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 1, 1, 0},
  {0, 0, 0, 1, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 0, 1, 1, 0}
};

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(8, vector<long long>(8));
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) for (int k=0; k<8; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix m, int d) {
  Matrix ret(8, vector<long long>(8));
  for (int i=0; i<8; i++) ret[i][i] = 1;
  while (d) {
    if (d & 1) ret = matmul(ret, m);
    m = matmul(m, m);
    d >>= 1;
  }
  return ret;
}

void solve(void) {
  int d; cin >> d;

  cout << matpow(base, d)[0][0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}