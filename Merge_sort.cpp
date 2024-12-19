 //Created by Aditya Ojha on 07/06/23.
//Stay focused, stay consistent
void merge(int arr[], int s, int e){
    
     
    int mid = s+ (e-s)/2;
    
// the length of the two arrays that we are going to divide the main array in
    
    int m = mid-s+1;
    int n = e-mid;
    
    int* arr1 = new int[m];
    int* arr2 = new int[n];
    
    int x=s;
    //copying values to arr1 and arr2 from the main array arr
    for (int i = 0; i< m; i++){
        arr1[i] = arr[x++];
    }
    for (int j = 0; j< n; j++){
        arr2[j] = arr[x++];
    }
    
    int i = 0; // for arr1
    int j = 0; // for arr2
    int k = s; // because this is for the main array
    
    while(i<m && j<n){
        if (arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        
        else {
            arr[k] = arr2[j];
            k++;
            j++;
        }
        
    }
        
        while(i<m){
            arr[k] = arr1[i];
            k++;
            i++;
        }
        
        while(j<n){
            arr[k] = arr2[j];
            k++;
            j++;
        }
        
    delete[] arr1;
    delete[] arr2;
    
}
void divide(int arr[], int s, int e){
    
        if(s >= e)
           return;
    int mid = s + (e-s)/2;
        divide(arr, s,mid);
        divide(arr,mid+1, e);
        merge(arr,s,e);
    
}

#include <iostream>
using namespace std;

int main( ) {
    
    int n=8;
    int arr[8] = {20,49,78,98,65,89,6,12};
    
    divide(arr,0,n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
