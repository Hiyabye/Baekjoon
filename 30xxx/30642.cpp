#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  int k; cin >> k;

  k += (s == "annyong") ^ (k & 1);
  cout << (k > n ? k - 2 : k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}