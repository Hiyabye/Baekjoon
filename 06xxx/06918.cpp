#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int p, g, r, o; cin >> p >> g >> r >> o;
  int n; cin >> n;

  int cnt = 0, mn = 1e9;
  for (int i=0; i<=n/p; i++) for (int j=0; j<=(n-i*p)/g; j++) for (int k=0; k<=(n-i*p-j*g)/r; k++) {
    if ((n-i*p-j*g-k*r) % o != 0) continue;
    int l = (n-i*p-j*g-k*r) / o;
    cout << "# of PINK is " << i << " ";
    cout << "# of GREEN is " << j << " ";
    cout << "# of RED is " << k << " ";
    cout << "# of ORANGE is " << l << "\n";
    cnt++, mn = min(mn, i+j+k+l);
  }
  cout << "Total combinations is " << cnt << ".\n";
  cout << "Minimum number of tickets to print is " << mn << ".";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}