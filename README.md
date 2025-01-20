# Undefined Behavior in C++: Modifying a std::vector during iteration

This repository demonstrates a common error in C++ involving modifying a `std::vector` while iterating through it using an index-based loop. This can lead to undefined behavior and unpredictable results.

## The Bug

The `bug.cpp` file contains code that attempts to remove even numbers from a vector while iterating. This approach is flawed because modifying the vector's size during iteration invalidates the loop index, leading to undefined behavior.  The program might crash, produce incorrect output, or behave erratically.

## The Solution

The `bugSolution.cpp` file provides a corrected version of the code. It utilizes iterators and the `std::remove_if` algorithm for a safe and efficient way to remove elements from a vector. This approach avoids modifying the vector while iterating, preventing the undefined behavior.

## How to Compile and Run

1.  Clone this repository.
2. Compile the code using a C++ compiler (like g++):
    ```bash
    g++ bug.cpp -o bug
    g++ bugSolution.cpp -o bugSolution
    ```
3. Run the executables:
    ```bash
    ./bug
    ./bugSolution
    ```

Compare the output of both programs to understand the difference and the importance of using correct iteration techniques when modifying vectors in C++.