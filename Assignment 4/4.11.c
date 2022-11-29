#include <stdio.h>

int within_x_percent(double ref,double observed,double percent){
             double upper,lower;
             upper = ref + (0.01 * percent * ref);
             lower = ref - (0.01 * percent * ref);
             if(observed >= lower && observed <= upper){
                    return 1;
             } else{
                    return 0;
             }  
       }
int main(){
       double obs_bpt,x=5;
       printf("Enter observed boiling point of a substance in C >> ");
       scanf("%lf",&obs_bpt);
       
       if(within_x_percent(100,obs_bpt,x)){
               printf("Substance is Water");       
       }
       else if(within_x_percent(357,obs_bpt,x)){
               printf("Substance is Mercury.");       
       }
       else if(within_x_percent(1187,obs_bpt,x)){
               printf("Substance is Copper.");       
       }
       else if(within_x_percent(2193,obs_bpt,x)){
               printf("Substance is Silver.");       
       }
       else if(within_x_percent(2660,obs_bpt,x)){
               printf("Substance is Gold.");       
       }else
       {
               printf("Substance unknown.");
       
       }
}
