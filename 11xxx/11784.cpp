#include <iostream>
#include <string>
using namespace std;

void solve(const string &s) {
  for (int i=0; i<s.length(); i+=2) {
    cout << (char)stoi(s.substr(i, 2), nullptr, 16);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (cin >> s) solve(s);
  return 0;
}