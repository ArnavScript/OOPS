## Access Modifiers in Inheritance

Access modifiers determine the visibility of class members (fields and methods) to other classes, including subclasses. The three main access modifiers in most object-oriented languages are:

| Modifier   | Accessible within same class| Acce. in subclass| Accessible outside package |
| `public`   | Yes                         | Yes              | Yes                        |
| `protected`| Yes                         | Yes              | No (unless subclass)       |
| `private`  | Yes                         | No               | No                         |

- **public**: Members are accessible everywhere.
- **protected**: Members are accessible within the same class and subclasses, but not outside the package/module (unless accessed via subclass).
- **private**: Members are only accessible within the same class.

NOte - private>>protected>>public

## Inheritance Definition

Inheritance is an object-oriented programming concept where a class (called the child or subclass) acquires the properties and behaviors (methods and fields) of another class (called the parent or superclass). This allows for code reuse and the creation of hierarchical relationships between classes.

## Types of Inheritance in C++

In C++, inheritance can be categorized into several types based on how classes derive from one another:

1. **Single Inheritance**  
    A subclass inherits from one base class only.  
    *Example:*  
    `class B : public A { };`

2. **Multiple Inheritance**  
    A subclass inherits from more than one base class.  
    *Example:*  
    `class C : public A, public B { };`

3. **Multilevel Inheritance**  
    A class is derived from another derived class, forming a chain.  
    *Example:*  
    `class B : public A { }; class C : public B { };`

4. **Hierarchical Inheritance**  
    Multiple subclasses inherit from a single base class.  
    *Example:*  
    `class B : public A { }; class C : public A { };`

5. **Hybrid (Virtual) Inheritance**  
    A combination of two or more types of inheritance, often used to resolve ambiguity in multiple inheritance using virtual base classes.  
    *Example:*  
    `class A { }; class B : virtual public A { }; class C : virtual public A { }; class D : public B, public C { };`

Each type of inheritance serves different design needs and helps in achieving code reusability and logical hierarchy in object-oriented programming.