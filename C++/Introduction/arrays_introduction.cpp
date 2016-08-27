/**
 * Author: Onel Harrison
 * HackerRank: C++ > Introduction > Array Introduction
 */

#include<iostream>

using namespace std;

int main() {
  int n = 0;
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for(int i = n - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
