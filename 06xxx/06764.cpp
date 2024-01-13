#include <iostream>
using namespace std;

void solve(void) {
  int a[4]; cin >> a[0] >> a[1] >> a[2] >> a[3];

  if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3]) cout << "Fish Rising";
  else if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3]) cout << "Fish Diving";
  else if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) cout << "Fish At Constant Depth";
  else cout << "No Fish";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}