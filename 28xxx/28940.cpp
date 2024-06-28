#include <iostream>
using namespace std;

int ceil(int a, int b) {
  return (a+b-1) / b;
}

int solve(void) {
  int w, h; cin >> w >> h;
  int n, a, b; cin >> n >> a >> b;

  return (a > w || b > h) ? -1 : ceil(n, (w/a)*(h/b));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}