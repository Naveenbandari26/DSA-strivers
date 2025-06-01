#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Selection Sort Algorithm
    cout << "worst case: O(n^2)";
    for (int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int t=arr[i];
            arr[i]=arr[min];
            arr[min]=t;
        }
    }
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}