#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  while (n--) {
    char c; cin >> c;
    if (c == 'N') a++;
    else b++;
  }

  long long ans = 1;
  for (int i=2; i<=a+b; i++) ans *= i;
  for (int i=2; i<=a; i++) ans /= i;
  for (int i=2; i<=b; i++) ans /= i;
  cout << ans - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}