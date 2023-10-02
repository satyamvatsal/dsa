#include <cmath>
#include <iostream>
using namespace std;
int binser(int arr[], int n, int k) {
  int start = 0;
  int end = n - 1;
  int mid;
  while (start <= end) {
    mid = floor((start + end) / 2);
    if (arr[mid] > k)
      end = mid - 1;
    else if (arr[mid] < k)
      start = mid + 1;
    if (arr[mid] == k)
      return mid + 1;
    mid = floor((start + end) / 2);
  }
  return 0;
}
int main() {

  int n, k;
  cin >> n >> k;
  int arr[10];
  int ans = binser(arr, n, k);
  if (ans) {
    cout << "Found at " << ans - 1 << endl;
  } else {
    cout << "Not Found" << endl;
  }
  return 0;
}
