#include <iostream>
using namespace std;

void solve(void) {
  int a, p; cin >> a >> p;

  cout << (a * 7 < p * 13 ? "Petra" : a * 7 > p * 13 ? "Axel" : "lika");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}