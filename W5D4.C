#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{

 float e, f, g, h, x, q, c, t; // E F G H = Numeri da inserire, X = media decimale, Q C T = Figure a numero intero
 int y, qi, ci, ti; // Aree con cifra intera, X = Media intera

 printf ("Inserire i quattro valori \n");
 scanf ("%f", &e);
 scanf ("%f", &f);
 scanf ("%f", &g);
 scanf ("%f", &h);

 x = (e+f+g+h)/4 ;
 y = (int) x ;
 printf ("Media aritmetica con cifra intera: %d\n", y) ;
 printf ("Media aritmetica con cifra decimale %f\n", x) ;
 

 /* Area del quadrato */
 q = x*x ;
 qi = y*y ;
 printf ("Area quadrato con cifra intera: %d\n", qi) ;
 printf ("Area quadrato con cifra decimale: %f\n", q) ;

 /* Area del cerchio */
 c = M_PI *(x*x) ;
 ci = M_PI *(y*y) ;
 printf ("Area cerchio con cifra intera: %d\n", ci) ;
 printf ("Area cerchio con cifra decimale: %f\n", c) ;

 /* Area del triangolo */
 t =  (1.73/4)*(x*x) ;
 ti = (1.73/4)*(y*y) ;
 printf ("Area triangolo con cifra intera: %d\n", ti) ;
 printf ("Area triangolo con cifra decimale: %f\n", t) ;

 return 0;
}