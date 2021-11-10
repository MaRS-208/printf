<h1 align="center">Printf</h1>
</div>
<!-- ABOUT -->

This project's objective is to make a function that performs as the original printf function would.

Given the prototype: int _printf(const char *format, ...);, it takes "format" as input and checks it's existence, in case there's an error it prints "-1"; if there isn't it searches through the values of "format" in order to find the "%" marker that leads to a determined fnction, it prints the returned value and returns the amount of characters it prints.

Some of the functions are not yet finished, therefore, there are some cases in which it doesn't completetly work. Still, the prototypes are there and can be used when the functions are completed.

###  Supported Types


| Type   | Output |
|--------|--------|
| c      | Single character |
| s      | String of characters |
| d      | Decimal |
| i      | Interger |
| %      | A % followed by another % character will write a single % |
| b      | Binary |
| u      | Decimal integer |
| o      | Octal |
| x      | Hexadecimal integer (lowercase) |
| X      | Hexadecimal integer (uppercase) |
| r      | Reverse |
| R      | Rot13 |

 </div>

<p align="center">
 By Manuela Ríos Sosa and Guzmán Caraballo
</p>
 <p align="center">
Deadline: Wednesday 10th, November 2021
 </p>
