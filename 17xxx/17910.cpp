#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  long long num = x[n-1], den = 1;
  for (int i=n-2; i>=0; i--) {
    swap(num, den);
    num += den * x[i];
    long long g = gcd(num, den);
    num /= g; den /= g;
  }
  cout << num << "/" << den;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}