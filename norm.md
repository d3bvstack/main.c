# The Norm
## III.1 Denomination

* A structure's name must start with `s_`.
* A typedef's name must start with `t_`.
* A union's name must start with `u_`.
* An enum's name must start with `e_`.
* A global's name must start with `g_`.
* Variables and functions names can only contain lowercases, digits and `_` (snake_case).
* Files and directories names can only contain lowercases, digits and `_` (snake_case).
* Characters that aren't part of the standard ASCII table are forbidden.
* Variables, functions, and any other identifier must use snake case. No capital letters, and each word separated by an underscore.
* All identifiers (functions, macros, types, variables, etc.) must be in English.
* Objects (variables, functions, macros, types, files or directories) must have the most explicit or most mnemonic names as possible.
* Using global variables that are not marked `const` and `static` is forbidden and is considered a norm error, unless the project explicitly allows them.
* The file must compile. A file that doesn't compile isn't expected to pass the Norm.

## III.2 Formatting

* You must indent your code with 4-space tabulations. This is not the same as 4 average spaces, we're talking about real tabulations here.
* Each function must be maximum 25 lines, not counting the function's own curly brackets.
* Each line must be at most 80 columns wide, comments included. Warning: a tabulation doesn't count as a column, but as the number of spaces it represents.
* Each function must be separated by a newline. Any comment or preprocessor instruction can be right above the function. The newline is after the previous function.
* One instruction per line.
* An empty line must be empty: no spaces or tabulations.
* A line can never end with spaces or tabulations.
* You can never have two consecutive spaces.
* You need to start a new line after each curly bracket or end of control structure.
* Unless it's the end of a line, each comma or semi-colon must be followed by a space.
* Each operator or operand must be separated by one - and only one - space.
* Each C keyword must be followed by a space, except for keywords for types (such as `int`, `char`, `float`, etc.), as well as `sizeof`.
* Each variable declaration must be indented on the same column for its scope.
* The asterisks that go with pointers must be stuck to variable names.
* One single variable declaration per line.
* Declaration and an initialisation cannot be on the same line, except for global variables (when allowed), static variables, and constants.
* Declarations must be at the beginning of a function.
* In a function, you must place an empty line between variable declarations and the remaining of the function. No other empty lines are allowed in a function.
* Multiple assignments are strictly forbidden.
* You may add a new line after an instruction or control structure, but you'll have to add an indentation with brackets or assignment operator. Operators must be at the beginning of a line.
* Control structures (if, while..) must have braces, unless they contain a single line.
* Braces following functions, declarators or control structures must be preceded and followed by a newline.

## General Example
```c
int g_global;

typedef struct s_struct
{
    char *my_string;
    int i;
} t_struct;

struct s_other_struct;

int main(void)
{
    int i;
    char c;
    return (i);
}
```

## III.3 Functions

* A function can take 4 named parameters maximum.
* A function that doesn't take arguments must be explicitly prototyped with the word "void" as the argument.
* Parameters in functions' prototypes must be named.
* Each function must be separated from the next by an empty line.
* You can't declare more than 5 variables per function.
* Return of a function has to be between parenthesis.
* Each function must have a single tabulation between its return type and its name.

### Example
```c
int my_func(int arg1, char arg2, char *arg3)
{
    return (my_val);
}

int func2(void)
{
    return ;
}
```

## III.4 Typedef, struct, enum and union

* Add a tabulation when declaring a struct, enum or union.
* When declaring a variable of type struct, enum or union, add a single space in the type.
* When declaring a struct, union or enum with a typedef, all indentation rules apply.
* Typedef name must be preceded by a tab.
* You must indent all structures' names on the same column for their scope.
* You cannot declare types like structs, unions, enums or typedefs in a .c file.

## III.5 Headers - a.k.a include files

* The things allowed in header files are: header inclusions (system or not), declarations, defines, prototypes and macros.
* All includes must be at the beginning of the file.
* You cannot include a C file.
* Header files must be protected from double inclusions. If the file is ft_foo.h, its bystander macro is FT_FOO_H.
* Unused header inclusions (.h) are forbidden.
* All header inclusions must be justified in a .c file as well as in a .h file.

### Example
```c
#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <stdio.h>
# define FOO "bar"
int g_variable;
struct s_struct;
#endif
```