#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  if (s == "Give you up" ||
      s == "Let you down" ||
      s == "Run around and desert you" ||
      s == "Make you cry" ||
      s == "Say goodbye" ||
      s == "Tell a lie and hurt you") cout << "NO";
  else cout << "YES";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}