#include <cctype>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a = "aiyeou", b = "bkxznhdcwgpvjqtsrlmf", s;
  while (getline(cin, s)) {
    for (char c : s) {
      if (!isalpha(c)) cout << c;
      else if (a.find(tolower(c)) != string::npos) {
        int idx = a.find(tolower(c));
        cout << (islower(c) ? a[(idx+3)%6] : (char)toupper(a[(idx+3)%6]));
      } else {
        int idx = b.find(tolower(c));
        cout << (islower(c) ? b[(idx+10)%20] : (char)toupper(b[(idx+10)%20]));
      }
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}