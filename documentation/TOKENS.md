# Tokens
## About
The `make` program identifies tokens & other data, and places them under different categories. This facilitates the process of parsing the makefiles.
## Categories
### Targets
The first token type that can be found on the `enum` named `token_type_t`, is `TT_TARGET`. Here's an example of a target:
```
object.o: file.c
```
In this example, `object.o` is the target.
### Unknowns
If a token's type cannot be identified at the moment, then it's type is set to `TT_UNKNOWN`.
### Keywords
Keywords, or also keywords & directives, are usually used for conditional logic, however they may be used for other purposes. They can be identified as `TT_KEYWORD`.
### Comments
Comments are those tokens in which start with the character `#`, and end with a newline. They can be identified as `TT_COMMENT`.
### Variables
Variables here are defined a little differently. When a variable is defined in a makefile, it's name before the symbol used for assigning the value is classified as `TT_VARIABLE`. When the actual variable is used, it's name is actually `TT_PLACEHOLDER`.
In the following example below, the variable's name is `CC`, and is classified as `TT_VARIABLE`:
```
CC = cc
```
And in this following example below, the variable's name is `CC`, and is classified `TT_PLACEHOLDER`:
```
object.o: file.c
	$(CC) file.c -o object.o
```
### Operators
Operators, which also include seperators, are basic symbols, but each with a different purpose. For example, the character `:` usually seperates targets from dependencies. The character `=` seperates variable names from their values, etc.
