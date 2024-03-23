#include <iostream>
#include <string>
using namespace std;

string hex2bin(const char &c) {
  switch (c) {
    case '0': return "0000";
    case '1': return "0001";
    case '2': return "0010";
    case '3': return "0011";
    case '4': return "0100";
    case '5': return "0101";
    case '6': return "0110";
    case '7': return "0111";
    case '8': return "1000";
    case '9': return "1001";
    case 'A': return "1010";
    case 'B': return "1011";
    case 'C': return "1100";
    case 'D': return "1101";
    case 'E': return "1110";
    case 'F': return "1111";
  }
}

string bin2oct(string &s) {
  string ret = "";
  while (s.length() % 3) s = "0" + s;
  for (int i=0; i<s.length(); i+=3) {
    ret += to_string(4*(s[i]-'0') + 2*(s[i+1]-'0') + (s[i+2]-'0'));
  }
  return ret;
}

void solve(void) {
  string s; cin >> s;
  if (s == "0") { cout << "0"; return; }

  string bin = "";
  for (char c : s) bin += hex2bin(c);

  string ans = bin2oct(bin);
  while (ans.size() && ans[0] == '0') ans = ans.substr(1);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}