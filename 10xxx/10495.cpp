#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(int n) {
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  vector<bool> b(n, true);
  for (int i=n-1; i>=0; i--) {
    for (int j=i-1; j>=0; j--) {
      if (gcd(a[i], a[j]) > 1) {
        b[i] = b[j] = false;
      }
    }
    if (b[i]) {
      cout << a[i] << "\n";
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}