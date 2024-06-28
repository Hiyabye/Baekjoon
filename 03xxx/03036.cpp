#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  if (!b) return a;
  return gcd(b, a % b);
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  for (int i=1; i<n; i++) {
    cout << a[0] / gcd(a[0], a[i]) << "/" << a[i] / gcd(a[0], a[i]) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}