#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  vector<int> a(6), b(6);
  for (int i=0; i<6; i++) cin >> a[i];
  for (int i=0; i<6; i++) cin >> b[i];

  int ans = 0;
  for (int i=0; i<6; i++) for (int j=0; j<6; j++) {
    if (a[i] > b[j]) ans++;
  }
  cout << ans / gcd(ans, 36) << "/" << 36 / gcd(ans, 36);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}