//Created by Aditya Ojha on 28/06/23.
//Stay focused, stay consistent

int quicksort(int arr[], int s, int e){
    
    int pivot = arr[s];
    int count_smaller_than_pivot=0;
    
    //creating a counter to count the elements smaller or equal to the pivot
    
    for(int i =s+1 ; i<=e; i++){
        if (arr[i] <= pivot){
            count_smaller_than_pivot++;
            
        }
    }
    
    //to place the pivot at it's correct posiition.
    
    int pivot_index= s+count_smaller_than_pivot;
    
    //swapping the values
    
    int temp = arr[s];
    arr[s] = arr[pivot_index];
    arr[pivot_index]= temp;
    
    int i=s;
    int j=e;
    
    while(i<pivot_index && j>pivot_index){
        
        while (arr[i] < pivot){
            i++;
        }
            
        while  (arr[j] > pivot){
            j--;
        }
        
 // if we find some value which is greater than pivot_index on the left or smaller than pivot_index in the right then we would need to swap
        if(i<pivot_index && j>pivot_index){
            int temp2= arr[i];
            arr[i] = arr[j];
            i++;
            arr[j] = temp2;
            j--;
            
        }
            
    }
    
    
    
    return pivot_index;
}

void recursive_func(int arr[], int s, int e){
    if (s>=e)
        return;
  int p = quicksort(arr,s,e);
    //sorting the left part
    recursive_func(arr,s ,p-1);
    //sorting the right part
    recursive_func(arr,p+1, e);
    
}

#include <iostream>
using namespace std;

int main() {
    
    int n=8;
    int arr[8]= {11,6,8,23,9,1,5,15};
    
    quicksort(arr, 0, n-1);
    recursive_func(arr,0,n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
