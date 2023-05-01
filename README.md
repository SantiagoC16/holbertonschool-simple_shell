<h1> Holberton School Simple Shell </h1>

This project is the last project in our first trimester on Holberton, the objetive of this project was to make a shell with basic funcionalities that imitate the behavior of the original.

The shell is a program that acts as an interface between the user and the kernel of an operating system and is in charge of executing commands.

<h1> Usage: </h1>

 |      Input     |                Output               |
 | ---------------| ----------------------------------- |
 | $ ls -l        | run ls command in long format       |
 | $ pwd          | print the current working directory |
 | $ echo "SHELL" | print SHELL in standard output      |
 | $ clear        | clean the interface                 |
 

 <div>
 <details>
 <summary> <h1> Requirements </h1> </summary>

 <h4> Learning Objectives </h4>
 <li> How does a shell work </li>
 <li> What is a pid and a ppid </li>
 <li> How to manipulate the environment of the current process </li>
 <li> What is the difference between a function and a system call </li>
 <li> How to create processes </li>
 <li> What are the three prototypes of main </li>
 <li> How does the shell use the PATH to find the programs </li>
 <li> How to execute another program with the execve system call</li>
 <li> How to suspend the execution of a process until one of its children terminates</li>
 <li> What is EOF / “end-of-file”?</li>
 
 <h4>General</h4>
 <li> Allowed editors: vi, vim, emacs  </li>
 <li> All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </li>
 <li> All your files should end with a new line </li>
 <li> A README.md file, at the root of the folder of the project is mandatory </li>
 <li> Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl </li>
 <li> Your shell should not have any memory leaks </li>
 <li> No more than 5 functions per file </li>
 <li> All your header files should be include guarded </li>
 <li> Note that we will not provide the _putchar function for this project </li>

 </details>
 </div>


 <div>
 <details>
 <summary><h1> Functions </h1> </summary>
  1. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-simple_shell/blob/master/atokenizer.c">atokenizer.c</a></p></h4>
 <li> This function is responsable for tokenize the string that the user type to later use on the process </li>
  2. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-simple_shell/blob/master/env_which.c">env_which.c</a></p></h4>
 <li> This function is responsable for extracting the path from the environ variable and for search if the input of the user is an executable file </li>
  3. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-simple_shell/blob/master/exec_ve_.c">exec_ve_.c</a></p></h4>
 <li> This function is the one responsible of the executing the command and replacing the process id or return and error message if the input of the user is not a command</li>
  4. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-simple_shell/blob/master/the_main.c">the_main.c</a></p></h4>
 <li> This is the main funcion: 1st a prompt will appear, 2nd the input will be tokenize, 3rd if is a commands will be executed/if is not a command an error message will pop up/ if what the user type is exit the shell will close, 4th start all over again</li>
  5. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-simple_shell/blob/master/shell.h">shell.h</a></p></h4>
 <li> This function contain all our functions, librarys and headers  </li>
 </details>
 </div>

<h5>Authors: </h5>
<p><a href="https://github.com/SantiagoC16">Santiago Caritat</a></p>
<p><a href="https://github.com/Mvigil6343">Marcos Vigil</a></p>

 <div>
 <details>
 <summary><h1> Flowchart </h1> </summary>
 ![](https://github.com/SantiagoC16/holbertonschool-simple_shell/blob/master/flowc.jpg)
 </details>
 </div>