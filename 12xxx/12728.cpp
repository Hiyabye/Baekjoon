#include <iostream>
#include <vector>
#define MOD 1000
using namespace std;
using Matrix = vector<vector<long long>>;

Matrix matmul(Matrix a, Matrix b) {
  Matrix c(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) for (int k=0; k<2; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, long long exp) {
  Matrix ret(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(int idx) {
  int n; cin >> n;

  Matrix cal = matpow({{3, 5}, {1, 3}}, n);
  long long ans = (2 * cal[0][0] - 1 + MOD) % MOD;

  cout << "Case #" << idx << ": ";
  if (ans == 0) cout << "000";
  else if (ans < 10) cout << "00";
  else if (ans < 100) cout << "0";
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}