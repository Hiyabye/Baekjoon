#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

inline long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

inline long long calc(const vector<long long> &t, const vector<long long> &k, long long d, int a, int b) {
  long long m = max(t[a], t[b]), l = lcm(k[a], k[b]);
  long long ca = (d - t[a]) / k[a] + 1, cb = (d - t[b]) / k[b] + 1;
  long long cl = max(0LL, d - m + (m % l ? m % l : l)) / l;
  return ca + cb - cl;
}

void solve(void) {
  long long n, d; cin >> n >> d;
  vector<long long> t(n), k(n);
  for (int i=0; i<n; i++) cin >> t[i] >> k[i];

  long long a = 0, b = 0, c = 0;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    long long x = calc(t, k, d, i, j);
    if (x > c) a = i+1, b = j+1, c = x;
  }
  cout << a << " " << b << "\n" << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}