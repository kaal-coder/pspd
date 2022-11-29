#include <stdio.h>
#include <math.h>
#define RHO 1.23
void drag(double*, double, double, double);
void main()
{
    int V;
    double CD, A, F;
    
    printf("\nEnter the area: ");
    scanf("%lf", &A);
    printf("\nEnter the drag co-efficient: ");
    scanf("%lf", &CD);
    
    printf("\n\nVelocity %9c Force", ' ');
    
    for(V = 0; V <= 40; V += 5)
    {
        drag(CD, A, V, &F);
        printf("\n%d m/s %8c %.2f N", V, ' ', F);
    }
    printf("\n");
}

void drag(double *F, double CD, double A, double V)
{
    *F = 0.5 * CD * A * RHO * pow(V, 2);
}
