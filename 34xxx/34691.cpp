#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  while (s != "end") {
    if (s == "animal") cout << "Panthera tigris\n";
    else if (s == "tree") cout << "Pinus densiflora\n";
    else if (s == "flower") cout << "Forsythia koreana\n";
    cin >> s;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}