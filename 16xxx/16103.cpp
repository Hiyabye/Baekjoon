#include <iostream>
#include <string>
using namespace std;

inline string switcheroo(long long n, const string &s) {
  return s.substr(0, n/4) + s.substr(n*3/4) + s.substr(n/4, n/2);
}

void solve(void) {
  long long n, k; cin >> n >> k;
  string s; cin >> s;

  for (int i=0; i<k%3; i++) s = switcheroo(n, s);
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}