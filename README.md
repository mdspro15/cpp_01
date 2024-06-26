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
To understand what is stack and heap memory, this link in below helps me to understand what happened on memory behind when code is being executed. <br> 
https://courses.engr.illinois.edu/cs225/sp2022/resources/stack-heap/ <br>
According to this article, each running program has its own memory layout, separated from other programs. The layout consists of a lot of segments including <br>
+ **Stack** : stores local variables
+ **Heap** : dynamic memory for programmer to allocate
+ **Data** : stores global variables, separated into initialized and uninitialized
+ **Text** : stores the code being executed <br>

Each byte of memory has an "address". The addresses go from 0 all the way to the largest possible address. The text, data and heap segments have low address numbers while the stack memory has higher. <br>

## Stack
When a new local variables is declared, more stack memory is allocated for that function to store the variables. After the function returns, the stack memory of this function is **deallocated automatically** and all local variables become invalid. There is no guarantee that the value stored in those area will stay the same. <br>
This code in below is example of this case. It will cause error because In helper function, it returns a pointer to a stack variable which is invalid after this helper function returns.
```
Cube *Createcube()
{
  Cube c(20);
  return &c;
}

int main()
{
  Cube *c = Createcube();
  double r = c->getVolume();
  double v = c->getSurfaceArea();
  return 0;
}
```
## Heap
To solve this problem, we might return by copy, or put the value at somewhere more permanent than stack memory. Unlike stack memory, heap memory is allocated explicitly by programmers and it won’t be deallocated until it is explicitly freed. To allocate heap memory in C++, use the keyword ```new``` followed by the constructor of what you want to allocate.
```
Cube *Createcubeonheap()
{
  Cube *c = new Cube(20);
  return c;
}

int main()
{
  Cube *c = Createcubeonheap();
  double v = c->getvolume();
  delete c;
  c = nullptr;
  return (0);
}
```
## When to use heap or stack ?
Use the stack when your variable will not be used after the current function returns <br>
Use the heap when the data in the variable is needed beyond the lifetime of the current function.

## Dynamic Memory Allocation
For dynamically allocated memory like ```int *p = new int[10]```, it is the programmer's responsibility to deallocate memory when no longer needed. If you didn't deallocate, it will cause **memory leak** <br>
+ C uses the ```malloc()```and ```calloc()``` function to allocate memory dynamically at run times and uses ```free()``` to free dynamically allocated memory.
+ C++ uses ```new``` operator to allocate memory and ```delete``` to free memory. <br>

**Syntax to use new and delete operator** <br>
We have to assign nullptr to pointer variable after deleting.
```
pointer_valiable = new data_type;
delete pointer_variable
pointer_variable = nullptr;
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
  p = nullptr;
  return 0;
}
```

**Output**
```
Address: 0x162bc20
Value: 10
```
# Ex01 Moar brainz!
We will learn how to create class objects of array on heap. <br>
We will have to implement following function. <br>
```Zombie* zombieHorde(int N, std::string name);```

**Allocate a block of memory** <br>
A new operaor is also used to allocate a block of memory of type data type.
```
pointer_variable = new data_type[size];
delete[] pointer_variable;

int *p = new int[10];
delete[] p;
```
Dynamically allocates memory for 10 integers continuously of type int and returns a pointer to the first element of sequence which is p[0]. <br>

