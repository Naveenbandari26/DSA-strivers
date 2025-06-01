#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr ,int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(i<high && arr[i]<=pivot){
            i++;
        }
        while(j>=low+1 && arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;

}

void quickSort(vector<int> &arr , int low,int high){
    if (low<high){
        int ind=partition(arr, low, high);
        quickSort(arr, low, ind - 1);
        quickSort(arr, ind + 1, high);
    }
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // QuickSort function
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}