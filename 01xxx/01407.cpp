#include <iostream>
using namespace std;

long long f(long long x) {
  long long ret = x;
  for (long long i=2; i<=x; i<<=1) {
    ret += (x/i) * (i>>1);
  }
  return ret;
}

void solve(void) {
  long long a, b; cin >> a >> b;

  cout << f(b) - f(a-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}