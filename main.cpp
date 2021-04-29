/*
* Title: Recursive Search
* Abstract: This program will use recursion to search for a specific number in a predefined array
* Author: Gabrielle Lake
* Email: glake@csumb.edu
* Estimate: 1 hour
* Date: 11/20/2020
*/

#include <iostream>
using namespace std;

int linearSearch(int value, int *a, int size);
int binarySearch(int search, int *a, int lowIndex, int highIndex);

int main() {
int size = 10;
int * a = new int[size] {4, 7, 6, 3, 9, 2, 0, 1, 8, 5};
cout << linearSearch(-50, a, size) << endl;

int * b = new int[size] {4, 7, 6, 3, 9, 2, 0, 1, 8, 5};
cout << linearSearch(6, b, size) << endl;

int * c = new int[size] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
cout << binarySearch(2, c, 0, size) << endl;
cout << binarySearch(-50, c, 0, size) << endl;
}

int linearSearch(int value, int *a, int size) {
  if (size < 0)
    return -1;
  if (a[size - 1] == value)
    return size - 1;
  return linearSearch(value, a, size - 1);
}

int binarySearch(int search, int *a, int lowIndex, int highIndex){
  int mid = (lowIndex + highIndex) / 2;
  if(lowIndex > highIndex){
    return -1;
  }
  if(a[mid] == search){
    return mid;
  }
  if(a[mid] > search){
    return binarySearch(search, a, lowIndex, mid - 1);
  }
  if(a[mid] < search){
    return binarySearch(search, a, mid + 1, highIndex);
  }
  return 0;
}