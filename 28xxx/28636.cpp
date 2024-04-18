#include <iostream>
#include <string>
using namespace std;

typedef struct Time {
  int h, m, s;
} Time;

void solve(void) {
  int n; cin >> n;

  Time ans = {0, 0, 0};
  while (n--) {
    string str; cin >> str;
    ans.m += stoi(str.substr(0, 2));
    ans.s += stoi(str.substr(3, 2));
  }

  ans.m += ans.s / 60;
  ans.s %= 60;
  ans.h += ans.m / 60;
  ans.m %= 60;

  cout << (ans.h < 10 ? "0" : "") << ans.h << ":"
       << (ans.m < 10 ? "0" : "") << ans.m << ":"
       << (ans.s < 10 ? "0" : "") << ans.s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}