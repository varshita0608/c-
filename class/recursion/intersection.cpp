//intersection of two arrays
#include <bits/stdc++.h>
using namespace std;
void intersectionOfArrays(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}
int main() {
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    int arr1[n];    
    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    cout << "Intersection of the two arrays: ";
    intersectionOfArrays(arr1, arr2, n, m);
    return 0;
}