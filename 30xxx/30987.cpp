#include <iostream>
using namespace std;

void solve(void) {
  int x1, x2; cin >> x1 >> x2;
  int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

  cout << a*(x2*x2*x2-x1*x1*x1)/3 + (b-d)*(x2*x2-x1*x1)/2 + (c-e)*(x2-x1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}