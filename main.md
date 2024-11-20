
# C Piscine C 02

1. [Instructions](#instructions)
2. Exercises:
    - [Exercise 00: ft_strcpy](#exercise-00-ft_strcpy)
    - [Exercise 01: ft_strncpy](#exercise-01-ft_strncpy)
    - [Exercise 02: ft_str_is_alpha](#exercise-02-ft_str_is_alpha)
    - [Exercise 03: ft_str_is_numeric](#exercise-03-ft_str_is_numeric)
    - [Exercise 04: ft_str_is_lowercase](#exercise-04-ft_str_is_lowercase)
    - [Exercise 05: ft_str_is_uppercase](#exercise-05-ft_str_is_uppercase)
    - [Exercise 06: ft_str_is_printable](#exercise-06-ft_str_is_printable)
    - [Exercise 07: ft_strupcase](#exercise-07-ft_strupcase)
    - [Exercise 08: ft_strlowcase](#exercise-08-ft_strlowcase)
    - [Exercise 09: ft_strcapitalize](#exercise-09-ft_strcapitalize)
    - [Exercise 10: ft_strlcpy](#exercise-10-ft_strlcpy)
    - [Exercise 11: ft_putstr_non_printable](#exercise-11-ft_putstr_non_printable)
    - [Exercise 12: ft_print_memory](#exercise-12-ft_print_memory)

## Instructions

- This document serves as the reference. Do not rely on rumors.
- Ensure you follow all submission procedures.
- All exercises will be evaluated by peers and Moulinette, an automated grading system.
- **Moulinette Rules**:
    - Exercises must conform to the **Norm** verified by `norminette` (`-R CheckForbiddenSourceHeader` flag).
    - Non-compiling programs will receive a grade of 0.
    - Forbidden functions are considered cheating and result in a grade of **-42**.
- Exercises must be completed in order of difficulty, and easier exercises must work correctly to validate harder ones.
- Submissions must compile with the following flags: `-Wall -Wextra -Werror`.
- No extra files are permitted in your directory.
- Reference materials: Google, `man`, Internet, forums, and Slack.
- Examine examples thoroughly for implicit requirements.



## Exercises

### Exercise 00: ft_strcpy

**Directory**: `ex00/`  
**File**: `ft_strcpy.c`  
**Allowed Functions**: None  

Reproduce the behavior of the `strcpy` function:  
```c
char *ft_strcpy(char *dest, char *src);
```

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>
#include <string.h>

// Prototype of ft_strcpy function
char *ft_strcpy(char *dest, char *src);

// Function to test ft_strcpy
void test_ft_strcpy() {
    char dest[100]; // Destination buffer

    // Test 1: Copying a simple string
    char src1[] = "Hello, world!";
    ft_strcpy(dest, src1);
    printf("Test 1 - Expected: %s | Got: %s\n", src1, dest);

    // Test 2: Copying an empty string
    char src2[] = "";
    ft_strcpy(dest, src2);
    printf("Test 2 - Expected: %s | Got: %s\n", src2, dest);

    // Test 3: Copying a longer string
    char src3[] = "This is a test string to check buffer handling.";
    ft_strcpy(dest, src3);
    printf("Test 3 - Expected: %s | Got: %s\n", src3, dest);

    // Test 4: Copying special characters
    char src4[] = "\tTab\nNewLine\rCarriageReturn";
    ft_strcpy(dest, src4);
    printf("Test 4 - Expected: %s | Got: %s\n", src4, dest);
}

int main() {
    test_ft_strcpy();
    return 0;
}
```
</details>

-------

### Exercise 01: ft_strncpy

**Directory**: `ex01/`  
**File**: `ft_strncpy.c`  
**Allowed Functions**: None  

Reproduce the behavior of the `strncpy` function:  
```c
char *ft_strncpy(char *dest, char *src, unsigned int n);
```

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>
#include <string.h>

// Prototype of ft_strncpy function
char *ft_strncpy(char *dest, char *src, unsigned int n);

// Function to test ft_strncpy
void test_ft_strncpy() {
    char dest[100]; // Destination buffer

    // Test 1: Copying a string shorter than `n`
    char src1[] = "Hello";
    unsigned int n1 = 10;
    ft_strncpy(dest, src1, n1);
    printf("Test 1 - Expected: %-10s | Got: %-10s\n", src1, dest);

    // Test 2: Copying a string equal to `n`
    char src2[] = "World";
    unsigned int n2 = 5;
    ft_strncpy(dest, src2, n2);
    printf("Test 2 - Expected: %-5s | Got: %-5s\n", src2, dest);

    // Test 3: Copying a string longer than `n`
    char src3[] = "This string is too long";
    unsigned int n3 = 7;
    ft_strncpy(dest, src3, n3);
    dest[n3] = '\0'; // Ensure null-termination for display purposes
    printf("Test 3 - Expected: %.7s | Got: %s\n", src3, dest);

    // Test 4: Copying an empty string
    char src4[] = "";
    unsigned int n4 = 5;
    ft_strncpy(dest, src4, n4);
    printf("Test 4 - Expected: %-5s | Got: %-5s\n", src4, dest);

    // Test 5: Copying special characters with padding
    char src5[] = "\tTab\nNew";
    unsigned int n5 = 12;
    ft_strncpy(dest, src5, n5);
    printf("Test 5 - Expected: %-12s | Got: %-12s\n", src5, dest);
}

int main() {
    test_ft_strncpy();
    return 0;
}
```
</details>
-------

### Exercise 02: ft_str_is_alpha

**Directory**: `ex02/`  
**File**: `ft_str_is_alpha.c`  
**Allowed Functions**: None  

Create a function that checks if a string contains only alphabetical characters.  
```c
int ft_str_is_alpha(char *str);
```
Returns:
- `1` if the string is empty or contains only alphabetical characters.
- `0` otherwise.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_str_is_alpha function
int ft_str_is_alpha(char *str);

// Function to test ft_str_is_alpha
void test_ft_str_is_alpha() {
    // Test 1: String contains only alphabetical characters
    char str1[] = "HelloWorld";
    printf("Test 1 - Input: \"%s\" | Expected: 1 | Got: %d\n", str1, ft_str_is_alpha(str1));

    // Test 2: String contains numbers
    char str2[] = "Hello123";
    printf("Test 2 - Input: \"%s\" | Expected: 0 | Got: %d\n", str2, ft_str_is_alpha(str2));

    // Test 3: String contains special characters
    char str3[] = "Hello@World";
    printf("Test 3 - Input: \"%s\" | Expected: 0 | Got: %d\n", str3, ft_str_is_alpha(str3));

    // Test 4: String contains spaces
    char str4[] = "Hello World";
    printf("Test 4 - Input: \"%s\" | Expected: 0 | Got: %d\n", str4, ft_str_is_alpha(str4));

    // Test 5: Empty string (should return 1)
    char str5[] = "";
    printf("Test 5 - Input: \"%s\" | Expected: 1 | Got: %d\n", str5, ft_str_is_alpha(str5));

    // Test 6: String contains only uppercase letters
    char str6[] = "UPPERCASE";
    printf("Test 6 - Input: \"%s\" | Expected: 1 | Got: %d\n", str6, ft_str_is_alpha(str6));

    // Test 7: String contains only lowercase letters
    char str7[] = "lowercase";
    printf("Test 7 - Input: \"%s\" | Expected: 1 | Got: %d\n", str7, ft_str_is_alpha(str7));

    // Test 8: String contains a mix of uppercase and lowercase letters
    char str8[] = "MixedCase";
    printf("Test 8 - Input: \"%s\" | Expected: 1 | Got: %d\n", str8, ft_str_is_alpha(str8));
}

int main() {
    test_ft_str_is_alpha();
    return 0;
}
```
</details>

-------

### Exercise 03: ft_str_is_numeric

**Directory**: `ex03/`  
**File**: `ft_str_is_numeric.c`  
**Allowed Functions**: None  

Create a function that checks if a string contains only numeric characters.  
```c
int ft_str_is_numeric(char *str);
```
Returns:
- `1` if the string is empty or contains only digits.
- `0` otherwise.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_str_is_numeric function
int ft_str_is_numeric(char *str);

// Function to test ft_str_is_numeric
void test_ft_str_is_numeric() {
    // Test 1: String contains only digits
    char str1[] = "1234567890";
    printf("Test 1 - Input: \"%s\" | Expected: 1 | Got: %d\n", str1, ft_str_is_numeric(str1));

    // Test 2: String contains letters
    char str2[] = "123abc456";
    printf("Test 2 - Input: \"%s\" | Expected: 0 | Got: %d\n", str2, ft_str_is_numeric(str2));

    // Test 3: String contains special characters
    char str3[] = "123@456";
    printf("Test 3 - Input: \"%s\" | Expected: 0 | Got: %d\n", str3, ft_str_is_numeric(str3));

    // Test 4: String contains spaces
    char str4[] = "123 456";
    printf("Test 4 - Input: \"%s\" | Expected: 0 | Got: %d\n", str4, ft_str_is_numeric(str4));

    // Test 5: Empty string (should return 1)
    char str5[] = "";
    printf("Test 5 - Input: \"%s\" | Expected: 1 | Got: %d\n", str5, ft_str_is_numeric(str5));

    // Test 6: String contains a single digit
    char str6[] = "7";
    printf("Test 6 - Input: \"%s\" | Expected: 1 | Got: %d\n", str6, ft_str_is_numeric(str6));

    // Test 7: String contains mixed characters
    char str7[] = "123abc!456";
    printf("Test 7 - Input: \"%s\" | Expected: 0 | Got: %d\n", str7, ft_str_is_numeric(str7));
}

int main() {
    test_ft_str_is_numeric();
    return 0;
}
```
</details>

-------

### Exercise 04: ft_str_is_lowercase

**Directory**: `ex04/`  
**File**: `ft_str_is_lowercase.c`  
**Allowed Functions**: None  

Create a function that checks if a string contains only lowercase characters.  
```c
int ft_str_is_lowercase(char *str);
```
Returns:
- `1` if the string is empty or contains only lowercase letters.
- `0` otherwise.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_str_is_lowercase function
int ft_str_is_lowercase(char *str);

// Function to test ft_str_is_lowercase
void test_ft_str_is_lowercase() {
    // Test 1: String contains only lowercase letters
    char str1[] = "hello";
    printf("Test 1 - Input: \"%s\" | Expected: 1 | Got: %d\n", str1, ft_str_is_lowercase(str1));

    // Test 2: String contains uppercase letters
    char str2[] = "Hello";
    printf("Test 2 - Input: \"%s\" | Expected: 0 | Got: %d\n", str2, ft_str_is_lowercase(str2));

    // Test 3: String contains numbers
    char str3[] = "hello123";
    printf("Test 3 - Input: \"%s\" | Expected: 0 | Got: %d\n", str3, ft_str_is_lowercase(str3));

    // Test 4: String contains special characters
    char str4[] = "hello@world";
    printf("Test 4 - Input: \"%s\" | Expected: 0 | Got: %d\n", str4, ft_str_is_lowercase(str4));

    // Test 5: String contains spaces
    char str5[] = "hello world";
    printf("Test 5 - Input: \"%s\" | Expected: 0 | Got: %d\n", str5, ft_str_is_lowercase(str5));

    // Test 6: Empty string (should return 1)
    char str6[] = "";
    printf("Test 6 - Input: \"%s\" | Expected: 1 | Got: %d\n", str6, ft_str_is_lowercase(str6));

    // Test 7: String contains only one lowercase character
    char str7[] = "z";
    printf("Test 7 - Input: \"%s\" | Expected: 1 | Got: %d\n", str7, ft_str_is_lowercase(str7));

    // Test 8: Mixed lowercase and special characters
    char str8[] = "hello!";
    printf("Test 8 - Input: \"%s\" | Expected: 0 | Got: %d\n", str8, ft_str_is_lowercase(str8));
}

int main() {
    test_ft_str_is_lowercase();
    return 0;
}
```
</details>

-------

### Exercise 05: ft_str_is_uppercase

**Directory**: `ex05/`  
**File**: `ft_str_is_uppercase.c`  
**Allowed Functions**: None  

Create a function that checks if a string contains only uppercase characters.  
```c
int ft_str_is_uppercase(char *str);
```
Returns:
- `1` if the string is empty or contains only uppercase letters.
- `0` otherwise.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_str_is_lowercase function
int ft_str_is_lowercase(char *str);

// Function to test ft_str_is_lowercase
void test_ft_str_is_lowercase() {
    // Test 1: String contains only lowercase letters
    char str1[] = "hello";
    printf("Test 1 - Input: \"%s\" | Expected: 1 | Got: %d\n", str1, ft_str_is_lowercase(str1));

    // Test 2: String contains uppercase letters
    char str2[] = "Hello";
    printf("Test 2 - Input: \"%s\" | Expected: 0 | Got: %d\n", str2, ft_str_is_lowercase(str2));

    // Test 3: String contains numbers
    char str3[] = "hello123";
    printf("Test 3 - Input: \"%s\" | Expected: 0 | Got: %d\n", str3, ft_str_is_lowercase(str3));

    // Test 4: String contains special characters
    char str4[] = "hello@world";
    printf("Test 4 - Input: \"%s\" | Expected: 0 | Got: %d\n", str4, ft_str_is_lowercase(str4));

    // Test 5: String contains spaces
    char str5[] = "hello world";
    printf("Test 5 - Input: \"%s\" | Expected: 0 | Got: %d\n", str5, ft_str_is_lowercase(str5));

    // Test 6: Empty string (should return 1)
    char str6[] = "";
    printf("Test 6 - Input: \"%s\" | Expected: 1 | Got: %d\n", str6, ft_str_is_lowercase(str6));

    // Test 7: String contains only one lowercase character
    char str7[] = "z";
    printf("Test 7 - Input: \"%s\" | Expected: 1 | Got: %d\n", str7, ft_str_is_lowercase(str7));

    // Test 8: Mixed lowercase and special characters
    char str8[] = "hello!";
    printf("Test 8 - Input: \"%s\" | Expected: 0 | Got: %d\n", str8, ft_str_is_lowercase(str8));
}

int main() {
    test_ft_str_is_lowercase();
    return 0;
}
```
</details>

-------

### Exercise 06: ft_str_is_printable

**Directory**: `ex06/`  
**File**: `ft_str_is_printable.c`  
**Allowed Functions**: None  

Create a function that checks if a string contains only printable characters.  
```c
int ft_str_is_printable(char *str);
```
Returns:
- `1` if the string is empty or contains only printable characters.
- `0` otherwise.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_str_is_printable function
int ft_str_is_printable(char *str);

// Function to test ft_str_is_printable
void test_ft_str_is_printable() {
    // Test 1: String contains only printable characters
    char str1[] = "Hello, World!";
    printf("Test 1 - Input: \"%s\" | Expected: 1 | Got: %d\n", str1, ft_str_is_printable(str1));

    // Test 2: String contains non-printable ASCII characters (bell character)
    char str2[] = "Hello\x07World";
    printf("Test 2 - Input: \"Hello\\x07World\" | Expected: 0 | Got: %d\n", ft_str_is_printable(str2));

    // Test 3: String contains non-printable ASCII characters (newline character)
    char str3[] = "Hello\nWorld";
    printf("Test 3 - Input: \"Hello\\nWorld\" | Expected: 0 | Got: %d\n", ft_str_is_printable(str3));

    // Test 4: String contains spaces and printable punctuation
    char str4[] = "Hello, World! 123";
    printf("Test 4 - Input: \"%s\" | Expected: 1 | Got: %d\n", str4, ft_str_is_printable(str4));

    // Test 5: Empty string (should return 1)
    char str5[] = "";
    printf("Test 5 - Input: \"%s\" | Expected: 1 | Got: %d\n", str5, ft_str_is_printable(str5));

    // Test 6: String contains only non-printable characters
    char str6[] = "\x01\x02\x03";
    printf("Test 6 - Input: \"\\x01\\x02\\x03\" | Expected: 0 | Got: %d\n", ft_str_is_printable(str6));

    // Test 7: String with printable extended ASCII characters
    char str7[] = "Hello, 世界!";
    printf("Test 7 - Input: \"%s\" | Expected: 1 | Got: %d\n", str7, ft_str_is_printable(str7));
}

int main() {
    test_ft_str_is_printable();
    return 0;
}
```
</details>
---

### Exercise 07: ft_strupcase

**Directory**: `ex07/`  
**File**: `ft_strupcase.c`  
**Allowed Functions**: None  

Create a function to convert all characters in a string to uppercase.  
```c
char *ft_strupcase(char *str);
```
Returns the modified string.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_strupcase function
char *ft_strupcase(char *str);

// Function to test ft_strupcase
void test_ft_strupcase() {
    // Test 1: String contains lowercase letters
    char str1[] = "hello world";
    printf("Test 1 - Input: \"%s\" | Expected: \"HELLO WORLD\" | Got: \"%s\"\n", str1, ft_strupcase(str1));

    // Test 2: String contains uppercase letters
    char str2[] = "HELLO WORLD";
    printf("Test 2 - Input: \"%s\" | Expected: \"HELLO WORLD\" | Got: \"%s\"\n", str2, ft_strupcase(str2));

    // Test 3: String contains mixed case letters
    char str3[] = "HeLLo WoRLd";
    printf("Test 3 - Input: \"%s\" | Expected: \"HELLO WORLD\" | Got: \"%s\"\n", str3, ft_strupcase(str3));

    // Test 4: String contains digits
    char str4[] = "123abc456";
    printf("Test 4 - Input: \"%s\" | Expected: \"123ABC456\" | Got: \"%s\"\n", str4, ft_strupcase(str4));

    // Test 5: String contains special characters
    char str5[] = "hello@world!";
    printf("Test 5 - Input: \"%s\" | Expected: \"HELLO@WORLD!\" | Got: \"%s\"\n", str5, ft_strupcase(str5));

    // Test 6: Empty string (should return empty string)
    char str6[] = "";
    printf("Test 6 - Input: \"%s\" | Expected: \"\" | Got: \"%s\"\n", str6, ft_strupcase(str6));

    // Test 7: String contains spaces
    char str7[] = " hello world ";
    printf("Test 7 - Input: \"%s\" | Expected: \" HELLO WORLD \" | Got: \"%s\"\n", str7, ft_strupcase(str7));

    // Test 8: String contains already uppercase letters
    char str8[] = "HELLO WORLD";
    printf("Test 8 - Input: \"%s\" | Expected: \"HELLO WORLD\" | Got: \"%s\"\n", str8, ft_strupcase(str8));
}

int main() {
    test_ft_strupcase();
    return 0;
}
```
</details>

-------

### Exercise 08: ft_strlowcase

**Directory**: `ex08/`  
**File**: `ft_strlowcase.c`  
**Allowed Functions**: None  

Create a function to convert all characters in a string to lowercase.  
```c
char *ft_strlowcase(char *str);
```
Returns the modified string.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_strlowcase function
char *ft_strlowcase(char *str);

// Function to test ft_strlowcase
void test_ft_strlowcase() {
    // Test 1: String contains uppercase letters
    char str1[] = "HELLO WORLD";
    printf("Test 1 - Input: \"%s\" | Expected: \"hello world\" | Got: \"%s\"\n", str1, ft_strlowcase(str1));

    // Test 2: String contains lowercase letters
    char str2[] = "hello world";
    printf("Test 2 - Input: \"%s\" | Expected: \"hello world\" | Got: \"%s\"\n", str2, ft_strlowcase(str2));

    // Test 3: String contains mixed case letters
    char str3[] = "HeLLo WoRLd";
    printf("Test 3 - Input: \"%s\" | Expected: \"hello world\" | Got: \"%s\"\n", str3, ft_strlowcase(str3));

    // Test 4: String contains digits
    char str4[] = "123abc456";
    printf("Test 4 - Input: \"%s\" | Expected: \"123abc456\" | Got: \"%s\"\n", str4, ft_strlowcase(str4));

    // Test 5: String contains special characters
    char str5[] = "HELLO@WORLD!";
    printf("Test 5 - Input: \"%s\" | Expected: \"hello@world!\" | Got: \"%s\"\n", str5, ft_strlowcase(str5));

    // Test 6: Empty string (should return empty string)
    char str6[] = "";
    printf("Test 6 - Input: \"%s\" | Expected: \"\" | Got: \"%s\"\n", str6, ft_strlowcase(str6));

    // Test 7: String contains spaces
    char str7[] = " Hello World ";
    printf("Test 7 - Input: \"%s\" | Expected: \" hello world \" | Got: \"%s\"\n", str7, ft_strlowcase(str7));

    // Test 8: String contains already lowercase letters
    char str8[] = "hello world";
    printf("Test 8 - Input: \"%s\" | Expected: \"hello world\" | Got: \"%s\"\n", str8, ft_strlowcase(str8));
}

int main() {
    test_ft_strlowcase();
    return 0;
}
```
</details>

-------

### Exercise 09: ft_strcapitalize

**Directory**: `ex09/`  
**File**: `ft_strcapitalize.c`  
**Allowed Functions**: None  

Create a function to capitalize the first letter of each word and lowercase the rest.  
```c
char *ft_strcapitalize(char *str);
```
- Words are alphanumeric strings separated by non-alphanumeric characters.
- Example:  
    Input: `"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"`  
    Output: `"Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"`

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_strcapitalize function
char *ft_strcapitalize(char *str);

// Function to test ft_strcapitalize
void test_ft_strcapitalize() {
    // Test 1: Simple sentence with lowercase letters and punctuation
    char str1[] = "salut, comment tu vas ?";
    printf("Test 1 - Input: \"%s\" | Expected: \"Salut, Comment Tu Vas ?\" | Got: \"%s\"\n", str1, ft_strcapitalize(str1));

    // Test 2: Sentence with numbers and hyphens
    char str2[] = "42mots quarante-deux";
    printf("Test 2 - Input: \"%s\" | Expected: \"42mots Quarante-Deux\" | Got: \"%s\"\n", str2, ft_strcapitalize(str2));

    // Test 3: Sentence with special characters like `+` and spaces
    char str3[] = "cinquante+et+un";
    printf("Test 3 - Input: \"%s\" | Expected: \"Cinquante+Et+Un\" | Got: \"%s\"\n", str3, ft_strcapitalize(str3));

    // Test 4: String with mixed uppercase and lowercase
    char str4[] = "HeLLo wORlD!";
    printf("Test 4 - Input: \"%s\" | Expected: \"Hello World!\" | Got: \"%s\"\n", str4, ft_strcapitalize(str4));

    // Test 5: Empty string (should return empty string)
    char str5[] = "";
    printf("Test 5 - Input: \"%s\" | Expected: \"\" | Got: \"%s\"\n", str5, ft_strcapitalize(str5));

    // Test 6: Sentence with leading spaces and mixed case
    char str6[] = "  salut tout le monde ";
    printf("Test 6 - Input: \"%s\" | Expected: \"  Salut Tout Le Monde \" | Got: \"%s\"\n", str6, ft_strcapitalize(str6));

    // Test 7: String with only digits
    char str7[] = "12345 67890";
    printf("Test 7 - Input: \"%s\" | Expected: \"12345 67890\" | Got: \"%s\"\n", str7, ft_strcapitalize(str7));

    // Test 8: String with no lowercase letters
    char str8[] = "HELLO WORLD!";
    printf("Test 8 - Input: \"%s\" | Expected: \"Hello World!\" | Got: \"%s\"\n", str8, ft_strcapitalize(str8));

    // Test 9: Mixed with punctuation and numbers
    char str9[] = "hello! this is a test, with 123 numbers!";
    printf("Test 9 - Input: \"%s\" | Expected: \"Hello! This Is A Test, With 123 Numbers!\" | Got: \"%s\"\n", str9, ft_strcapitalize(str9));
}

int main() {
    test_ft_strcapitalize();
    return 0;
}
```
</details>

-------

### Exercise 10: ft_strlcpy

**Directory**: `ex10/`  
**File**: `ft_strlcpy.c`  
**Allowed Functions**: None  

Reproduce the behavior of the `strlcpy` function:  
```c
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
```

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_strlcpy function
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

// Function to test ft_strlcpy
void test_ft_strlcpy() {
    // Test 1: Basic case, destination is large enough
    char dest1[20];
    char src1[] = "Hello, World!";
    unsigned int result1 = ft_strlcpy(dest1, src1, sizeof(dest1));
    printf("Test 1 - Input: \"%s\", size: %d | Expected: \"Hello, World!\" | Got: \"%s\", Result: %u\n", src1, sizeof(dest1), dest1, result1);

    // Test 2: Destination size smaller than source, should truncate
    char dest2[10];
    char src2[] = "Hello, World!";
    unsigned int result2 = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("Test 2 - Input: \"%s\", size: %d | Expected: \"Hello, Wo\" | Got: \"%s\", Result: %u\n", src2, sizeof(dest2), dest2, result2);

    // Test 3: Size of destination is exactly the length of source
    char dest3[14];
    char src3[] = "Hello, World!";
    unsigned int result3 = ft_strlcpy(dest3, src3, sizeof(dest3));
    printf("Test 3 - Input: \"%s\", size: %d | Expected: \"Hello, World!\" | Got: \"%s\", Result: %u\n", src3, sizeof(dest3), dest3, result3);

    // Test 4: Empty source string, should result in an empty destination
    char dest4[20];
    char src4[] = "";
    unsigned int result4 = ft_strlcpy(dest4, src4, sizeof(dest4));
    printf("Test 4 - Input: \"%s\", size: %d | Expected: \"\" | Got: \"%s\", Result: %u\n", src4, sizeof(dest4), dest4, result4);

    // Test 5: Destination buffer is too small to copy any data
    char dest5[5];
    char src5[] = "Hello, World!";
    unsigned int result5 = ft_strlcpy(dest5, src5, sizeof(dest5));
    printf("Test 5 - Input: \"%s\", size: %d | Expected: \"Hell\" | Got: \"%s\", Result: %u\n", src5, sizeof(dest5), dest5, result5);

    // Test 6: Source is shorter than destination, should copy whole string
    char dest6[20];
    char src6[] = "Hi!";
    unsigned int result6 = ft_strlcpy(dest6, src6, sizeof(dest6));
    printf("Test 6 - Input: \"%s\", size: %d | Expected: \"Hi!\" | Got: \"%s\", Result: %u\n", src6, sizeof(dest6), dest6, result6);

    // Test 7: Destination buffer size of 1 (only space for the null terminator)
    char dest7[1];
    char src7[] = "Hello, World!";
    unsigned int result7 = ft_strlcpy(dest7, src7, sizeof(dest7));
    printf("Test 7 - Input: \"%s\", size: %d | Expected: \"\" | Got: \"%s\", Result: %u\n", src7, sizeof(dest7), dest7, result7);
}

int main() {
    test_ft_strlcpy();
    return 0;
}
```
</details>

-------

### Exercise 11: ft_putstr_non_printable

**Directory**: `ex11/`  
**File**: `ft_putstr_non_printable.c`  
**Allowed Functions**: `write`  

Create a function to display a string, converting non-printable characters to hexadecimal prefixed by `\`.  
```c
void ft_putstr_non_printable(char *str);
```
Example:  
Input: `"Coucou\ntu vas bien ?"`  
Output: `"Coucou\0atu vas bien ?"`

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>

// Prototype of ft_putstr_non_printable function
void ft_putstr_non_printable(char *str);

// Helper function to capture the output of ft_putstr_non_printable
void test_ft_putstr_non_printable(char *input, char *expected) {
    printf("Input: \"%s\"\nExpected: \"%s\"\nGot: \"", input, expected);
    ft_putstr_non_printable(input);
    printf("\"\n\n");
}

int main() {
    // Test 1: Basic string with no non-printable characters
    test_ft_putstr_non_printable("Hello, World!", "Hello, World!");

    // Test 2: String with a newline character
    test_ft_putstr_non_printable("Coucou\ntu vas bien ?", "Coucou\\0atu vas bien ?");

    // Test 3: String with multiple non-printable characters
    char test3[] = "Hi\x01 there\x02!";
    test_ft_putstr_non_printable(test3, "Hi\\01 there\\02!");

    // Test 4: String with all non-printable characters
    char test4[] = "\x01\x02\x03";
    test_ft_putstr_non_printable(test4, "\\01\\02\\03");

    // Test 5: Empty string
    test_ft_putstr_non_printable("", "");

    // Test 6: String with a mix of printable and non-printable characters
    char test6[] = "Printable\x7FNon-printable";
    test_ft_putstr_non_printable(test6, "Printable\\7fNon-printable");

    // Test 7: String with a backslash character (to ensure no conflict in display)
    test_ft_putstr_non_printable("\\test", "\\\\test");

    return 0;
}
```
</details>

-------

### Exercise 12: ft_print_memory

**Directory**: `ex12/`  
**File**: `ft_print_memory.c`  
**Allowed Functions**: `write`  

Create a function to display memory contents in a formatted way.  
```c
void *ft_print_memory(void *addr, unsigned int size);
```
- Format:
    - Column 1: Hexadecimal address
    - Column 2: Hexadecimal representation of content
    - Column 3: Printable characters (or `.` for non-printable ones)
- Returns the input address.

<details>
    <summary>Main Test</summary>

```c
#include <stdio.h>
#include <string.h>

// Prototype of ft_print_memory function
void *ft_print_memory(void *addr, unsigned int size);

// Helper function to test ft_print_memory
void test_ft_print_memory(void *addr, unsigned int size, const char *description) {
    printf("Test: %s\n", description);
    ft_print_memory(addr, size);
    printf("\n\n");
}

int main() {
    // Test 1: Memory area with a mix of printable and non-printable characters
    char test1[] = "Hello, World!\x01\x02\x03";
    test_ft_print_memory(test1, sizeof(test1), "Mix of printable and non-printable characters");

    // Test 2: Memory area containing only printable characters
    char test2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    test_ft_print_memory(test2, sizeof(test2), "Only printable characters");

    // Test 3: Memory area containing only non-printable characters
    char test3[] = "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F";
    test_ft_print_memory(test3, sizeof(test3), "Only non-printable characters");

    // Test 4: Memory area with exactly 16 characters (one full line)
    char test4[] = "1234567890abcdef";
    test_ft_print_memory(test4, sizeof(test4), "Exactly 16 characters");

    // Test 5: Memory area with more than 16 characters (multiple lines)
    char test5[] = "This is a test string to check multiple lines in memory display.";
    test_ft_print_memory(test5, sizeof(test5), "Multiple lines of memory");

    // Test 6: Memory area smaller than 16 characters
    char test6[] = "Short";
    test_ft_print_memory(test6, sizeof(test6), "Fewer than 16 characters");

    // Test 7: Memory area of size 0
    char test7[] = "This test won't display.";
    test_ft_print_memory(test7, 0, "Size 0 test");

    return 0;
}
```
</details>

-------
