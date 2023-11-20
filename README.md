The printf family of functions in the C programming language are a set of functions that take a format string as input among a variable sized list of other values and produce as output a string that corresponds to the format specifier and given input values. The string is written in a simple template language: characters are usually copied literally into the function's output, but format specifiers, which start with a % character, indicate the location and method to translate a piece of data (such as a number) to characters. The design has been copied to expose similar functionality in other programming languages.

"printf" is the name of one of the main C output functions, and stands for "print formatted". printf format strings are complementary to scanf format strings, which provide formatted input (lexing aka. parsing). In both cases these provide simple functionality and fixed format compared to more sophisticated and flexible template engines or lexers/parsers, but are sufficient for many purposes.

Many languages other than C copy the printf format string syntax closely or exactly in their own I/O functions.

Mismatches between the format specifiers and type of the data can cause crashes and other vulnerabilities. The format string itself is very often a string literal, which allows static analysis of the function call. However, it can also be the value of a variable, which allows for dynamic formatting but also a security vulnerability known as an uncontrolled format string exploit. 
