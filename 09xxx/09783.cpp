#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  for (int i=0; i<s.length(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') cout << setw(2) << setfill('0') << s[i]-'a'+1;
    else if (s[i] >= 'A' && s[i] <= 'Z') cout << s[i]-'A'+27;
    else if (s[i] >= '0' && s[i] <= '9') cout << "#" << s[i];
    else cout << s[i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}