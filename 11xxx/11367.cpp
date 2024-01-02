#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a;
  int b;
  cin >> a >> b;

  cout << a << " ";
  if (b >= 97)      cout << "A+";
  else if (b >= 90) cout << "A";
  else if (b >= 87) cout << "B+";
  else if (b >= 80) cout << "B";
  else if (b >= 77) cout << "C+";
  else if (b >= 70) cout << "C";
  else if (b >= 67) cout << "D+";
  else if (b >= 60) cout << "D";
  else              cout << "F";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}