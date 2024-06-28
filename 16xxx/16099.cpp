#include <iostream>
using namespace std;

void solve(void) {
  long long lt, wt, le, we; cin >> lt >> wt >> le >> we;

  cout << (lt * wt > le * we ? "TelecomParisTech" : (lt * wt < le * we ? "Eurecom" : "Tie")) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}