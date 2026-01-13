#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0, c = 0;
  for (int i=0; i<3*n; i++) {
    int x; cin >> x;
    if (x == 1) a++;
    else if (x == 2) b++;
    else c++;
  }
  
  cout << (a < n ? 1 : (b < n ? 2 : 3)) << "\n";
  cout << (a > n ? 1 : (b > n ? 2 : 3));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}