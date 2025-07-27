#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>
using namespace std;

// ============ Big Integer Library ============
// Reference:
// - https://github.com/indy256/codelibrary/blob/main/cpp/numeric/bigint.cpp
// - https://github.com/ngthanhtrung23/ACM_Notebook_new/blob/master/Math/bigint.h
// - https://github.com/koosaga/olympiad/blob/master/Library/codes/math/bigint.cpp
// 
// Tested:
// - https://judge.yosupo.jp/problem/addition_of_big_integers
// - https://judge.yosupo.jp/problem/multiplication_of_big_integers
//

const int BASE_DIGITS = 9;
const int BASE = 1000000000;

struct BigInt {
  int sign;
  vector<int> a;

  // ============ Constructors ============
  // Default constructor
  BigInt(void) : sign(1) {}

  // 64-bit integer constructor
  BigInt(long long v) { *this = v; }
  BigInt& operator=(long long v) {
    this->sign = v < 0 ? -1 : 1;
    v *= this->sign;
    this->a.clear();
    for (; v > 0; v /= BASE) this->a.push_back(v % BASE);
    return *this;
  }

  // String constructor
  BigInt(const string &s) { read(s); }

  // ============ Input/Output ============
  void read(const string &s) {
    this->sign = 1;
    this->a.clear();
    int pos = 0;
    while (pos < static_cast<int>(s.length()) && (s[pos] == '-' || s[pos] == '+')) {
      if (s[pos++] == '-') this->sign = -this->sign;
    }
    for (int i = static_cast<int>(s.length()) - 1; i >= pos; i -= BASE_DIGITS) {
      int x = 0;
      for (int j = max(pos, i - BASE_DIGITS + 1); j <= i; ++j) {
        x = x * 10 + s[j] - '0';
      }
      this->a.push_back(x);
    }
    trim();
  }

  friend istream& operator>>(istream &in, BigInt &v) {
    string s;
    in >> s;
    v.read(s);
    return in;
  }

  friend ostream& operator<<(ostream &out, const BigInt &v) {
    if (v.sign == -1 && !v.isZero()) out << '-';
    out << (v.a.empty() ? 0 : v.a.back());
    for (int i = static_cast<int>(v.a.size()) - 2; i >= 0; --i) {
      out << setw(BASE_DIGITS) << setfill('0') << v.a[i];
    }
    return out;
  }

  // ============ Comparison ============
  bool operator<(const BigInt &v) const {
    if (this->sign != v.sign) return this->sign < v.sign;
    if (this->a.size() != v.a.size()) return this->a.size() * this->sign < v.a.size() * v.sign;
    for (int i = static_cast<int>(this->a.size()) - 1; i >= 0 ; --i) {
      if (this->a[i] == v.a[i]) continue;
      return this->a[i] * this->sign < v.a[i] * this->sign;
    }
    return false;
  }
  bool operator>(const BigInt &v) const { return v < *this; }
  bool operator<=(const BigInt &v) const { return !(v < *this); }
  bool operator>=(const BigInt &v) const { return !(*this < v); }
  bool operator==(const BigInt &v) const { return !(*this < v) && !(v < *this); }
  bool operator!=(const BigInt &v) const { return *this < v || v < *this; }

  // Returns:
  // -1 if |x| < |y|
  //  0 if |x| == |y|
  //  1 if |x| > |y|
  friend int __compare_abs(const BigInt &x, const BigInt &y) {
    if (x.a.size() != y.a.size()) return x.a.size() < y.a.size() ? -1 : 1;
    for (int i = static_cast<int>(x.a.size()) - 1; i >= 0; --i) {
      if (x.a[i] == y.a[i]) continue;
      return x.a[i] < y.a[i] ? -1 : 1;
    }
    return 0;
  }

  // ============ Unary operators ============
  BigInt operator+(void) const { return *this; }
  BigInt operator-(void) const {
    BigInt res = *this;
    if (!res.isZero()) res.sign = -res.sign;
    return res;
  }

