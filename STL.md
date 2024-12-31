# C++ STL and important concepts of STL for problem Solving

## VECTORS
-Declaration
- One thing to note is to understand the concept of pass by reference (&) and pass by value. It is a practice with vectors, that in functions which need vectors as inputs, the vectors are always passed by reference, as copying them with O(n) time cpomplexity is quite expensive. 
vector of int-  
### ``` vector<data-type> vector_name  ```
if you add the size of the vector when declaring, and use pushback(1) then 1 would be added at the end after all the elements space defined above. 
- eg: ```vecotr<int>v(10) then the 11th value would be 1 leaving space of 10 elements, as the name of the function also has _back ```

- to copy: 
vector<int> v1;
vector<int> v2;
### ```vector<int> v1 =v2;```

-Taking inputs with iterators: 

### Nesting in Vectors: 





