#include <iostream>
using namespace std;

bool solve(void) {
  long long n; cin >> n;
  if (n < 2) return false;
  if (n == 2) return true;
  if (!(n & 1)) return false;

  for (long long i=3; i*i<=n; i+=2) {
    if (!(n % i)) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "SAFE" : "BROKEN");
  return 0;
}