#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double n; cin >> n;
  while (n >= 0) {
    cout << fixed << setprecision(2) << "Objects weighing " << n << " on Earth will weigh " << n*0.167 << " on the moon.\n";
    cin >> n;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}