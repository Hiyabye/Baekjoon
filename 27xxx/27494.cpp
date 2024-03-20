#include <iostream>
#include <string>
using namespace std;

bool check(string s) {
  if (s.find_first_of('2') == string::npos) return false;
  s = s.substr(s.find_first_of('2'));
  if (s.find_first_of('0') == string::npos) return false;
  s = s.substr(s.find_first_of('0'));
  if (s.find_first_of('2') == string::npos) return false;
  s = s.substr(s.find_first_of('2'));
  if (s.find_first_of('3') == string::npos) return false;
  s = s.substr(s.find_first_of('3'));

  return true;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (check(to_string(i))) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}