#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	_isupper(int c);
int	_isdigit(int c);
int	mul(int a, int b);
void	print_numbers(void);
void	_putchar(int c);
void	print_most_numbers(void);
void	more_numbers(void);
void	print_line(int n);
void	print_diagonal(int n);
void	print_square(int size);
void	print_triangle(int size);
void	print_number(int n);

void	reset_to_98(int *n);
void	swap_int(int *a, int *b);
int	_strlen(char *s);
void	_puts(char *str);
void	print_rev(char *s);
void	rev_string(char *s);
void	rev_string(char *s);
void	puts2(char *str);
void	puts_half(char *str);
void	print_array(int *a, int n);
int	_atoi(char *s);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *str);

char *_memset(char *s, char b, unsigned int n);
char *_strstr(char *haystack, char *needle);
void    set_string(char **s, char *to);

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int factorial(int n);
int is_prime_number(int n);
#endif
