This repository contains a C code example demonstrating a potential buffer overflow vulnerability. The code attempts to write the value 20 to a memory location pointed to by ptr. However, if ptr does not point to a sufficiently large memory location, this may lead to a buffer overflow. The bugSolution.c file shows how to rectify this error. 

The code can be compiled and run using a C compiler (like GCC): 

```bash
gcc bug.c -o bug
./bug
```