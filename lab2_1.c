#include <stdio.h>
int main ()
{
   int a,b,c,d ;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

   if (((a>=0)&&(a<=30))&&(b>=0)&&(b<=30)&&(c>=0)&&(c<=40))
   {
       d=a+b+c;

   if (d>=80)
     printf ("A");
   else if (d>=75)
     printf ("B+");
   else if (d>=70)
     printf ("B");
   else if (d>=65)
     printf ("C+");
   else if (d>=60)
     printf ("C");
   else if (d>=55)
     printf ("D+");
  else if  (d>=50)
     printf ("D");
   else
     printf ("F");
   }


    return 0 ;
}
