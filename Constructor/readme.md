

<!-- Constructor -->
--> It is a special function that is invoked automatically at the time of object creation 
--> Name of the constructor shoub+ld be same as the class name
--> It doesnot have return type
--> It is ued to initialzie the object


## Types of Constructors in C++

1. **Default Constructor**
    - A constructor with no parameters.
    - If no constructor is defined, the compiler provides a default one.
    ```cpp
    class Example {
    public:
         Example() {
              // Default constructor
         }
    };
    ```

2. **Parameterized Constructor**
    - A constructor that takes arguments to initialize the object with specific values.
    ```cpp
    class Example {
    public:
         int value;
         Example(int v) {
              value = v;
         }
    };
    ```

3. **Copy Constructor**
    - A constructor that initializes an object using another object of the same class.
    ```cpp
    class Example {
    public:
         int value;
         Example(Example &obj) {
              value = obj.value;
         }
    };
    ```

## Key Points
- Constructors can be overloaded.
- They are called only once when the object is created.
- If you define any constructor, the compiler does not provide a default constructor.
- Constructors can be used to allocate resources (like memory) when an object is created.


## Destructor in C++

- It is an instance member function that is invoked automatically whenever an object is going to be destroyed.
- It is the last function that is going to be called before an object is destroyed.   
- The name of the destructor is the same as the class name, preceded by a tilde `~`.
- It does not take any parameters and does not return any value.
- Destructors are used to release resources (like memory) that were allocated to the object.

```cpp
class Example {
public:
    ~Example() {
        // Destructor code
    }
};
```

### Key Points
- Only one destructor is allowed per class (it cannot be overloaded).
- It is called automatically when the object is destroyed.
- Useful for cleanup operations such as releasing memory, closing files, etc.
- If you do not define a destructor, the compiler provides a default one.




Note- both constr and destru will be in public section.