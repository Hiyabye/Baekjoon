#include <iostream>
using namespace std;

void solve(int idx) {
  int r, c, w, h; cin >> r >> c >> w >> h;

  cout << "Case #" << idx << ":\n";
  for (int i=0; i<=r*(h+1); i++) {
    for (int j=0; j<=c*(w+1); j++) {
      cout << (i % (h+1) ? (j % (w+1) ? '*' : '|') : (j % (w+1) ? '-' : '+')); 
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}