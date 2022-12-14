#include <stdio.h>
#include <math.h>

// Function to evaluate the derivative of a given function at a given point
double derivative(double (*f)(double), double x)
{
    // Set the step size
    double h = 0.00001;

    // Return the derivative using the definition of the derivative
    return (f(x + h) - f(x)) / h;
}

// Sample function to find the derivative of
double f(double x)
{
    return x * x;
}

int main()
{
    // Set the point at which to evaluate the derivative
    double x = 2;

    // Evaluate the derivative and print the result
    printf("The derivative of f(x) at x = %lf is %lf\n", x, derivative(f, x));

    return 0;
}
