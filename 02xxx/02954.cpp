#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);

  string t;
  while (ss >> t) {
    for (int i=0; i<t.length(); i++) {
      if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') i += 2;
      cout << t[i];
    }
    cout << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}