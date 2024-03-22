#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int ans = 0;
  
  for (int i=0; i<9; i++) {
    string s; cin >> s;
    ans += (s == "Lion") ? 1 : -1;
  }
  cout << (ans > 0 ? "Lion" : "Tiger");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}