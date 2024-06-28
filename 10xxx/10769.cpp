#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  int happy = 0, sad = 0, n = s.length();
  for (int i=0; i<n-2; i++) {
    if (s[i] == ':' && s[i+1] == '-') {
      if (s[i+2] == ')') happy++;
      else if (s[i+2] == '(') sad++;
    }
  }

  if (happy == 0 && sad == 0) cout << "none";
  else if (happy == sad) cout << "unsure";
  else if (happy > sad) cout << "happy";
  else cout << "sad";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}