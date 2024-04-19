#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

vector<int> precompute(void) {
  vector<int> ret(1001, 0); ret[1] = 3;
  for (int i=2; i<=1000; i++) {
    ret[i] = ret[i-1];
    for (int j=1; j<=i; j++) {
      if (gcd(i, j) == 1) ret[i] += 2;
    }
  }
  return ret;
}

void solve(const vector<int> &v) {
  int n; cin >> n;

  cout << v[n] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = precompute();

  int c; cin >> c;
  while (c--) solve(v);
  return 0;
}