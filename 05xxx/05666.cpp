#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  int h, p;
  while (cin >> h >> p) {
    cout << fixed << setprecision(2) << (double)h / p << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}