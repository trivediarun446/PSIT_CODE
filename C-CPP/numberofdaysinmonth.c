// number of days in a month by using switch statement 
#include<stdio.h>
int main(){
    int a , b , c ,d ;

    printf("enter the number of days\n ");
    scanf ("%d",&a);

    switch (a)
    {
    case 31:
        printf("there are 7 month in year they consist 31 days\n");

           printf("enter the serial number of month\n");
           scanf("%d",&b);
           switch (b)
           {
           case 1:
               printf("JANUARY");
            break;
           case 3:
               printf("MARCH");
            break;
            case 5:
               printf("MAY");
            break;
            case 7:
               printf("JULY");
            break;
            case 8:
               printf("AUGUST");
            break;
            case 10:
               printf("OCTUBAR");
            break;
            case 12:
               printf("DECEMBAR");
            break;
           default:
            printf("enter correct number\n");
           break;
           }
      printf("enter the value of c\n");
      scanf("%d",&c);
   switch (c)
    {
    case 28:
       printf("FEB");
      break;
    
    default:
    break;
   } 
    
    //  sir july or frburaray sath me print kyu nh ho raha hai   
   switch (d)
   {
       printf("enter the value of c\n");
      scanf("%d",&d);
   case 30:
      printf("there are four month in a year they consist of 30 days\n ");
               printf("enter the serial number of month\n");
               scanf("%d",&c);
            switch (c)
           {
           case 4:
             printf("APRIL");
            break;
           case 6:
             printf("JUNE");
            break;
            case 9:
             printf("SEPTEMBAR");
            break;
            case 11:
             printf("NOVEMBAR");
            break;
           default:
            printf("please input correct value");
            break;
           }          
         
      default:
      break;
   }
    
return 0;

} 
}
