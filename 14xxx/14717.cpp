#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  if (a == b) {
    cout << fixed << setprecision(3) << (double)(143 + a) / 153;
    return;
  }

  int cnt = 0;
  for (int i=1; i<=9; i++) for (int j=i+1; j<=10; j++) {
    if (i == a && j == b) continue;
    if ((i+j) % 10 >= (a+b) % 10) continue;
    cnt += (i == a || i == b || j == a || j == b) ? 2 : 4;
  }
  cout << fixed << setprecision(3) << (double)(cnt) / 153;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}