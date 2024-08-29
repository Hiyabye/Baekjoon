#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int b, w; cin >> b >> w;
  if (b == 0 && w == 0) {
    cout << "Impossible";
    return;
  }
  if (b > w) swap(b, w);

  int n = 1, flag = 1;
  while (flag) {
    if (n & 1) {
      if (b >= (n*n-1)/2 && w >= (n*n+1)/2) n++;
      else flag = 0;
    } else {
      if (b >= n*n/2 && w >= n*n/2) n++;
      else flag = 0;
    }
  }
  cout << n - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}