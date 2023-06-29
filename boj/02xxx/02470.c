#include <stdio.h>

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// mode 0: ascending, mode 1: descending
int partition(int arr[], int l, int r, int mode) {
  int pivot = arr[r];
  int i = l-1;

  for (int j=l; j<=r-1; j++) {
    if (mode == 0) {
      if (arr[j] < pivot) {
        i++;
        swap(&arr[i], &arr[j]);
      }
    } else {
      if (arr[j] > pivot) {
        i++;
        swap(&arr[i], &arr[j]);
      }
    }
  }
  swap(&arr[i+1], &arr[r]);
  return i+1;
}

void quickSort(int arr[], int l, int r, int mode) {
  if (l < r) {
    int pivot = partition(arr, l, r, mode);
    quickSort(arr, l, pivot-1, mode);
    quickSort(arr, pivot+1, r, mode);
  }
}

int abs(int a) {
  return a < 0 ? -a : a;
}

int main(void) {
  int n, buffer, pos_cnt = 0, neg_cnt = 0;
  int pos[100000], neg[100000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &buffer);
    if (buffer >= 0) pos[pos_cnt++] = buffer;
    else             neg[neg_cnt++] = buffer;
  }

  quickSort(pos, 0, pos_cnt-1, 0);
  quickSort(neg, 0, neg_cnt-1, 1);

  if (pos_cnt == 0) {
    printf("%d %d", neg[0], neg[1]);
    return 0;
  }
  if (neg_cnt == 0) {
    printf("%d %d", pos[0], pos[1]);
    return 0;
  }

  int min = abs(pos[0] + neg[0]), min_pos = pos[0], min_neg = neg[0];
  int pos_idx = 0, neg_idx = 0;
  while (pos_idx < pos_cnt && neg_idx < neg_cnt) {
    int sum = pos[pos_idx] + neg[neg_idx];
    if (abs(sum) < min || (abs(sum) == min && (neg[neg_idx] < min_neg || pos[pos_idx] > min_pos))) {
      min = abs(sum);
      min_pos = pos[pos_idx];
      min_neg = neg[neg_idx];
    }
    if (sum < 0)      pos_idx++;
    else if (sum > 0) neg_idx++;
    else              break;
  }

  printf("%d %d", min_neg, min_pos);
  return 0;
}