#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int a, b;
  cin >> a;
  cin >> b;

  if (a < 2 || (a == 2 && b < 18)) cout << "Before";
  else if (a > 2 || (a == 2 && b > 18)) cout << "After";
  else cout << "Special";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}