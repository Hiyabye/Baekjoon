#include <iostream>
using namespace std;

inline int pow6(int x) {
  return x * x * x * x * x * x;
}

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;

  int ans = 0;
  for (int i=1; pow6(i)<=b; i++) {
    if (pow6(i) >= a) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}