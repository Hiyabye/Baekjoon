#include <algorithm>
#include <cmath>
#include <complex>
#include <iostream>
#include <vector>
using namespace std;

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
  for (int i = 0; i < n; i++) {
    c[i] = round(fa[i].real());
    if (c[i]) c[i] = 1;
  }
  return c;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(1001, 0);
  while (n--) {
    int x; cin >> x;
    a[x] = 1;
  }

  vector<int> b = a; k--;
  while (k) {
    if (k & 1) b = multiply(b, a);
    a = multiply(a, a);
    k >>= 1;
  }

  for (int i=0; i<b.size(); i++) {
    if (b[i]) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}