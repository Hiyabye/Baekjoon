#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> x(3);
  for (int i=0; i<3; i++) cin >> x[i];
  int xh = (x[0]+x[1]+x[2])/2;
  if (x[0] == xh || x[1] == xh || x[2] == xh) {
    cout << 0;
    return;
  }

  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    if (i == j || xh <= x[j] || xh >= x[i]+x[j]) continue;
    cout << i+1 << "\n" << xh-x[j] << " " << x[i]+x[j]-xh;
    return;
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}