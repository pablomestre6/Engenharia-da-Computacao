#include <stdio.h>


void multiplica (float a, float b, float c); /* Declaração da função que multiplica 3
números */
void main (void){
float x,y;
x=23.5;
y=12.9;
multiplica(x,y,3.87);
}
void multiplica(float a, float b,float c) { /* Multiplica 3 números */
printf ("%f",a*b*c);


}

