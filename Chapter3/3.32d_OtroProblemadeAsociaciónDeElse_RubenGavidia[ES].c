/*3.32 (Otro problema de asociaci�n de else.) Modifique el siguiente c�digo para producir la salida que aparece a continuaci�n.
Utilice las t�cnicas de sangrado apropiadas. No debe hacer cambio alguno que no sea el de insertar llaves.
El compilador ignora el sangrado de un programa. Eliminamos el sangrado del siguiente c�digo para hacer m�s interesante
el problema. [Nota: Es posible que no sea necesario hacer modificaciones.]
if ( y == 8 )
if ( x == 5 )
printf( �@@@@@\n� );
else
printf( �#####\n� );
printf( �$$$$$\n� );
printf( �&&&&&\n� );
a) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
========================================================================================================
@@@@@
$$$$$
&&&&&
=================================================================================================================
b) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
==================================================================================================================
@@@@@
==================================================================================================================
c) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
==================================================================================================================
@@@@@
&&&&&
==================================================================================================================
d) Si suponemos que x = 5 y y = 7, se produce la siguiente salida. [Nota: Las �ltimas tres instrucciones printf
son parte de una instrucci�n compuesta.]
==================================================================================================================
#####
$$$$$
&&&&&
================================================================================================================== */
#include<stdio.h>

int main(){
    
    int y=7,x=5;
  
    if ( y == 7 ){
        if ( x != 5 ){  
        printf("@@@@@\n");
        }
    else {printf( "#####\n" ); 
    printf( "$$$$$\n" ); 
    printf( "&&&&&\n" );
   }
    }
}
