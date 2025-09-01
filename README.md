Caesar Cipher
This project is part of the problem set for Week 2 (Arrays) of Harvard University's CS50 course.

It is a C program that implements the Caesar Cipher, a classic encryption method used by Julius Caesar to send secret messages. The program allows the user to encrypt a message (plaintext) using a numeric key provided via a command-line argument, transforming it into an encrypted text (ciphertext).

Features
Rotational Encryption: Rotates each letter of the text by k positions in the alphabet.

Command-Line Key: The encryption key (k) is provided as an argument when the program is executed.

Input Validation: The program validates the key to ensure it is a single argument and contains only numeric digits.

Case Preservation: Uppercase letters remain uppercase, and lowercase letters remain lowercase after encryption.

Non-Alphabetic Character Handling: Spaces, numbers, commas, and other symbols are left unchanged.

How to Compile
This program uses the cs50.h library. To compile, you can use the CS50 development environment or have the library installed.

Use the following command in the terminal:

make caesar

Alternatively, if you are not using the CS50 make tool, you can use gcc:

gcc -o caesar caesar.c -lcs50

How to Run
Execute the program from the terminal, providing a non-negative integer as the key.

Syntax:

./caesar <key>

Where <key> is the number of positions to rotate the letters.

Usage Examples
Example 1: Encryption with key 3
./caesar 3

When you run the command above, the program will prompt you for the text:

plaintext:  Hello, world!
ciphertext: Khoor, zruog!

Example 2: Full rotation with key 13 (ROT13)
./caesar 13

Input:

plaintext:  Be sure to drink your Ovaltine!
ciphertext: Or fher gb qevax lbhe Binygvar!

Error Handling
The program is built to handle invalid inputs gracefully:

No arguments or multiple arguments:

./caesar
Usage: ./caesar key

./caesar 1 2
Usage: ./caesar key

Non-numeric argument:

./caesar cat
Usage: ./caesar key
