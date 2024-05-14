#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

string calc(long long a, long long b) {
  if (a == 0) return "0";

  bool sign = (a < 0) ^ (b < 0);
  a = abs(a); b = abs(b);
  long long g = gcd(a, b);
  a /= g; b /= g;
  return (sign ? "-" : "") + to_string(a) + (b == 1 ? "" : "/" + to_string(b));
}

void solve(void) {
  vector<long long> x(2, 0), y(2, 0);
  for (int i=0; i<2; i++) for (int j=0; j<4; j++) {
    long long a, b; cin >> a >> b;
    x[i] += a; y[i] += b;
  }

  cout << calc(y[0]-y[1], x[0]-x[1]) << " " << calc((x[0]-x[1])*y[0]-(y[0]-y[1])*x[0], (x[0]-x[1])*4);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}