#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;

  int ans = 0;
  for (int i=1; i<=a; i++) {
    ans += (10-i >= 1 && 10-i <= b);
  }
  cout << "There " << (ans == 1 ? "is 1 way" : "are " + to_string(ans) + " ways") << " to get the sum 10.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}