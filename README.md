# Generator
A program used to generate random sequences including letters and numbers. It is written in C/C++.
For users of Unix (including Linux and MacOS), first download a file:

[Edition 1 (output in terminal or other systems)](/UNIX/GENERATOR1.0.c)

[Edition 2 (output could be externaled in another output file)](/UNIX/GENERATOR2.0.cpp)
How do use in Unix:
You can build and run the generators neither in the terminal or in an application that can run C/C++, for example Visual Studio Code. If you run them in an application, do as how you run proper C/C++ programs. If you would like to run them in the terminal, first prepare the terminal and go to the directory and follow these steps:
## Version 1.0
```bash
gcc -o generator1.0 generator1.0.c
./generator1.0
```
## Version 2.0
```bash
g++ -o generator2.0 generator2.0.cpp
./generator2.0
```
For users of Windows, first download a file:

[Edition 1 (output in terminal or other systems)](/WINDOWS/GENERATOR1.0.c)

[Edition 2 (output could be externaled in another output file)](/WINDOWS/GENERATOR2.0.cpp)
How do use in Windows:
You can build and run the generators neither in the command prompt (cmd.exe) or in an application that can run C/C++, for example Visual Studio Code. If you run them in an application, do as how you run proper C/C++ programs. If you would like to run them in the cmd.exe, first prepare the cmd.exe by right clicking the Windows icon and entering the cmd.exe, then go to the path of the generator.
## Version 1.0
```bash
gcc -o generator1.0.exe generator1.0.c
start generator1.0.exe
```
## Version 2.0
```bash
g++ -o generator2.0.exe generator2.0.cpp
start generator2.0.exe
```
F.A.Q:
Q: Why does the cmd (terminal) respond error: no such file or repository?
A: You might be entering the wrong path. To correct this, run:
```bash
cd /
cd [path]
```
The \[path] above is equivalent to the path where you downloaded the generator.
Next, redo the work that is shown above.
