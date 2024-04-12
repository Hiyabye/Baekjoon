#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

double a(double n) {
  if (n <= 5) return 4;
  if (n <= 10) return 7;
  if (n <= 20) return 12;
  if (n <= 30) return 17;
  return n * 0.57;
}

double b(double m) {
  if (m <= 2) return 0.9 + m * 0.9;
  if (m <= 5) return 1 + m * 0.85;
  if (m <= 20) return 1.25 + m * 0.8;
  if (m <= 40) return 3.25 + m * 0.7;
  return 9.25 + m * 0.55;
}

void solve(void) {
  int n, m; cin >> n >> m;
  n /= 1000; m /= 1000;

  cout << fixed << setprecision(2) << min(a(n), b(n)) + min(a(m), b(m));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}