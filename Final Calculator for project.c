#include <stdio.h>
#include <math.h>
#include <stdlib.h>  // Include for exit()

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void SIN();
void COS();
void TAN();

int main()
{
    printf("\n\tScientific Calculator\n\n");
    int choice;

    while (1)
    {
        printf("\nSelect an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Factorial\n");
        printf("7. Power\n");
        printf("8. Square\n");
        printf("9. Cube\n");
        printf("10. Square Root\n");
        printf("11. SIN (in degrees)\n");
        printf("12. COS (in degrees)\n");
        printf("13. TAN (in degrees)\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulus();
            break;
        case 6:
            factorial();
            break;
        case 7:
            power();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 11:
            SIN();
            break;
        case 12:
            COS();
            break;
        case 13:
            TAN();
            break;
        case 0:
            printf("Exiting the calculator. Thank you!\n");
            exit(0);
        default:
            printf("Invalid choice! Please enter a valid operation.\n");
        }
    }
    return 0;
}

// Function to perform addition
void addition()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Sum = %.2lf\n", a + b);
}

// Function to perform subtraction
void subtraction()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Difference = %.2lf\n", a - b);
}

// Function to perform multiplication
void multiplication()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Product = %.2lf\n", a * b);
}

// Function to perform division
void division()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    printf("Division = %.2lf\n", a / b);
}

// Function to perform modulus
void modulus()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b == 0)
    {
        printf("Error: Modulus by zero is not allowed.\n");
        return;
    }
    printf("Modulus = %d\n", a % b);
}

// Function to calculate factorial
void factorial()
{
    int n, i;
    unsigned long long fact = 1; // Use a larger data type for bigger numbers

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d = %llu\n", n, fact);
}

// Function to calculate power
void power()
{
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("Result = %.2lf\n", pow(base, exponent));
}

// Function to calculate square
void square()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square = %.2lf\n", pow(num, 2));
}

// Function to calculate cube
void cube()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Cube = %.2lf\n", pow(num, 3));
}

// Function to calculate square root
void squareroot()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num < 0)
    {
        printf("Error: Square root of a negative number is not real.\n");
        return;
    }
    printf("Square Root = %.2lf\n", sqrt(num));
}

// Function to calculate sine (in degrees)
void SIN()
{
    double degree;
    printf("Enter angle in degrees: ");
    scanf("%lf", &degree);
    double radian = degree * M_PI / 180.0;
    printf("SIN(%.2lf) = %.2lf\n", degree, sin(radian));
}

// Function to calculate cosine (in degrees)
void COS()
{
    double degree;
    printf("Enter angle in degrees: ");
    scanf("%lf", &degree);
    double radian = degree * M_PI / 180.0;
    printf("COS(%.2lf) = %.2lf\n", degree, cos(radian));
}

// Function to calculate tangent (in degrees)
void TAN()
{
    double degree;
    printf("Enter angle in degrees: ");
    scanf("%lf", &degree);
    double radian = degree * M_PI / 180.0;

    // Check for undefined values (tan(90) and tan(270) are undefined)
    if (((int)degree % 180) == 90)
    {
        printf("Error: TAN(%lf) is undefined.\n", degree);
        return;
    }
    printf("TAN(%.2lf) = %.2lf\n", degree, tan(radian));
}
