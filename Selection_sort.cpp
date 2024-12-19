//
//  main.cpp
//  Selection_sort
//
//  Created by Aditya Ojha on 01/06/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n = 5;
    int arr[5] = {4,1,3,2,5};
    for(int i = 0; i <= n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            
            if(min > arr[j])
            min = arr[j];
            }
        
        swap(arr[i], min);
        cout<<"the sorted values are the following "<<arr[i]+1<<endl;
    }
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
