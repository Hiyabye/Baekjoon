#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double x, y, z; int n; cin >> x >> y >> z >> n;

  int a = 1, b = 1, c = 1;
  for (int i=1; i<=n; i++) for (int j=1; i*j<=n; j++) {
    if (n % (i*j)) continue;
    a = i; b = j; c = n / (i*j);
    break;
  }

  double dx = x / a, dy = y / b, dz = z / c;
  for (int i=0; i<a; i++) for (int j=0; j<b; j++) for (int k=0; k<c; k++) {
    cout << fixed << setprecision(9) << dx * i << " " << dy * j << " " << dz * k << " ";
    cout << fixed << setprecision(9) << dx * (i+1) << " " << dy * (j+1) << " " << dz * (k+1) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}