#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high)
{
        vector<int> temp;
        int left=low, right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        //if there are remaining elements in the left half
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

        //if there are remaining elements in the right half
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }

        //copy the sorted elements back to the original array
        for(int i=low; i<=high; i++){
            arr[i] = temp[i-low];
        }

}


void mergeSort(vector<int>& arr,int low, int high)
{
    if(low>=high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}


int main(){
    int n;
    cout<< "Enter the number of elements:";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}