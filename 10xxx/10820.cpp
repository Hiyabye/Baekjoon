#include <iostream>
#include <string>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;

  getline(cin, s);
  while (!cin.eof()) {
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] >= 'a' && s[i] <= 'z') a++;
      else if (s[i] >= 'A' && s[i] <= 'Z') b++;
      else if (s[i] >= '0' && s[i] <= '9') c++;
      else if (s[i] == ' ') d++;
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    getline(cin, s);
  }
  return 0;
}