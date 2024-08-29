#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  for (char &c : s) {
    c = c - 'A' + 'a';
  }

  if (s.find("sss") != string::npos) {
    int a = s.find_first_of("ss");
    int b = s.find_last_of("ss");
    cout << s << "\n";
    cout << s.substr(0, a) << 'B' << s.substr(a+2) << "\n";
    cout << s.substr(0, b-1) + 'B' + s.substr(b+1);
  } else if (s.find("ss") != string::npos) {
    int a = s.find("ss");
    cout << s << "\n";
    cout << s.substr(0, a) << 'B' << s.substr(a+2);
  } else {
    cout << s;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}