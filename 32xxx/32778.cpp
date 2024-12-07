#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  
  if (s.find("(") == string::npos) {
    cout << s << "\n-";
  } else {
    string a = s.substr(0, s.find("("));
    string b = s.substr(s.find("(") + 1, s.find(")") - s.find("(") - 1);
    cout << a << "\n" << b;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}