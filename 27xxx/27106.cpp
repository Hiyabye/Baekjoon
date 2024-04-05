#include <iostream>
using namespace std;

void solve(void) {
  int p; cin >> p;

  cout << (100-p)/25 << " " << (100-p)%25/10 << " " << (100-p)%25%10/5 << " " << (100-p)%25%10%5;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}