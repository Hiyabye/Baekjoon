#include <iostream>
#include <vector>
using namespace std;

bool check(int n) {
  vector<bool> cnt(10, false);
  while (n) {
    if (cnt[n % 10]) return false;
    cnt[n % 10] = true;
    n /= 10;
  }
  return true;
}

void solve(void) {
  int y; cin >> y;

  while (!check(++y));
  cout << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}