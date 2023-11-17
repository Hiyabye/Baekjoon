#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void solve(void) {
  string s; cin >> s;
  string p; cin >> p;

  cout << (strstr(s.c_str(), p.c_str()) ? 1 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}