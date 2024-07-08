#include <iostream>
#include <random>
using namespace std;

void solve(void) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(1, 3);

  switch (dis(gen)) {
    case 1: cout << "Vaporeon"; break;
    case 2: cout << "Jolteon"; break;
    case 3: cout << "Flareon"; break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}