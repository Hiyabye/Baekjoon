#include <iostream>
using namespace std;

inline long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  long long n; cin >> n;

  long long a = 1;
  while (a * (a + 1) / 2 < n) a++;
  long long b = n - (a - 1) * a / 2 - 1;
  long long g = gcd(a, b);
  
  cout << a;
  if (b) cout << " " << b / g << "/" << a / g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}