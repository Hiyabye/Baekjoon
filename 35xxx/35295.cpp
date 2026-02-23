#include <iostream>
#include <vector>
using namespace std;

inline int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

inline int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

inline bool prime(int x) {
  if (x < 2) return false;
  for (int i=2; i*i<=x; i++) {
    if (!(x % i)) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (prime(lcm(a[i], a[j]))) continue;
    cout << "YES\n2\n" << a[i] << " " << a[j];
    return;
  }
  cout << "NO";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}