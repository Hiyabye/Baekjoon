#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void solve(void) {
  long long a; cin >> a;

  cout << fixed << setprecision(8) << sqrt(a) * 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}