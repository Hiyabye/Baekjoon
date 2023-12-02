#include <iostream>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  int a, b; cin >> a >> b;

  for (int i=0; i<r; i++) {
    for (int j=0; j<a; j++) {
      for (int k=0; k<c; k++) {
        for (int l=0; l<b; l++) {
          cout << ((i+k) & 1 ? '.' : 'X');
        }
      }
      cout << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}