#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  while (s.length() % 3 != 0) s = '0' + s;
  for (int i=0; i<s.length(); i+=3) {
    cout << (s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0');
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}