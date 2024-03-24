#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  cin.ignore();

  int ans = 0;
  while (n--) {
    string s; getline(cin, s);
    for (char c : s) {
      ans += (c == 't' || c == 'T') - (c == 's' || c == 'S');
    }
  }
  cout << (ans > 0 ? "English" : "French");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}