  // ============ Addition ============
  // NOTE: sign ignored
  void __internal_add(const BigInt &v) {
    if (this->a.size() < v.a.size()) this->a.resize(v.a.size(), 0);
    for (int i = 0, carry = 0; i < static_cast<int>(this->a.size()) || i < static_cast<int>(v.a.size()) || carry; ++i) {
      if (i == static_cast<int>(this->a.size())) this->a.push_back(0);
      this->a[i] += carry + (i < static_cast<int>(v.a.size()) ? v.a[i] : 0);
      carry = this->a[i] >= BASE;
      if (carry) this->a[i] -= BASE;
    }
  }

  BigInt operator+=(const BigInt &v) {
    if (this->sign == v.sign) {
      __internal_add(v);
    } else if (__compare_abs(*this, v) >= 0) {
      __internal_sub(v);
    } else {
      BigInt vv = v;
      swap(*this, vv);
      __internal_sub(vv);
    }
    return *this;
  }

  // Optimized operator+ for rvalue reference
  // https://stackoverflow.com/questions/13166079/move-semantics-and-pass-by-rvalue-reference-in-overloaded-arithmetic
  template <typename L, typename R> typename enable_if<is_convertible<L, BigInt>::value && is_convertible<R, BigInt>::value && is_lvalue_reference<R&&>::value, BigInt>::type friend operator+(L &&l, R &&r) {
    BigInt result(std::forward<L>(l));
    result += r;
    return result;
  }

  // Optimized operator+ for lvalue reference
  // https://stackoverflow.com/questions/13166079/move-semantics-and-pass-by-rvalue-reference-in-overloaded-arithmetic
  template <typename L, typename R> typename enable_if<is_convertible<L, BigInt>::value && is_convertible<R, BigInt>::value && is_rvalue_reference<R&&>::value, BigInt>::type friend operator+(L &&l, R &&r) {
    BigInt result(std::move(r));
    result += l;
    return result;
  }

  // ============ Subtraction ============
  // NOTE: sign ignored
  void __internal_sub(const BigInt &v) {
    for (int i = 0, borrow = 0; i < static_cast<int>(v.a.size()) || borrow; ++i) {
      this->a[i] -= borrow + (i < static_cast<int>(v.a.size()) ? v.a[i] : 0);
      borrow = this->a[i] < 0;
      if (borrow) this->a[i] += BASE;
    }
    this->trim();
  }

  BigInt operator-=(const BigInt &v) {
    if (this->sign != v.sign) {
      __internal_add(v);
    } else if (__compare_abs(*this, v) >= 0) {
      __internal_sub(v);
    } else {
      BigInt vv = v;
      swap(*this, vv);
      __internal_sub(vv);
      this->sign = -this->sign;
    }
    return *this;
  }

  // Optimized operator- for rvalue reference
  // https://stackoverflow.com/questions/13166079/move-semantics-and-pass-by-rvalue-reference-in-overloaded-arithmetic
  template <typename L, typename R> typename enable_if<is_convertible<L, BigInt>::value && is_convertible<R, BigInt>::value, BigInt>::type friend operator-(L &&l, R &&r) {
    BigInt result(std::forward<L>(l));
    result -= r;
    return result;
  }

  // ============ Multiplication ============
  BigInt mul_simple(const BigInt &v) const {
    BigInt res;
    res.sign = this->sign * v.sign;
    res.a.resize(this->a.size() + v.a.size());
    for (int i = 0; i < static_cast<int>(this->a.size()); ++i) {
      if (!this->a[i]) continue;
      for (int j = 0, carry = 0; j < static_cast<int>(v.a.size()) || carry; ++j) {
        long long cur = res.a[i + j] + static_cast<long long>(this->a[i]) * (j < static_cast<int>(v.a.size()) ? v.a[j] : 0) + carry;
        carry = static_cast<int>(cur / BASE);
        res.a[i + j] = static_cast<int>(cur % BASE);
      }
    }
    res.trim();
    return res;
  }

