#include<stdio.h>
//#include<conio.h>
int main()
{
 int d1,d2,m1,m2,y1,y2;
 //clrscr();
   printf("\t\t\t\t AGE CALCULATOR \n\n\n");

   printf("Enter your DOB in(dd/mm/yyyy) :");
   scanf("%d%d%d",&d1,&m1,&y1);

   printf("\nEnter your current date in(dd/mm/yyyy):");
   scanf("%d%d%d",&d2,&m2,&y2);
     if(d2>=d1)
      {
       d2=d2-d1;
      }
       else{
	   m2--;
	   d2=d2+30;
	   d2=d2-d1;
	   }
     if(m2>=m1)
     {
     m2=m2-m1;
     }
	else{
	    y2--;
	    m2=m2+12;
	    m2=m2-m1;
	    }
       y2=y2-y1;

   printf("your age : %d year",y2);
   printf("\n \t %d month",m2);
   printf("\n \t %d day",d2);
   m2=11-m2;
   d2=31-d2;
   printf("\n\n Happy birthday ");
   printf("\n remaining months:%d",m2);
   printf("\n remaining days:%d",d2);
  return 0;
}
