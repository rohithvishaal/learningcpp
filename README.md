# Learning C++
## [Day 1 Notes](./Day1/day1_notes.md)  
* Introduction to C++
* Intro to Compiler, Linker and Libraries
* Difference between Compiler and interpreter
* First Program in C++
## [Day 2 Notes](./Day2/day2_notes.md)  
* What are Comments
* How to write better comments
* Objects and Variables
* Types of Variables
* Types of Variable Assignments and Initialization
    * Copy Initialization
    * Direct Initialization
    * Direct Brace Initialization (Preffered)
    * Copy Brace Initialization
    * Value Initialization
    * Unused initialized variables and [[maybe_unused]]
## [Day 3 Notes](./Day3/day3_notes.md) 
* Introduction to iostream
* cin, cout, endl
* How buffer is utilized in cout
* endl vs "\n"
* How cin behaves on different types of input

## [Day 4 Notes](./Day4/day4_notes.md) 
* Unintialized Variables and Undefined Variables
* Undefined Behaviour
* Keywords
* Rules to Name an Identifier
* Best Practices on naming an Identifier
* Whitespace and basic formatting
* Best Practices on formatting code

## [Day 5 Notes](./Day5/day5_notes.md) 
* Introduction to Literals and Operators
    * Unary
    * Binary
    * Ternary
    * Nullary
* Chaining Operators
* Return Values and Side Effects
* Introduction to expressions
    * Statements
    * Expression Statements
    * Useless Expressions

## [Day 6 Notes](./Day6/day6_notes.md)
* Introduction to functions
    * user-defined functions
        * function header
        * function body
    * Calling functions more than once
    * Functions calling functions calling functions
    * Nested functions are not supported
* Function return values ( value-returning functions )
    * Return Values
    * cstlib for EXIT_SUCCESS and EXIT_FAILURE
    * Undefined behaviour in functions
    * Implicit return of main function
## [Day 7 Notes](./Day7/day7_notes.md)
* Void Functions
* Function Parameters and Arguments
* Intro to Local Scope

## [Day 8 Notes](./Day8/day8_notes.md)
* Using Functions Effectively
    * Organization
    * Reusability
    * Testing
    * Extensibility
    * Abstraction
* Forward declarations and definitions
    * Declarations vs Definitions
        * Function Prototype
        * Definition
        * Declaration
        * Pure Declaration
        * Initializer
* Programs with multiple code files
    * Linking multiple .cpp files
* Naming collisions and namespaces
    * global namespace
    * std namespace
    * :: scope resolution operator
    * using directive
* Intro to preprocesor
    * Translation Unit
    * Macros
    * #define
    * #include
    * Conditional Compilation 
        * #ifdef
        * #ifndef
        * #if 0
    * Scope of #define

## [Day 9 Notes](./Day9/day9_notes.md)
* Header files
    * Writing our own header files
    * Angled brackets vs double quotes
    * why iostream doesn't have .h?
    * Including header files from other directories
    * #include order of files
    * Header files best practices
* Header guards
    * The duplicate definition problem
    * #pragma once
* How to design your first programs
    1. Define your goal
    2. Define requirements
    3. Define your tools, targets and backup plans
    4. Break hard problems into easy problems
    5. Figure out the sequence of events

## [Day 10 Notes](./Day9/day10_notes.md)
* Introduction to Fundamental Data types
    * Bits, Bytes and Memory addressing
    * Data Types
        * float
        * double
        * long double
        * char
        * wchar_t
        * char8_t
        * char16_t
        * char32_t
        * short
        * int
        * long
        * long long
        * std::nullptr_t
        * void
    * _t suffix
* Void
* Object Sizes and the `sizeof` operator
    * Fundamental data type sizes
* Signed Integers
    * Signed Integer ranges
    * Integer Overflow
    * Integer Division
* Unsigned Integers and why to avoid them
    * Unsigned Integer range
    * Unsigned Integer Overflow
    * When to use unsigned numbers?
* Fixed-width integers and size_t
    * > \# - 8, 16, 32, 64
    * std::int#_t
    * std::uint#_t
    * Fast and least integers
        * std::int_least#_t
        * std::int_fast#_t
    * std::int8_t and std::uint8_t behave like chars instead of integers
    * Best practices
    * what is std::size_t - the return type of sizeof
* Introduction to scientific notation
    * Convert numbers to scientific notation
    * Precision and trailing zeros after the decimal
* Floating point numbers
    * Floating point range
    * Floating point precision
    * Rounding errors and comparision
    * NaN and Inf and Ind
* Boolean values
    * Boolean Variables
    * Printing boolean Values
        * std::boolalpha
    * Integer to Boolean Conversion
    * Inputting Boolean Values
    * Boolean Return Values
* Introduction to if Statements
    * if-else
    * Chaining if statements
    * Boolean return values and if statements
    * Non-boolean conditionals