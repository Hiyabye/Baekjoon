#include <iostream>
using namespace std;

bool solve(void) {
  int y; cin >> y;

  for (int i=2018, j=3; i<=y; i+=2+(j>=10), j=(j+2)%12) {
    if (i == y) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}