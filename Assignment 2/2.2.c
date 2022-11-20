#include<stdio.h>


void draw_triangle(void) 
{

printf("  / \\ \n"); /* Use 2 \'s to print 1 */
printf(" /   \\ \n");
printf("/     \\\n");
printf("------- \n");

}

void draw_rect()
{

 printf(" ---------------- \n");
 
 printf("|               |\n|               |\n|               |\n|               |\n");

 printf(" ---------------- \n"); 
 }
int main(void)
{
 
 draw_triangle();
 draw_rect();
 printf("\n\n");
 draw_triangle();
 draw_rect();
 
}
