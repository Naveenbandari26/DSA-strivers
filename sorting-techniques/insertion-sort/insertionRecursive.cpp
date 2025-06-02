#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &arr,int i,int n){
   if(i==n) return;
   int j=i;
   while (j>0 && arr[j-1]>arr[j]){
     swap(arr[j-1],arr[j]);
     j--;
    }
    InsertionSort(arr,i+1,n);
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //recursive insertion 
    InsertionSort(arr,0,n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}