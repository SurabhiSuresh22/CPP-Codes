# CPP-Codes

## File handling
Files are used to store data permanently. A stream is an abstraction thatrepresent a device in which input and output operations are performed. A stream can represented as a source or destination of character of indefinite length. fstream can perform both input and output, ifstream is output.
![image](https://user-images.githubusercontent.com/63139488/149930355-994e2d4c-d649-4bc6-87de-ad1c49ac9ca4.png)

## Dynamic Memory Allocation
DMA allows you to set array size dynamically during run time rather than at compile time. This helps when the program doesnt know in advance about the number of items(variable values) to be stored

## Pointers
Pointer is a variable whose value is the address of another variable. You can save space, allows your to refer to same space in memory from multiple locations. This means that you can update memory on one locationa and change can be seem from another.

## Object Oriented Programming
Emphasis on data rather than procedure. Programs are divided into objects. Data structures are designed such that they characterize the objects.
Functions that operate on the data of an object are tied together in that same datastructure. Data is hidden and cannot be directly accessed. private and public keywords are named as access specifiers. Functions are usually present in public and variable in private. class instance declared in main can act on private data members as well as functions.<br><br>
![image](https://user-images.githubusercontent.com/63139488/151027275-2115d4c5-8e81-4f6c-ac98-65fa40bc361f.png)

## Constructors and Destructors
A constructor is a member funciton of a class that initialize objects of a class. It is automatically called when objects are created. It is different from normal function as constructor has same name as class itself, they dont have return type. If we do not specify a constuctor cpp compiler generates a default constructor for us - expects no parameter and has empty body. types - default(doesnt take any argument), parameterised(possible to pass arguments), copy constructors(member function which initialize object using another object of same class).<br><br>
Destructor is a member function which deletes an object. A destructor is called when functions or program ends or when block containing local varibale ends or delete operator is called. Destructors have same name as class preceded by tilde (~) destructors dont take any argument and dont return anything.
<br>There can be only one destructor in a class, no parameters and no return type. Id we do not write our own destructor compiler create a default one and it works fine unless we have dynamically allocated memory or pointer in class. When a class contains pointer to memory alloacated in class,we should write a destructor to release memory before the class instance is destroyed. This is done to avoid memory leak.

## Friend Functions
A friend function of a class is defined outside that class scope but it has the right to access all private and protected members of the class. Eventhough the prototypes for these function appear in class definition, friend are not member functions. When private data needs to be accessed directly without using any object of the class, this is used. Operator Overloading.
