#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int sum = 0, cnt = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] != '1') sum += s[i] - '0';
    else if (i+1 < s.length() && s[i+1] == '0') sum += 10, i++;
    else sum += 1;
    cnt++;
  }
  cout << fixed << setprecision(2) << (double)sum / cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}