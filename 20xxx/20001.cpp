#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  int ans = 0;
  getline(cin, s);
  while (s != "고무오리 디버깅 끝") {
    ans += s == "문제" ? 1 : (ans ? -1 : 2);
    getline(cin, s);
  }
  cout << (ans ? "힝구" : "고무오리야 사랑해");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}