  void fft(vector<complex<double>> &a, bool inv) const {
    int n = static_cast<int>(a.size()), j = 0;
    vector<complex<double>> roots(n >> 1);
    for (int i = 1; i < n; ++i) {
      int bit = n >> 1;
      for (; j >= bit; bit >>= 1) j -= bit;
      j += bit;
      if (i < j) swap(a[i], a[j]);
    }
    double ang = 2 * acos(double(-1)) / n * (inv ? -1 : 1);
    for (int i = 0; i < n / 2; i++) roots[i] = complex<double>(cos(ang * i), sin(ang * i));
    for (int i = 2; i <= n; i <<= 1) {
      int step = n / i;
      for (int j = 0; j < n; j += i) {
        for (int k = 0; k < i / 2; ++k) {
          complex<double> u = a[j + k], v = a[j + k + i / 2] * roots[step * k];
          a[j + k] = u + v;
          a[j + k + i / 2] = u - v;
        }
      }
    }
    if (inv) for (int i = 0; i < n; ++i) a[i] /= n;
  }

  void multiply_fft(const vector<int> &a, const vector<int> &b, vector<int> &res) const {
    vector<complex<double>> fa(a.begin(), a.end());
    vector<complex<double>> fb(b.begin(), b.end());
    int n = 1;
    while (n < static_cast<int>(max(a.size(), b.size()))) n <<= 1;
    n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; ++i) fa[i] *= fb[i];
    fft(fa, true);

