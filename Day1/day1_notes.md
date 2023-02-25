# Introduction
* **C++** is a powerful object-oriented programming language that is widely used in the software industry.

* It was first developed in the 1980s as an extension of the C programming language, and has since become one of the most popular programming languages in the world.

* **C++** is used in a variety of applications, including **software development**, **gaming**, **robotics**, and **scientific computing**.

* One of the main advantages of C++ is its **efficiency** and **speed**, which makes it ideal for developing applications that require high performance.

* **C++** is also known for its **flexibility** and ability to work with **low-level hardware**, which is essential for developing applications that interact with hardware devices.

* Another advantage of C++ is its ability to support multiple programming paradigms, including **object-oriented** programming, **procedural** programming, and **generic** programming.

* C++ is used extensively in the development of operating systems, such as Windows, macOS, and Linux.

* It is also used in the development of software applications, including web browsers, database management systems, and gaming engines.

* C++ is an essential language for game development, and is used to create some of the most popular games on the market.

* Overall, C++ is a versatile and powerful programming language that is used in a wide range of industries and applications, and is a valuable skill for any aspiring software developer to learn.

# Intro to Compiler, Linker and Libraries
[Click This](https://www.learncpp.com/cpp-tutorial/introduction-to-the-compiler-linker-and-libraries/)

# Difference Between Compiler and Interpreter

* TLDR;  
> In summary, the main difference between a compiler and an interpreter is that a compiler translates an entire program into machine code at once, while an interpreter translates each line of code as it is being executed. Compilers produce standalone executables that can be run multiple times, while interpreters are typically used for scripting languages and other applications where flexibility and ease of use are more important than speed and efficiency.

* **`A compiler `** and **`an interpreter`** are both software programs used to translate code written by programmers into machine-readable language that can be executed by a computer. The main difference between the two is in how they accomplish this task.

* **`A compiler`** translates an entire program written in a high-level language like C++, Java into machine code in a single step, producing an executable file that can be run directly by the operating system. The compiler scans the entire code, checks for errors, and then converts the entire code into machine code, which can be executed by the computer. Once the code is compiled, it can be executed multiple times without the need for recompilation, making it faster and more efficient in the long run.

* **`An interpreter`**, on the other hand, translates the program line by line, as the program is being executed. This means that each line of the code is read and executed one at a time, with the interpreter checking for syntax errors and executing each line as it goes. Interpreters are slower than compilers because they have to interpret each line of code at runtime.

# First Program in C++
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!\n";
    return 0;
}

```
Let's break down the code line by line:

1) 
    ```cpp
    #include <iostream>
    ```   
    This line includes the iostream library, which is required to use input/output streams in C++.  

2) 
    ```cpp
    int main() {
    ```   
     This line defines the main function of the program. Every C++ program must have a main function, which is the entry point of the program.  

3) 
    ```cpp
    std::cout << "Hello, World!\n";
    ```  
     This line outputs the message "Hello, World!" to the console using the `std::cout` object. The `<<` operator is used to insert the message into the **output stream**.

4)
    ```cpp
    return 0;
    ```
    This line exits the main function and returns a value of 0 to the operating system. This value indicates that the program executed successfully.