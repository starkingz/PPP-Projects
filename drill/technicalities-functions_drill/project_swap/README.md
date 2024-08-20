# Drill 2

## Problem:
Write three functions swap_v(int,int), swap_r(int&,int&), and swap_
cr(const int&, const int&). Each should have the body
```
{ int temp; temp = a, a=b; b=temp; }
```
where a and b are the names of the arguments.
Try calling each swap like this
```
int x = 7;
int y =9;
swap_?(x,y); // replace ? by v, r, or cr
swap_?(7,9);
const int cx = 7;
const int cy = 9;
swap_?(cx,cy);
swap_?(7.7,9.9);
double dx = 7.7;
double dy = 9.9;
swap_?(dx,dy);
swap_?(7.7,9.9);
```
## Solutions:
Header file: [swap.h](./swap.h)
swap_v: [0-swap.cpp](./0-swap.cpp) && [0-use.cpp](./0-use.cpp)
swap_r: [1-swap.cpp](1-swap.cpp) && [1-use.cpp](./2-use.cpp)
swap_cr: [2-swap.cpp](./2-swap.cpp) && [2-use.cpp](./2-use.cpp)

Which functions and calls compiled, and why? [Answer](./answer_to_question.txt)