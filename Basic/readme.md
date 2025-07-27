# Object-Oriented Programming System (OOPS) Definition

Object-Oriented Programming System (OOPS) is a programming paradigm based on the concept of "objects", which can contain data in the form of fields (attributes or properties) and code in the form of procedures (methods). OOPS focuses on organizing software around data, or objects, rather than functions and logic. 
OOPS helps in making code more modular, reusable, and easier to maintain.

## What is a Class?
- A class is a blueprint or template for creating objects.
- It is a user-defined datatype.
- It defines the attributes (data) and methods (functions) that the objects created from the class will have.
- Classes help organize code by grouping related data and behavior together.
- Using classes makes code easier to reuse and maintain.


## What are Getter and Setter Methods?
- **Getter methods** are used to access (read) the value of private attributes of a class from outside the class.
- **Setter methods** are used to modify (write) the value of private attributes of a class from outside the class.
- They help implement encapsulation by controlling how attributes are accessed and updated.
- Using getters and setters allows validation or logic to be added when getting or setting a value.


## What is an Object?
- An object is an instance of a class.
- It represents a real-world entity with state (attributes) and behavior (methods).
- Objects are created based on the structure defined by a class.
- Each object has its own copy of the attributes defined in the class.


## Static and Dynamic Memory Allocation in C++ OOPS

- **Static Memory Allocation**: Memory for objects is allocated at compile time. The size and type of memory must be known in advance. Static allocation is done using normal variable declarations or arrays.
    - Example:
        ```cpp
        MyClass obj; // statically allocated object
        ```

- **Dynamic Memory Allocation**: Memory for objects is allocated at runtime using operators like `new` and `delete`. This allows creating objects whose size or number may not be known until the program runs.
    - Example:
        ```cpp
        MyClass* objPtr = new MyClass(); // dynamically allocated object
        delete objPtr; // frees the memory
        ```

- Dynamic allocation is useful for creating objects on the heap, managing memory efficiently, and building data structures like linked lists and trees.
- Always free dynamically allocated memory using `delete` to avoid memory leaks.


Note--  size of empty class is 1 
