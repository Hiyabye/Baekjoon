#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int d; cin >> d;
  long long a, o; cin >> a >> o;
  long long Da, Do; cin >> Da >> Do;

  a = max(0LL, a - Da * d);
  o = max(0LL, o - Do * d);

  cout << fixed << setprecision(7) << (double)a / (a + o) * 100.0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}