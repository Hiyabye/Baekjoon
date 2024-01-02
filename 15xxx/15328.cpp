#include <iostream>
#include <cmath>
#define float128 __float128
using namespace std;

float128 mysqrt(float128 x) {
  float128 lo = 0, hi = x;
  for (int i=0; i<100; i++) {
    float128 mid = (lo+hi)/2;
    if (mid*mid < x) lo = mid;
    else hi = mid;
  }
  return lo;
}

void solve(void) {
  int x;
  cin >> x;

  int a, b, c, aa = 0, bb = 0, cc = 0;
  float128 sum = 0;
  for (int i=0; i<4; i++) {
    cin >> a >> b >> c;
    sum += mysqrt((aa-a)*(aa-a)+(bb-b)*(bb-b)+(cc-c)*(cc-c));
    aa = a; bb = b; cc = c;
  }

  if (sum <= x) cout << "YES\n";
  else cout << "NO\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}