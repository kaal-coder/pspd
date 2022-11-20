#include<stdio.h>




void draw_rect()
{

 printf(" ------- \n");
 
 printf("|       |\n|       |\n|       |\n|       |\n");

 printf(" -------  \n"); 
 }
 void intersect()
 {
 printf("  / \\ \n"); /* Use 2 \'s to print 1 */
printf(" /   \\ \n");
printf("/     \\\n");
 }
 void draw_triangle(void) 
{

intersect();
printf("\n");

}
void
draw_circle(void)
{
printf("    *    \n");
printf("  *   *\n");
printf("    **   \n");

}
void space(){

printf("\n\n\n\n");}

int main(void)
{
 draw_triangle();
 draw_rect();
 intersect();
 space();
 draw_circle();
 draw_rect();
 intersect();
 space();
 draw_circle();
 draw_rect();
 draw_triangle();
 
 
 
 
}
