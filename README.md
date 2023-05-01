<h1> Holberton School Printf </h1>

This project was the first big programming challenge we had to do in Holberton, the objetive of this project was to make a printf like function from zero.

The fucntion printf is a standard library function that produce output and can print any type of data, for our fuction we were asked to program the cases below:

| Format to print  |   Description    |
| ---------------- | ---------------- |
| %c               | Print a character|
| %s               | Print a string   |
| %d, %i           | Print a number   |
| %%               | Print %          |

 <div>
 <details>
 <summary> <h1> Requirements </h1> </summary>

 <h4>General</h4>
 <li> Allowed editors: vi, vim, emacs  </li>
 <li> All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </li>
 <li> All your files should end with a new line </li>
 <li> A README.md file, at the root of the folder of the project is mandatory </li>
 <li> Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl </li>
 <li> You are not allowed to use global variables </li>
 <li> No more than 5 functions per file </li>
 <li> The prototypes of all your functions should be included in your header file called main.h </li>
 <li> Don’t forget to push your header file </li>
 <li> All your header files should be include guarded </li>
 <li> Note that we will not provide the _putchar function for this project </li>

 <h4> Authorized functions and macros </h4>
 <li> write (man 2 write) </li>
 <li> malloc (man 3 malloc) </li>
 <li> free (man 3 free) </li>
 <li> va_start (man 3 va_start) </li>
 <li> va_end (man 3 va_end) </li>
 <li> va_copy (man 3 va_copy) </li>
 <li> va_arg (man 3 va_arg) </li>

 </details>
 </div>
 <div>
 <details>
 <summary> <h1> How the function work: </h1> </summary>

 1. We check if the string isn't empty and if is empty we return an error message.
 2. If is not empty we itterate the string looking for the simbol %.
 3. Then we check if after finding % the next char is '\0' and if it is return an error message.
 4. If is not '\0' then we call the funcion print_all.c who check what kind of character match we the ones we are looking for.
 5. After it find a matching character is redirected to aux_functions.c and more_aux_functions.c which is the give you the instructions depending on character.
 6. If the character is 's', 'c', 'd', 'i', '%', NULL will print a string, a character, a number, a percentaje sign, or NULL respectively.

 </details>
 </div>

 <div>
 <details>
 <summary><h1> Examples </h1> </summary>

 |                 Input                 |        Output         |
 | ------------------------------------- | --------------------- |
 | _printf("%s", "Hello World")          | Hello World           |
 | _printf("Im %d years old", 20)        | Im 20 years old       |
 | _printf("My name start with %c", 'A') | My name start with A  |

 </details>
 </div>

 <div>
 <details>
 <summary><h1> Files </h1> </summary>

 1. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-printf/blob/master/_printf.c">_printf.c</a></p></h4>
 2. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-printf/blob/master/print_all.c">print_all.c</a></p></h4>
 3. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-printf/blob/master/aux_functions.c">aux_functions.c</a></p></h4>
 4. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-printf/blob/master/main.h">main.h</a></p></h4>
 5. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-printf/blob/master/_putchar.c">_putchar.c</a></p></h4>
 6. <h4><p><a href="https://github.com/SantiagoC16/holbertonschool-printf/blob/master/more_aux_functions.c">more_aux_functions.c</p></h4>

 </details>
 </div>

<h5>Authors: </h5>
<p><a href="https://github.com/SantiagoC16">Santiago Caritat</a></p>
<p><a href="https://github.com/Froggstar10">Miguel Damasco</a></p>