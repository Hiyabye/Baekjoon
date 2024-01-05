#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string name; int age, weight;
  cin >> name >> age >> weight;
  if (name == "#" && age == 0 && weight == 0) return false;

  cout << name << " " << (age > 17 || weight >= 80 ? "Senior" : "Junior") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}