#include<bits/stdc++.h>

using namespace std;


void insertionSort(int arr[] , int n) {
    
    for(int i = 0; i <= n - 1; i++) {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}


int main() {

    int n;
    cout << "enter number of elements : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "enter elements : ";
        cin >> arr[i];
    }
    
    insertionSort(arr , n);
    cout << "sorted array : "<< endl; 
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;

}
