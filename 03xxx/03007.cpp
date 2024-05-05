#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void positive(int n, vector<long long> &a, int mod) {
  long long mn = 0;
  for (int i=mod; i<n; i+=3) mn = min(mn, a[i]);
  for (int i=mod; i<n; i+=3) a[i] -= (mn - 1);
}

vector<long long> zero(int n, const vector<long long> &b) {
  vector<long long> a(n, 0);
  for (int i=0; i<n; i++) {
    a[(i+3)%n] = a[i] + b[(i+2)%n] - b[(i+1)%n];
  }

  positive(n, a, 0);
  positive(n, a, 1);
  positive(n, a, 2);

  for (int i=0; i<n; i+=3) {
    a[i] = b[(i+1)%n] - a[(i+1)%n] - a[(i+2)%n];
  }
  return a;
}

vector<long long> one(int n, const vector<long long> &b, long long sum) {
  vector<long long> a(n, sum);
  for (int i=0; i<n; i++) for (int j=2; j<n; j+=3) {
    a[i] -= b[(i+j)%n];
  }
  return a;
}

vector<long long> two(int n, const vector<long long> &b, long long sum) {
  vector<long long> a(n, -sum);
  for (int i=0; i<n; i++) for (int j=1; j<n; j+=3) {
    a[i] += b[(i+j)%n];
  }
  return a;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> b(n);
  for (int i=0; i<n; i++) cin >> b[i];
  long long sum = accumulate(b.begin(), b.end(), 0LL);

  vector<long long> a;
  if (n % 3 == 0) a = zero(n, b);
  else if (n % 3 == 1) a = one(n, b, sum / 3);
  else a = two(n, b, sum / 3);

  for (int i=0; i<n; i++) {
    cout << a[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}