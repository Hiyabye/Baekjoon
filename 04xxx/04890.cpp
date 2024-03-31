#include <algorithm>
#include <iostream>
using namespace std;

bool solve(void) {
  long long w, h; cin >> w >> h;
  if (w == 0 && h == 0) return false;

  if (w < h) swap(w, h);
  cout << (w % h ? w * h : w / h) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}