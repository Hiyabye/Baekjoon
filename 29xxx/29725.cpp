#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(8);
  for (int i=0; i<8; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) {
    switch (v[i][j]) {
      case 'Q': ans += 9; break;
      case 'R': ans += 5; break;
      case 'B': ans += 3; break;
      case 'N': ans += 3; break;
      case 'P': ans += 1; break;
      case 'q': ans -= 9; break;
      case 'r': ans -= 5; break;
      case 'b': ans -= 3; break;
      case 'n': ans -= 3; break;
      case 'p': ans -= 1; break;
      default: break;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}