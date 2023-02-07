

// // 1. Write a recursive function to calculate sum of first N natural numbers
// #include <stdio.h>
// #include <conio.h>
// int sum(int);
// int sum(int a)
// {

//     if (a == 1)
//         return 1;

//     return a + sum(a - 1);
// }

// int main()
// {
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     printf("%d", sum(num));

//     return 0;
// }

// 2. Write a recursive function to calculate sum of first N even odd natural numbers
// #include <stdio.h>
// #include <conio.h>
// int sumeven(int);
// int sumeven(int n)
// {
//     if (n == 1)
//         return 2;
//     return n * 2 + sumeven(n - 1);
// }
// int main()
// {
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     printf("%d", sumeven(num));
//     return 0;
// }

// // 3. Write a recursive function to calculate sum of first N odd natural numbers
// #include <stdio.h>
// #include <conio.h>
// int sumodd(int);
// int sumodd(int n)
// {
//     if (n == 1)
//         return 1;
//     return n * 2 - 1 + sumodd(n - 1);
// }
// int main()
// {
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     printf("%d", sumodd(num));
//     return 0;
// }

// 4. Write a recursive function to calculate sum of squares of first n natural numbers
// #include<stdio.h>
// #include<conio.h>
// int squarsum(int n)
// {
//     if(n==1)
//         return 1;

//     return n * n + squarsum(n - 1);
// }

// int main()
// {
//     int num;
//     printf("Enter a number:");
//     scanf("%d", &num);
//     printf("%d" ,squarsum(num));
//     return 0;
// }

// 5. Write a recursive function to calculate sum of digits of a given number
// #include <stdio.h>
// #include <conio.h>
// int digitsum(int n);
// int digitsum(int n)
// {
//     if (n == 0)
//         return 0;
//     return digitsum(n / 10) + n % 10;
// }
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     printf("%d", digitsum(num));

//     return 0;
// }

// 6. Write a recursive function to calculate factorial of a given numbe
// #include<stdio.h>
// #include<conio.h>
// int factorial(int n){
//     if(n==0||n==1)
//         return 1;

//     return n * factorial(n - 1);
// }

// int main()
// {
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     printf("factorial od %d is %d ", num, factorial(num));
//     return 0;
// }

// 7. Write a recursive function to calculate HCF of two numbers
// #include <stdio.h>
// int HCF(int a, int b)
// {
//     if (a % b == 0)
//         return b;
//     if (b % a == 0)
//         return a;
//     if (a > b)
//         HCF(a % b, b);
//     else
//         HCF(a, b % a);
// }
// int main()
// {
//     int a, b, hcf;
//     printf("Enter two numbers");
//     scanf("%d%d", &a, &b);
//     hcf = HCF(a, b);
//     printf("HCF is %d", hcf);

//     return 0;
// }

// 8. Write a recursive function to print first N terms of Fibonacci series
// #include <stdio.h>

// int  fib(int a)
// {
//     if(a=2)
//         return 1;
//     return fib(a - 1) + fib(a - 2);
//     // printf("%d ", a);
// }
// int main()
// {
//     int N;
//     printf("Enter n term of fibonacci series");
//     scanf("%d", &N);
//     printf("%d ", fib(N));

//     return 0;
// }

// 9. Write a program in C to count the digits of a given number using recursion..
// #include <stdio.h>
// int digit(int num);
// int s = 0;
// int digit(int num)
// {
//     if (num == 0)
//         return s;
//     else
//         s++;
//     num = num / 10;
//     digit(num);
//     return s;
// }
// int main()
// {
//     int n, d;
//     printf("Enter a number");
//     scanf("%d", &n);
//     d = digit(n);
//     printf("There are %d digit in %d", d, n);

//     return 0;
// }

// 10. Write a program in C to calculate the power of any number using recursion.
// #include <stdio.h>
// int a;
// int power(int s)
// {
//     if (s == 1)
//         return a;
//     return a * power(s - 1);
// }
// int main()
// {
//     int pow, s;
//     printf("Enter a number\n");
//     scanf("%d", &a);
//     printf("Enter Power of this number");
//     scanf("%d", &s);
//     pow = power(s);
//     printf("%d ", pow);

//     return 0;
// }
