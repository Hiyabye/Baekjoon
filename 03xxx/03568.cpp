#include <algorithm>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);
  string a; ss >> a;

  string b;
  while (ss >> b) {
    b.pop_back();
    smatch m;
    regex_match(b, m, regex("([a-zA-Z]+)([^a-zA-Z]*)"));

    string c = m[1], d = m[2];
    reverse(d.begin(), d.end());
    d = regex_replace(d, regex("\\]\\["), "[]");
    cout << a << d << " " << c << ";\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}