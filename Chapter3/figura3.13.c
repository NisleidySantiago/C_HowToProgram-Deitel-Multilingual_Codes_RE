/* Figura 3.13: fig03_13.c
Preincremeno y posincremento */

#include <stdio.h>
int main(){
int c;

c = 5;
printf( "%d\n", c );
printf( "%d\n", c++ ); 
printf( "%d\n\n", c );
c = 5;
printf( "%d\n", c);
printf( "%d\n",++c);
printf( "%d\n",c);

return 0; 
}