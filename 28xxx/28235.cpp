#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  if (s == "SONGDO") cout << "HIGHSCHOOL";
  else if (s == "CODE") cout << "MASTER";
  else if (s == "2023") cout << "0611";
  else if (s == "ALGORITHM") cout << "CONTEST";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}