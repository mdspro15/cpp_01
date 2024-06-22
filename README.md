# cpp_01
We will be learning the basic of memory allocation in c++, references, pointers and rough look at switches.

# Ex00 BraiiiiiiinnnzzzZ
We will have to implement ```Zombie```class with a string private attribute **name** as well as member function **void annouce(void)** to announce themselves.<br>
Then implement two functions 
+ **Zombie*newZombie(std::string name)** <br>
  It creates a zombie, name it, and return it so you can use it outside of the function scope.
+ **void randomChump(std::string name)** <br>
  It creates a zombie name it, and zombie announces itself.<br>
We can learn about ```stack vs heap```, ```new``` and ```delete```. <br>

## Dynamic Memory Allocation
Dynamic allocated memory is allocated on **Heap**, and non-static and local variables get memory allocated on **Stack**. For normal variables like ```int a```,```char str[10]``` etc, memory is automatically allocated and deallocated. For dynamically allocated memory like ```int *p = new int[10]```, it is the programmer's responsibility to deallocate memory when no longer needed. If you didn't deallocate, it will cause **memory leak** <br>
+ C uses the ```malloc()```and ```calloc()``` function to allocate memory dynamically at run times and uses ```free()``` to free dynamically allocated memory.
+ C++ uses ```new``` operator to allocate memory and ```delete``` to free memory. <br>

**Syntax to use new operator**
```
pointer_valiable = new data_type;
```
Data type could be any built-in date type including array or any user-defined data type such as structure and class. <br>
**Example**
```
#include <iostream>
#include <memory>

int main()
{
  int *p = new int;

  *ptr = 10

  cout << "Address: " << ptr << endl;
  cout << "Value: " << *ptr;

  return 0;
}
```

**Output**
```
Address: 0x162bc20
Value: 10
```
Use the stack when your variable will not be used after the current function returns <br>
Use the heap when the data in the variable is needed beyond the lifetime of the current function.
