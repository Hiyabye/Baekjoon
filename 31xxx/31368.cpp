#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n; cin.ignore();

  int a = 0, b = 0, c = 0;
  while (n--) {
    string s; getline(cin, s);
    if (s.find("blue") != string::npos && s.find("black") != string::npos) a++;
    else if (s.find("white") != string::npos && s.find("gold") != string::npos) b++;
    else c++;
  }

  cout << fixed << setprecision(6) << (double)a / (a + b + c) * 100 << "\n";
  cout << fixed << setprecision(6) << (double)b / (a + b + c) * 100 << "\n";
  cout << fixed << setprecision(6) << (double)c / (a + b + c) * 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}