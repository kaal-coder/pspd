#include<stdio.h>
#include<math.h>
void cacl(double n, double *lg, double *ng){
    *lg = 1.0;
    while(1){
        *ng = 0.5 * (*lg+(n/(*lg)));
        double diff =fabs( *ng - *lg);
        if(diff<=0.005){
            break;
        }
      *lg=*ng;
    }
}
int main(){
    double n, lg, ng;
    printf("Enthe a number: ");
    scanf("%lf", &n);
    cacl(n, &lg, &ng);
    printf("Square root:%f\n",ng);
    return 0;
}
