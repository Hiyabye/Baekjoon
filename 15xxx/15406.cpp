#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);

  int ans = 0;
  while (s != "TOTAL") {
    int a, b; cin >> a >> b;
    ans += a * b;
    cin.ignore(); getline(cin, s);
  }
  int tot; cin >> tot;

  return ans >= tot;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "PAY" : "PROTEST");
  return 0;
}