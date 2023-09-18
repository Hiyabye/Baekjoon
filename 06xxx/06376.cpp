#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n-1);
}

void solve(void) {
  cout << "n e\n";
  cout << "- -----------\n";

  double e = 0;
  for (int n=0; n<=9; n++) {
    e += 1.0 / factorial(n);
    cout << n << " ";
    if (n <= 2) cout << e;
    else cout << fixed << setprecision(9) << e;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}