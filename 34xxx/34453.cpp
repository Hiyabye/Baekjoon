#include <iostream>
using namespace std;

inline bool prime(long long n) {
  if (n <= 1) return false;
  if (n == 2) return true;
  if (!(n & 1)) return false;
  for (long long i=3; i*i<=n; i+=2) {
    if (!(n % i)) return false;
  }
  return true;
}

inline bool additive(long long n) {
  long long sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return prime(sum);
}

void solve(void) {
  long long n; cin >> n;

  if (!prime(n)) cout << "COMPOSITE";
  else if (additive(n)) cout << "ADDITIVE PRIME";
  else cout << "PRIME, BUT NOT ADDITIVE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}