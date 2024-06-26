# cpp_01
We will be learning the basic of memory allocation in c++, references, pointers and rough look at switches.

# Ex00 BraiiiiiiinnnzzzZ
We will have to implement ```Zombie```class with a string private attribute **name** as well as member function **void annouce(void)** to announce themselves.<br>
Then implement two functions 
+ **Zombie*newZombie(std::string name)** <br>
  It creates a zombie, name it, and return it so you can use it outside of the function scope. <br>
  ->It means create a function that returns a pointer to class and it should be allocated on heap (using ```new```) and will live until you call ```delete```on it. 
+ **void randomChump(std::string name)** <br>
  It creates a zombie name it, and zombie announces itself.<br>
We can learn about ```stack vs heap```, ```new``` and ```delete```. <br>

# Stack and Heap Memory 
Each running program has its own memory layout, separated from other programs. The layout consists of a lot of segments including <br>
+ **Stack** : stores local variables
+ **Heap** : dynamic memory for programmer to allocate
+ **Data** : stores global variables, separated into initialized and uninitialized
+ **Text** : stores the code being executed <br>
In order to pinpoint each memory location in program's memory, we assign each byte of memory an "address". The addresses go from 0 all the way to the largest possible address. The text, data and heap segments have low address numbers while the stack memory has higher.

## Stack
When a new local variables is declared, more stack memory is allocated for that function to store the variables. After the function returns, the stack memory of this function is **deallocated automatically** and all local variables become invalid.
## Dynamic Memory Allocation
Dynamic allocated memory is allocated on **Heap**, and non-static and local variables get memory allocated on **Stack**. For normal variables like ```int a```,```char str[10]``` etc, memory is automatically allocated and deallocated. For dynamically allocated memory like ```int *p = new int[10]```, it is the programmer's responsibility to deallocate memory when no longer needed. If you didn't deallocate, it will cause **memory leak** <br>
+ C uses the ```malloc()```and ```calloc()``` function to allocate memory dynamically at run times and uses ```free()``` to free dynamically allocated memory.
+ C++ uses ```new``` operator to allocate memory and ```delete``` to free memory. <br>

**Syntax to use new and delete operator**
```
pointer_valiable = new data_type;
delete pointer_variable
```
Data type could be any built-in date type including array or any user-defined data type such as structure and class. <br>
**Example**
```
#include <iostream>
#include <memory>

int main()
{
  int *p = new int;

  *p = 10 //assigning value using dereference operator

  cout << "Address: " << ptr << endl;
  cout << "Value: " << *ptr;
  delete p;
  return 0;
}
```

**Output**
```
Address: 0x162bc20
Value: 10
```

**Allocate a block of memory** <br>
A new operaor is also used to allocate a block of memory of type data type.
```
pointer_variable = new data_type[size];
delete[] pointer_variable;

int *p = new int[10];
delete[] p;
```
Dynamically allocates memory for 10 integers continuously of type int and returns a pointer to the first element of sequence which is p[0]. <br>

**Heap and Stack** <br>
Use the stack when your variable will not be used after the current function returns <br>
Use the heap when the data in the variable is needed beyond the lifetime of the current function.
