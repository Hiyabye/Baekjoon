#include <iostream>
using namespace std;

typedef struct Square {
  int x1, y1, x2, y2;
} Square;

void solve(void) {
  Square s[4];
  for (int i=0; i<4; i++) {
    cin >> s[i].x1 >> s[i].y1 >> s[i].x2 >> s[i].y2;
  }

  int ans = 0;
  for (int i=1; i<=100; i++) {
    for (int j=1; j<=100; j++) {
      bool flag = false;
      for (int k=0; k<4; k++) {
        if (s[k].x1 <= i && i < s[k].x2 && s[k].y1 <= j && j < s[k].y2) {
          flag = true;
          break;
        }
      }
      if (flag) ans++;
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