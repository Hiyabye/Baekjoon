#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(int idx) {
  double h, th; cin >> h >> th;

  cout << "Case " << idx << ": ";
  if (th == 0) cout << "Infinity";
  else if (th == 90) cout << h;
  else cout << fixed << setprecision(7) << abs(h / tan(th * M_PI / 180) - h);
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}