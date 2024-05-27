// Chapter 6 - Writing a program
// Exercise 7
// Date: 23.03.2024

// Grammar for Bitwise logical expressions

Expression:
sub-exp
expression "|" sub-exp

Sub-exp:
term
subexp "^" term

Term:
sub-term
term "&" sub-term

Sub-term:
primary
"~" number

Primary:
Number
'(' expression ')'

Number:
Integer literal