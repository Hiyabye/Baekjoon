#include <iostream>
#include <string>
using namespace std;

bool solve(int n) {
  string s; getline(cin, s);
  if (s == "Was it a cat I saw?") return false;

  for (int i=0; i<s.length(); i+=n) {
    cout << s[i];
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 2;
  while (solve(n++));
  return 0;
}