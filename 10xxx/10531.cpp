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
  for (int i = 0; i < n; i++) c[i] = round(fa[i].real());
  return c;
}

void solve(void) {
  int n; cin >> n;
  vector<int> k(n);
  for (int i=0; i<n; i++) cin >> k[i];
  int m; cin >> m;
  vector<int> d(m);
  for (int i=0; i<m; i++) cin >> d[i];

  sort(k.begin(), k.end());
  sort(d.begin(), d.end());

  vector<int> a(k[n-1]+1, 0); a[0] = 1;
  for (int i=0; i<n; i++) a[k[i]] = 1;

  a = multiply(a, a);

  int ans = 0;
  for (int i=0; i<m; i++) {
    if (d[i] < a.size() && a[d[i]] > 0) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}