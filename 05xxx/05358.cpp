#include <iostream>
#include <string>
using namespace std;

void solve(string s) {
  for (char c : s) {
    if (c == 'e' || c == 'E') cout << (char)(c-'E'+'I');
    else if (c == 'i' || c == 'I') cout << (char)(c-'I'+'E');
    else cout << c;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s)) solve(s);
  return 0;
}