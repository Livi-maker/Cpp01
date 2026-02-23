# Cpp01 - C++ Memory Management & Fundamentals

A series of C++ exercises focusing on memory allocation, pointers, references, and object-oriented programming concepts from the 42 school curriculum.

## Table of Contents

- [Exercise 00 - Zombie Creation](#exercise-00---zombie-creation)
- [Exercise 01 - Zombie Horde](#exercise-01---zombie-horde)
- [Exercise 02 - This & References](#exercise-02---this--references)
- [Exercise 03 - Weapons & Humans](#exercise-03---weapons--humans)
- [Exercise 04 - File Replacement](#exercise-04---file-replacement)
- [Exercise 05 - Harl 2.0](#exercise-05---harl-20)
- [Exercise 06 - Harl Filter](#exercise-06---harl-filter)

## Exercise 00 - Zombie Creation

**Topics:** Pointers, Memory Allocation, Function Pointers, Stack vs Heap

A simple exercise demonstrating dynamic memory allocation with the `new` and `delete` operators.

### Description
Create a `Zombie` class that can:
- Be instantiated dynamically on the heap with `newZombie()`
- Be instantiated on the stack with `randomChump()`
- Announce itself with a message

### Files
- `Zombie.hpp` - Class definition
- `Zombie.cpp` - Class implementation
- `newZombie.cpp` - Function to create zombies on the heap
- `randomChump.cpp` - Function to create zombies on the stack
- `main.cpp` - Test program

### Key Concepts
- **Heap vs Stack:** Understanding memory allocation differences
- **Pointers:** Managing dynamically allocated objects
- **Constructors & Destructors:** Proper object initialization and cleanup

---

## Exercise 01 - Zombie Horde

**Topics:** Dynamic Arrays, Memory Allocation for Arrays, Default Constructors

Building on Exercise 00, this exercise involves creating multiple zombies efficiently.

### Description
Implement a `zombieHorde()` function that:
- Allocates an array of `Zombie` objects on the heap
- Initializes each zombie with a given name
- Returns a pointer to the allocated array

### Files
- `Zombie.hpp` - Enhanced class definition with default constructor
- `Zombie.cpp` - Class implementation
- `zombieHorde.cpp` - Function to create arrays of zombies
- `main.cpp` - Test program

### Key Concepts
- **Default Constructors:** Objects created without explicit parameters
- **Array Allocation:** `new Type[size]` syntax
- **Memory Management:** Managing multiple objects efficiently

---

## Exercise 02 - This & References

**Topics:** References, The This Pointer, Pointers to Pointers

Understanding references and how the `this` pointer works in C++.

### Description
Explore the differences and usage of:
- References vs Pointers
- The implicit `this` pointer in member functions
- Pointer to pointer operations

### Files
- `main.cpp` - Demonstration of references and pointers

### Key Concepts
- **References:** Non-nullable aliases to existing variables
- **The This Pointer:** Implicit pointer to the current object
- **Pointer Dereferencing:** Accessing values through pointers

---

## Exercise 03 - Weapons & Humans

**Topics:** Composition, Const References, Object Relationships

Understanding object composition and reference semantics.

### Description
Create a system where:
- A `Weapon` class manages weapon types and can modify them
- `HumanA` holds a reference to a weapon (non-owning)
- `HumanB` holds a pointer to a weapon (non-owning)
- Both humans can attack with their weapons

### Files
- `Weapon.hpp/.cpp` - Weapon class definition and implementation
- `HumanA.hpp/.cpp` - Human class using references
- `HumanB.hpp/.cpp` - Human class using pointers
- `main.cpp` - Test program demonstrating both approaches

### Key Concepts
- **Composition:** Objects containing other objects
- **References vs Pointers:** Choosing the right tool for non-owning references
- **Const Correctness:** Protecting data with const references

---

## Exercise 04 - File Replacement

**Topics:** File I/O, String Manipulation, Stream Operations

Simple string replacement in a file.

### Description
Create a program that:
- Reads a file
- Replaces all occurrences of one string with another
- Writes the result to a new file

### Files
- `main.cpp` - File replacement implementation
- `text.txt` - Sample text file for testing

### Key Concepts
- **File Streams:** Reading and writing files
- **String Operations:** Finding and replacing substrings
- **Error Handling:** Handling file I/O errors gracefully

---

## Exercise 05 - Harl 2.0

**Topics:** Function Pointers, Method Pointers, Member Functions

Demonstrating function pointers as a form of design pattern.

### Description
A complaining filter (`Harl` class) that:
- Categorizes complaints by severity level (DEBUG, INFO, WARNING, ERROR)
- Uses function pointers to map levels to appropriate handler methods
- Can process complaints and output relevant messages

### Files
- `Harl.hpp/.cpp` - Harl class with member function pointers
- `main.cpp` - Test program demonstrating the complaint filter

### Key Concepts
- **Function Pointers:** Storing and calling functions dynamically
- **Member Function Pointers:** Pointers to class methods
- **Switch-like Behavior:** Using arrays of function pointers for dispatch

---

## Exercise 06 - Harl Filter

**Topics:** Switch Statements, String Matching, Output Control

Extending Harl with filtering capabilities.

### Description
Filter and display complaints based on severity:
- Display only complaints at a certain level and above
- Ignore complaints below the threshold
- Use a switch statement for level filtering

### Files
- `Harl.hpp/.cpp` - Harl class with filter capabilities
- `main.cpp` - Test program with filter demonstration

### Key Concepts
- **Switch Statements:** Cleaner control flow for multiple cases
- **String Comparison:** Matching complaint levels
- **Filtering Logic:** Selective output based on criteria

---

## Key Learning Outcomes

By completing these exercises, you will understand:

1. **Memory Management:** The difference between stack and heap allocation
2. **Pointers & References:** When and how to use each
3. **Object-Oriented Design:** Composition, inheritance patterns
4. **Const Correctness:** Writing safer code with const qualifiers
5. **Function Pointers:** Advanced control flow techniques
6. **File I/O:** Reading and writing files in C++
7. **Best Practices:** Proper resource management and cleanup

## Notes

- All code follows 42 school coding standards
- Constructors and destructors are properly implemented
- Memory is properly allocated and deallocated
- References and pointers are used appropriately for their use cases