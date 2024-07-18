#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;

  for (int i=0; i<3; i++) {
    for (int j=0; j<k; j++) {
      for (int l=0; l<3; l++) {
        for (int m=0; m<k; m++) {
          cout << "*x* xx* *"[i*3+l];
        }
      }
      cout << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}