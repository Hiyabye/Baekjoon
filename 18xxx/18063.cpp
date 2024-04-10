#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;

  int t = -c * (n-1);
  while (n--) {
    string s; cin >> s;
    t += (s[0] - '0') * 60 + (s[2] - '0') * 10 + (s[3] - '0');
  }
  cout << t / 36000 << t / 3600 % 10 << ':' << t % 3600 / 600 << t / 60 % 10 << ':' << t % 60 / 10 << t % 10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}