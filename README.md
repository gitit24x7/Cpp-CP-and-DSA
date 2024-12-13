# C++CP and DSA

- In C++ local variables are given priority over global variables if the local and global variable names are same, this is called variable shadowing
- To access a global variable in the shadowing mode, or to access the global variable in the local scope, we can use resolution operator (::)

## Variable scopes in C/C++ 
 - There are different types of scopes in C++: 
 - Firstly global and local
 - Then Instance Scope, static member scope and Namespace scope
 - Instance Scope (OOPS):  can be accessed using the class name without creating the instance.
 - Static Member scope: Use the static keyword before any variable declaration,  These variables are shared across all instances of a class and can be accessed using the class name without creating the instance
 - NameSpace Scope:These variables can be accessed using namespace name and scope resolution operator.
## For better understanding read this article: https://www.geeksforgeeks.org/scope-of-variables-in-c/
