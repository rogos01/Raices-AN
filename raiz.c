#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Letrero.h"

void Letrero();
int main(){
    Letrero();
    float a,b,c,d,i,y,m1,m2,x1,x2;
    printf("\nDame los valores de la ecuacion de tipo Ax^2 + Bx + C\n");
    printf("\nDame el termino A: ");
    scanf("%f",&a);
    printf("\nDame el termino B: ");
    scanf("%f",&b);
    printf("\nDame el termino C: ");
    scanf("%f",&c);
    d=((b*b)-4*a*c);
    if(d<0){
        printf("\nLa raiz es imaginaria\n");
        i=-1*d;
        y=sqrt(i);
        x1= (-b/2*a);
        m1=+y/2*a; 
        x2=(-b/2*a);
        m2=-y/2*a;
        printf("Las raices de la funcion son %.4f %.4fi y %.4f %.4fi\n", x1,m1,x2,m2);
    }
    else{
        y=sqrt(d);
        //y= sqrt((b*b)-4*a*c);
        x1= (-b+y)/(2*a);
        x2= (-b-y)/(2*a);
        printf("Las raices de la funcion son %.4f y %.4f\n", x1,x2);
    }
    system("pause");
    return 0;
}