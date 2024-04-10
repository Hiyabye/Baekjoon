#include <iostream>
using namespace std;

void solve(void) {
  int b, d, c, l; cin >> b >> d >> c >> l;

  bool flag = true;
  for (int i=0; i<=250; i++) {
    for (int j=0; j<=250; j++) {
      for (int k=0; k<=250; k++) {
        if (b*i + d*j + c*k == l) {
          cout << i << " " << j << " " << k << "\n";
          flag = false;
        }
      }
    }
  }
  if (flag) cout << "impossible";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}