#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  double x, y; cin >> x >> y;

  for (int i=0; i<n-1; i++) {
    string dir; double d; cin >> dir >> d;
    if (dir.length() == 1) {
      y += (dir == "N") ? d : (dir == "S" ? -d : 0);
      x += (dir == "E") ? d : (dir == "W" ? -d : 0);
    } else {
      d /= sqrt(2);
      y += (dir[0] == 'N') ? d : -d;
      x += (dir[1] == 'E') ? d : -d;
    }
  }
  cout << fixed << setprecision(7) << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}