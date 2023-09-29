// You can use this structure as a starting point and then implement the details for each program on your own.

// Let's start with a basic C program structure: 

#include <stdio.h>

int main() {
    // Your code goes here

    return 0;
}


// Program to add two numbers:

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);

    return 0;
}


// Program to find the factorial of a number:

#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial: %d\n", factorial);

    return 0;
}

// Program to check if a number is prime:

#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }

    return 0;
}

// Program to find the Fibonacci series:

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}


// Program to check if a number is Armstrong number:

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Store the number of digits in n
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


// Program to reverse a number:

#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}


// Program to find the largest element in an array:

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element: %d\n", max);

    return 0;
}


// Program to find the sum of elements in an array:

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}


// Program to find the factorial of a number:

#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}


// Program to check if a number is prime:
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


// Program to calculate the area of a circle:
#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Invalid radius. Please enter a non-negative value.\n");
    } else {
        area = PI * radius * radius;
        printf("Area of the circle with radius %.2lf = %.2lf\n", radius, area);
    }

    return 0;
}


// Program to calculate the Fibonacci sequence:
#include <stdio.h>

int main() {
    int n, i, term1 = 0, term2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%d, ", term1);
            continue;
        }
        if (i == 2) {
            printf("%d, ", term2);
            continue;
        }
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
        printf("%d, ", nextTerm);
    }

    return 0;
}


// Program to reverse a number:
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}


// Program to find the greatest common divisor (GCD) of two numbers:
#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, findGCD(num1, num2));

    return 0;
}


// Program to check if a string is a palindrome:
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}


// Program to calculate the power of a number using recursion:
#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1.0 / power(base, -exponent);
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}


// Program to find the roots of a quadratic equation:
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}


// Program to perform matrix multiplication:
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
    } else {
        int a[r1][c1], b[r2][c2], result[r1][c2];

        printf("Enter elements of the first matrix:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of the second matrix:\n");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        // Perform matrix multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("Resultant matrix:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}


// Program to print a half pyramid pattern using asterisks:

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


// Program to print a right-angled triangle pattern using numbers:

#include <stdio.h>

int main() {
    int rows, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}


// Program to print a hollow rectangle pattern using asterisks:

#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


// Program to print a mirrored right-angled triangle pattern using asterisks:
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


// Program to print a butterfly pattern using asterisks:
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        int spaces = 2 * (rows - i);
        for (int k = 1; k <= spaces; k++) {
            printf("  ");
        }
        for (int l = 1; l <= i; l++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        int spaces = 2 * (rows - i);
        for (int k = 1; k <= spaces; k++) {
            printf("  ");
        }
        for (int l = 1; l <= i; l++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


// Program to find the largest element in an array:
#include <stdio.h>

int main() {
    int arr[100], n, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element: %d", max);

    return 0;
}

// Program to check if a number is prime or not:
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


// Program to find the greatest common divisor (GCD) of two numbers:
#include <stdio.h>

int findGCD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, findGCD(num1, num2));

    return 0;
}

// Program to find the LCM (Least Common Multiple) of two numbers:
#include <stdio.h>

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, findLCM(num1, num2));

    return 0;
}

// Program to find the sum of natural numbers using recursion:
#include <stdio.h>

int sumOfNaturalNumbers(int num) {
    if (num == 1) {
        return 1;
    }
    return num + sumOfNaturalNumbers(num - 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of first %d natural numbers = %d\n", num, sumOfNaturalNumbers(num));
    }

    return 0;
}


// Program to check if a string is a palindrome:
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}

// Program to find the area of a circle:
#include <stdio.h>
#define PI 3.14159265359

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Please enter a non-negative radius.\n");
    } else {
        printf("Area of the circle = %.2lf square units\n", calculateArea(radius));
    }

    return 0;
}

// Program to find the LCM of two numbers:
#include <stdio.h>

int findLCM(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Both numbers should be positive.\n");
    } else {
        int lcm = findLCM(num1, num2);
        printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    }

    return 0;
}


// Program to calculate the power of a number:
#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    return 0;
}


// Program to check if a number is prime:
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Number should be positive.\n");
    } else {
        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}


// (addition, subtraction, multiplication, division):
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}


// ATM program in C 
#include <stdio.h>

float balance = 1000.0; // Initial account balance

void displayMenu() {
    printf("\nATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

int main() {
    int choice;
    float amount;

    printf("Welcome to the ATM!\n");

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the deposit amount: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited $%.2f successfully.\n", amount);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;
            case 3:
                printf("Enter the withdrawal amount: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn $%.2f successfully.\n", amount);
                } else if (amount <= 0) {
                    printf("Invalid amount. Please enter a positive value.\n");
                } else {
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM!\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}


// student marksheet program in C
#include <stdio.h>

// Structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming 5 subjects
    float totalMarks;
    float percentage;
    char grade;
};

// Function to calculate total marks, percentage, and grade
void calculateResult(struct Student *student) {
    student->totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        student->totalMarks += student->marks[i];
    }

    student->percentage = (student->totalMarks / 500.0) * 100;

    if (student->percentage >= 90) {
        student->grade = 'A';
    } else if (student->percentage >= 80) {
        student->grade = 'B';
    } else if (student->percentage >= 70) {
        student->grade = 'C';
    } else if (student->percentage >= 60) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}

int main() {
    struct Student student;

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
    }

    calculateResult(&student);

    printf("\n--- Marksheet ---\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Total Marks: %.2f\n", student.totalMarks);
    printf("Percentage: %.2f%%\n", student.percentage);
    printf("Grade: %c\n", student.grade);

    return 0;
}
