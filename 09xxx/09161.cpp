#include <iostream>
using namespace std;

void solve(void) {
  for (int i=100; i<=999; i++) {
    for (int j=100; j<=999; j++) {
      if (!(i % 111) && !(j % 111)) continue;
      if (j * (i / 10) ^ i * (j % 100)) continue;
      if ((i % 10) ^ (j / 100)) continue;
      cout << i << " / " << j << " = " << i / 10 << " / " << j % 100 << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}