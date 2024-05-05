#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int x; cin >> x;

  long long sum = 0, cnt = 0;
  for (int i=0; i<n; i++) {
    if (gcd(a[i], x) == 1) {
      sum += a[i];
      cnt++;
    }
  }
  cout << fixed << setprecision(7) << (double)sum / cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}