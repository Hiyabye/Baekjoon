#include <algorithm>
#include "sorting.h"
using namespace std;

void sort_questions(int N, int Q, int A[]) {
  for (int i=0; i<N; i++) A[i] = i+1;
  if (N == 2) {
    if (compare_difficulty(1, 2)) swap(A[0], A[1]);
  } else {
    sort(A, A+N, compare_difficulty);
  }
}