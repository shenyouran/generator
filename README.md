# Generator
A program used to generate random sequences including letters and numbers. It is written in C/C++.

## New for Unix

For Unix users, you could use these fast links:

[Edition 1.0](https://shenyouran.github.io/generator/Unix/1.0.sh)

[Edition 2.0](https://shenyouran.github.io/generator/Unix/2.0.sh)

[Edition 3.0](https://shenyouran.github.io/generator/Unix/3.0.sh)

```bash
cd [path] # Locate the path of the generator
./[filename].sh # Start the program, the file name is the edition name, such as 1.0, 2.0, 3.0
sh ./[filename].sh
```

If there is an error, run the following in the path of the generator:

```bash
chmod +x [filename].sh
```

If necessary, add `sudo` before the command above, and type your password.

## Original Document

For users of Unix (including Linux and MacOS), first download:

[Generator for Unix](/Generator%20for%20Unix.zip)

How do use in Unix:
You can build and run the generators neither in the terminal or in an application that can run C/C++, for example Visual Studio Code. If you run them in an application, do as how you run proper C/C++ programs. If you would like to run them in the terminal, first prepare the terminal and go to the directory and follow these steps:
### Version 1.0
```bash
gcc -o generator1.0 generator1.0.c
./generator1.0
```
### Version 2.0
```bash
g++ -o generator2.0 generator2.0.cpp
./generator2.0
```
For users of Windows, first download:

[Generator for Windows](/Generator%20for%20Windows.zip)

How do use in Windows:
You can build and run the generators neither in the command prompt (cmd.exe) or in an application that can run C/C++, for example Visual Studio Code. If you run them in an application, do as how you run proper C/C++ programs. If you would like to run them in the cmd.exe, first prepare the cmd.exe by right clicking the Windows icon and entering the cmd.exe, then go to the path of the generator.
### Version 1.0
```bash
gcc -o generator1.0.exe generator1.0.c
start generator1.0.exe
```
### Version 2.0
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