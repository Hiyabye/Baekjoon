#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int a=1; a<=n; a++) {
    if (n % a) continue;
    int c = n / a;
    for (int b=1; b<=n+2; b++) {
      if ((n+2) % b) continue;
      int d = -(n+2) / b;
      if (a*d+b*c == n+1) {
        cout << a << " " << b << " " << c << " " << d;
        return;
      }
    }
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}