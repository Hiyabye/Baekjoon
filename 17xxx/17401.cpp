#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

class Matrix {
public:
  int n; // square matrix
  vector<vector<long long> > p;

  // constructor
  Matrix(int n) : n(n) {
    p.resize(n, vector<long long>(n, 0));
  }

  // identity matrix
  void identity(void) {
    for (int i=0; i<n; i++) p[i][i] = 1;
  }

  // matrix multiplication
  Matrix operator*(const Matrix &rhs) const {
    Matrix ret(n);
    
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        for (int k=0; k<n; k++) {
          ret.p[i][j] = (ret.p[i][j] + p[i][k] * rhs.p[k][j]) % MOD;
        }
      }
    }
    return ret;
  }

  // matrix exponentiation
  Matrix operator^(int exp) const {
    Matrix base = *this;
    Matrix ret(n); ret.identity();

    while (exp) {
      if (exp & 1) ret = ret * base;
      base = base * base;
      exp >>= 1;
    }
    return ret;
  }
};

void solve(void) {
  int t, n, d; cin >> t >> n >> d;
  vector<Matrix> v(t, Matrix(n));

  for (int i=0; i<t; i++) {
    int m; cin >> m;
    for (int j=0; j<m; j++) {
      int a, b, c; cin >> a >> b >> c; a--; b--;
      v[i].p[a][b] = c;
    }
  }

  Matrix ans(n); ans.identity();
  for (int i=0; i<t; i++) ans = ans * v[i];
  ans = ans ^ (d / t);
  for (int i=0; i<d%t; i++) ans = ans * v[i];

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << ans.p[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}