#include <algorithm>
#include <cmath>
#include <complex>
#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n) {
  vector<bool> prime(n+1, true);
  prime[0] = prime[1] = false;
  for (int i=4; i<=n; i+=2) {
    prime[i] = false;
  }
  for (int i=3; i*i<=n; i+=2) {
    if (!prime[i]) continue;
    for (int j=i*i; j<=n; j+=i*2) {
      prime[j] = false;
    }
  }
  return prime;
}

void fft(vector<complex<double>> &a, bool invert) {
  for (int i = 1, j = 0; i < a.size(); i++) {
    int bit = a.size() >> 1;
    for (; j & bit; bit >>= 1) j ^= bit;
    j ^= bit;
    if (i < j) swap(a[i], a[j]);
  }
  for (int len = 2; len <= a.size(); len <<= 1) {
    double ang = 2 * acos(-1) / len * (invert ? -1 : 1);
    complex<double> wlen(cos(ang), sin(ang));
    for (int i = 0; i < a.size(); i += len) {
      complex<double> w(1);
      for (int j = 0; j < len / 2; j++) {
        complex<double> u = a[i + j], v = a[i + j + len / 2] * w;
        a[i + j] = u + v;
        a[i + j + len / 2] = u - v;
        w *= wlen;
      }
    }
  }
  if (invert) {
    for (complex<double> &x : a) x /= a.size();
  }
}

vector<int> multiply(const vector<int> &a, const vector<int> &b) {
  vector<complex<double>> fa(a.begin(), a.end()), fb(b.begin(), b.end());
  int n = 1;
  while (n < a.size() + b.size()) n <<= 1;
  fa.resize(n);
  fb.resize(n);

  fft(fa, false);
  fft(fb, false);
  for (int i = 0; i < n; i++) fa[i] *= fb[i];
  fft(fa, true);

  vector<int> c(n);
  for (int i = 0; i < n; i++) c[i] = round(fa[i].real());
  return c;
}

vector<int> precompute(void) {
  vector<bool> prime = sieve(1000000);
  vector<int> a(1000001, 0), b(1000001, 0);
  for (int i=1; i<=1000000; i++) {
    a[i] = b[i] = prime[i];
  }
  return multiply(a, b);
}

void solve(const vector<int> &z) {
  int n; cin >> n;

  cout << (z[n] + 1) / 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> z = precompute();

  int t; cin >> t;
  while (t--) solve(z);
  return 0;
}