#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);

  int a = s.find_first_of('U');
  if (a == string::npos) return false;
  int b = s.substr(a).find_first_of('C');
  if (b == string::npos) return false;
  int c = s.substr(a + b).find_first_of('P');
  if (c == string::npos) return false;
  int d = s.substr(a + b + c).find_first_of('C');
  return d != string::npos;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "I love UCPC" : "I hate UCPC");
  return 0;
}