    res.resize(n);
    long long carry = 0;
    for (int i = 0; i < n; ++i) {
      long long t = static_cast<long long>(fa[i].real() + 0.5) + carry;
      carry = t / 1000;
      res[i] = t % 1000;
    }
  }

  BigInt mul_fft(const BigInt &v) const {
    BigInt res;
    res.sign = this->sign * v.sign;
    multiply_fft(convert_base(this->a, BASE_DIGITS, 3), convert_base(v.a, BASE_DIGITS, 3), res.a);
    res.a = convert_base(res.a, 3, BASE_DIGITS);
    res.trim();
    return res;
  }

  // Convert BASE 10^from -> 10^to
  static vector<int> convert_base(const vector<int> &a, int from, int to) {
    vector<long long> p(max(from, to) + 1);
    p[0] = 1;
    for (int i = 1; i < static_cast<int>(p.size()); ++i) p[i] = p[i - 1] * 10;
    vector<int> res;
    long long cur = 0;
    int cur_digits = 0;
    for (int i = 0; i < static_cast<int>(a.size()); ++i) {
      cur += a[i] * p[cur_digits];
      cur_digits += from;
      while (cur_digits >= to) {
        res.push_back(static_cast<long long>(cur % p[to]));
        cur /= p[to];
        cur_digits -= to;
      }
    }
    res.push_back(static_cast<int>(cur));
    while (!res.empty() && !res.back()) res.pop_back();
    return res;
  }

  static vector<long long> karatsubaMultiply(const vector<long long> &a, const vector<long long> &b) {
    int n = static_cast<int>(a.size());
    vector<long long> res(n + n);
    if (n <= 32) {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
          res[i + j] += a[i] * b[j];
        }
      }
      return res;
    }

    int k = n >> 1;
    vector<long long> a1(a.begin(), a.begin() + k);
    vector<long long> a2(a.begin() + k, a.end());
    vector<long long> b1(b.begin(), b.begin() + k);
    vector<long long> b2(b.begin() + k, b.end());

    vector<long long> a1b1 = karatsubaMultiply(a1, b1);
    vector<long long> a2b2 = karatsubaMultiply(a2, b2);

    for (int i = 0; i < k; ++i) a2[i] += a1[i];
    for (int i = 0; i < k; ++i) b2[i] += b1[i];

    vector<long long> r = karatsubaMultiply(a2, b2);
    for (int i = 0; i < static_cast<int>(a1b1.size()); ++i) r[i] -= a1b1[i];
    for (int i = 0; i < static_cast<int>(a2b2.size()); ++i) r[i] -= a2b2[i];
    for (int i = 0; i < static_cast<int>(r.size()); ++i) res[i + k] += r[i];
    for (int i = 0; i < static_cast<int>(a1b1.size()); ++i) res[i] += a1b1[i];
    for (int i = 0; i < static_cast<int>(a2b2.size()); ++i) res[i + n] += a2b2[i];

    return res;
  }

  BigInt mul_karatsuba(const BigInt &v) const {
    vector<int> a6 = convert_base(this->a, BASE_DIGITS, 6);
    vector<int> b6 = convert_base(v.a, BASE_DIGITS, 6);
    vector<long long> a(a6.begin(), a6.end());
    vector<long long> b(b6.begin(), b6.end());
    while (a.size() < b.size()) a.push_back(0);
    while (b.size() < a.size()) b.push_back(0);
    // TODO: What happens if a.size() == b.size() == 0? Is it possible?
    while (a.size() & (a.size() - 1)) a.push_back(0), b.push_back(0);
    vector<long long> c = karatsubaMultiply(a, b);

    BigInt res;
    res.sign = this->sign * v.sign;
    long long carry = 0;
    for (int i = 0; i < static_cast<int>(c.size()); ++i) {
      long long cur = c[i] + carry;
      res.a.push_back(static_cast<int>(cur % 1000000));
      carry = cur / 1000000;
    }
    res.a = convert_base(res.a, 6, BASE_DIGITS);
    res.trim();
    return res;
  }

  BigInt operator*(int v) const {
    if (llabs(v) >= BASE) return *this * BigInt(v);
    BigInt res = *this;
    res *= v;
    return res;
  }

  BigInt operator*(const BigInt &v) const {
    // TODO: Do we need to static_cast this?
    if (a.size() < 32 || v.a.size() < 32) return mul_simple(v);
    if (a.size() > 100111 || v.a.size() > 100111) return mul_fft(v);
    return mul_karatsuba(v);
  }

  void operator*=(int v) {
    if (llabs(v) >= BASE) {
      *this *= BigInt(v);
      return;
    }
    if (v < 0) this->sign = -sign, v = -v;
    for (int i = 0, carry = 0; i < static_cast<int>(this->a.size()) || carry; ++i) {
      if (i == static_cast<int>(this->a.size())) this->a.push_back(0);
      long long cur = this->a[i] * static_cast<long long>(v) + carry;
      carry = static_cast<int>(cur / BASE);
      this->a[i] = static_cast<int>(cur % BASE);
    }
    trim();
  }
  void operator*=(const BigInt &v) { *this = *this * v; }

  // ============ Division ============
  friend pair<BigInt, BigInt> divmod(const BigInt &a1, const BigInt &b1) {
    assert(b1 > 0); // TODO: Handle b1 <= 0

    long long norm = BASE / (b1.a.back() + 1);
    BigInt a = a1.abs() * norm;
    BigInt b = b1.abs() * norm;
    BigInt q = 0, r = 0;
    q.a.resize(a.a.size());

    for (int i = static_cast<int>(a.a.size()) - 1; i >= 0; --i) {
      r *= BASE;
      r += a.a[i];
      long long s1 = r.a.size() <= b.a.size() ? 0 : r.a[b.a.size()];
      long long s2 = r.a.size() <= b.a.size() - 1 ? 0 : r.a[b.a.size() - 1];
      long long d = (static_cast<long long>(BASE) * s1 + s2) / b.a.back();
      r -= b * d;
      while (r < 0) r += b, --d;
      q.a[i] = d;
    }

    q.sign = a1.sign * b1.sign;
    r.sign = a1.sign;
    q.trim();
    r.trim();
    auto res = make_pair(q, r / norm);
    if (res.second < 0) res.second += b1;
    return res;
  }

  BigInt operator/(int v) const {
    assert(v > 0); // TODO: Handle v <= 0
    if (llabs(v) >= BASE) return *this / BigInt(v);
    BigInt res = *this;
    res /= v;
    return res;
  }

  BigInt operator/(const BigInt &v) const {
    if (v < 0) return divmod(-*this, -v).first;
    return divmod(*this, v).first;
  }

  void operator/=(int v) {
    assert(v > 0); // TODO: Handle v <= 0
    if (llabs(v) >= BASE) {
      *this /= BigInt(v);
      return;
    }
    if (v < 0) this->sign = -sign, v = -v;
    for (int i = static_cast<int>(this->a.size()) - 1, rem = 0; i >= 0; --i) {
      long long cur = this->a[i] + rem * static_cast<long long>(BASE);
      this->a[i] = static_cast<int>(cur / v);
      rem = static_cast<int>(cur % v);
    }
    trim();
  }

  void operator/=(const BigInt &v) { *this = *this / v; }

  // ============ Modulo ============
  BigInt operator%(const BigInt &v) const {
    // TODO: Verify this
    if (v < 0) return divmod(-*this, -v).second;
    return divmod(*this, v).second;
  }

  long long operator%(long long v) const {
    assert(v > 0);    // TODO: Handle v <= 0
    assert(v < BASE); // TODO: Handle v >= BASE
    int m = 0;
    for (int i = static_cast<int>(this->a.size()) - 1; i >= 0; --i) {
      m = (this->a[i] + m * static_cast<long long>(BASE)) % v;
    }
    return m * this->sign;
  }

  // ============ Utility ============
  BigInt abs(void) const {
    BigInt res = *this;
    res.sign *= res.sign;
    return res;
  }

  void trim(void) {
    while (!this->a.empty() && !this->a.back()) this->a.pop_back();
    if (this->a.empty()) this->sign = 1;
  }

  bool isZero(void) const {
    return this->a.empty() || (static_cast<int>(this->a.size()) == 1 && !this->a[0]);
  }

  friend BigInt gcd(const BigInt &a, const BigInt &b) {
    return b.isZero() ? a : gcd(b, a % b);
  }

  friend BigInt lcm(const BigInt &a, const BigInt &b) {
    return a / gcd(a, b) * b;
  }

  friend BigInt sqrt(const BigInt &a1) {
    BigInt a = a1;
    while (a.a.empty() || a.a.size() & 1) a.a.push_back(0);

    int n = static_cast<int>(a.a.size());
    int firstDigit = static_cast<int>(sqrt(static_cast<double>(a.a[n - 1]) * BASE + a.a[n - 2]));
    int norm = BASE / (firstDigit + 1);
    a *= norm;
    a *= norm;
    while (a.a.empty() || a.a.size() & 1) a.a.push_back(0);

    BigInt r = static_cast<long long>(a.a[n - 1]) * BASE + a.a[n - 2];
    firstDigit = static_cast<int>(sqrt(static_cast<double>(a.a[n - 1]) * BASE + a.a[n - 2]));
    int q = firstDigit;
    BigInt res;

    for (int j = n / 2 - 1; j >= 0; --j) {
      for (;; --q) {
        BigInt r1 = (r - (res * 2 * BigInt(BASE) + q) * q) * BigInt(BASE) * BigInt(BASE) + (j > 0 ? static_cast<long long>(a.a[2 * j - 1]) * BASE + a.a[2 * j - 2] : 0);
        if (r1 >= 0) {
          r = r1;
          break;
        }
      }
      res *= BASE;
      res += q;

      if (j > 0) {
        int d1 = res.a.size() + 2 < r.a.size() ? r.a[res.a.size() + 2] : 0;
        int d2 = res.a.size() + 1 < r.a.size() ? r.a[res.a.size() + 1] : 0;
        int d3 = res.a.size() < r.a.size() ? r.a[res.a.size()] : 0;
        q = static_cast<int>((static_cast<long long>(d1) * BASE * BASE + static_cast<long long>(d2) * BASE + d3) / (firstDigit * 2));
      }
    }

    res.trim();
    return res / norm;
  }
};

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  BigInt f = 1;
  for (int i=2; i<=n; i++) f *= i;

  vector<int> d(10, 0);
  while (!f.isZero()) {
    d[f % 10]++;
    f /= 10;
  }

  cout << n << "! --\n   (0)" << setw(5) << d[0];
  for (int i=1; i<=4; i++) {
    cout << "    (" << i << ")" << setw(5) << d[i];
  }
  cout << " \n   (5)" << setw(5) << d[5];
  for (int i=6; i<=9; i++) {
    cout << "    (" << i << ")" << setw(5) << d[i];
  }
  cout << " \n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}