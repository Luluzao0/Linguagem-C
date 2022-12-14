#include <stdio.h>
#include <stdlib.h>
#include <lapacke.h> // tem que installar esse pacote de Algebra Linear para C

int main()
{
    // Matrix A
    double a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Vector b
    double b[3] = {1, 2, 3};

    // Solution vector x
    double x[3];

    // Matrix A and vector b
    lapack_int n = 3;
    lapack_int nrhs = 1;
    lapack_int lda = 3;
    lapack_int ldb = 3;

    // Solve the linear system
    int status = LAPACKE_dgesv(LAPACK_ROW_MAJOR, n, nrhs, *a, lda, *ipiv, *b, ldb);

    // Check if the solution is successful
    if (status == 0)
    {
        // Print the solution vector x
        printf("Solution vector x: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%f\n", x[i]);
        }
    }
    else
    {
        // Print an error message
        printf("Error: The system of equations could not be solved.\n");
    }

    return 0;
}
