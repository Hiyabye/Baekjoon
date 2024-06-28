#include <iostream>
using namespace std;

bool telemarketer(int a[]) {
  if (a[0] != 8 && a[0] != 9) return false;
  if (a[3] != 8 && a[3] != 9) return false;
  return a[1] == a[2];
}

void solve(void) {
  int a[4]; cin >> a[0] >> a[1] >> a[2] >> a[3];

  cout << (telemarketer(a) ? "ignore" : "answer");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}