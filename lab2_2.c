#include <stdio.h>
int main ()
{
   char proAB ;
   float time,a=199.00,b=299.00,f,s ;

    scanf("%c",&proAB);
    scanf("%f",&time);

  if (proAB=='A')
  {
     if (200>=time)
       {
         printf("%.2f",a);
       }
     else if (time>200)
       {
         time=time-200;
         s=time*60;
         f=s*(3.00/60.00);
         a=a+f;
         printf("%.2f",a);
       }

  }
 if (proAB=='B')
  {
     if (400>=time)
       {
         printf("%.2f",b);
       }
     else if (time>400)
       {
         time=time-400;
         s=time*60;
         f=s*(2.00/60.00);
         b=b+f;
         printf("%.2f",b);
       }


  }
   return 0;
}
