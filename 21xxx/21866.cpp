#include <iostream>
using namespace std;

void solve(void) {
  int sum = 0;

  bool hack = false;
  for (int i=0; i<9; i++) {
    int x; cin >> x;
    if (x > (i/2+1)*100) hack = true;
    sum += x;
  }
  cout << (sum < 100 ? "none" : (hack ? "hacker" : "draw"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}