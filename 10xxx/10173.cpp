#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool solve(void) {
  string s;
  getline(cin, s);
  if (s == "EOI") return false;

  for (int i=0; i<s.size()-3; i++) {
    if (toupper(s[i]) == 'N' && toupper(s[i+1]) == 'E' && toupper(s[i+2]) == 'M' && toupper(s[i+3]) == 'O') {
      cout << "Found\n";
      return true;
    }
  }
  cout << "Missing\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}