#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(6), b(6);
  for (int i=0; i<6; i++) cin >> a[i];
  b[0] = 1; b[1] = 5; b[2] = 10; b[3] = 20; b[4] = 50; b[5] = 100;

  int idx = 0;
  for (int i=1; i<6; i++) {
    if (a[i] * b[i] > a[idx] * b[idx]) idx = i;
    else if (a[i] * b[i] == a[idx] * b[idx]) {
      if (a[i] < a[idx]) idx = i;
    }
  }
  cout << b[idx];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}