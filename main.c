#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double circumstance(double rad);
double area(double rad);

//global var to use with other functions as well.
const double pi=3.14159;

//main function
int main()
{
   //program to calculate circumference and area
   int i, k = 1;
   double radius;
   char choice;

   //for continueous dialouge
   while (k > 0)
   {
       //offer a selection to continue or exit (boolean)
       printf("\nPress [1] to continue or press [0] to exit\n");
       scanf("%d", &i);

       //if i is 1 then continue
       if (i == 1)
       {
            // read the radius
            printf("\nEnter the radius of the circle: ");
            scanf("%lf",&radius);

            //offer a selection to find circumstance,area or both
            printf("\n\nDo you want to find the Circumference or Area of the circle?\n");
            printf("\nCircumference press [C]  \nArea press [A] \nBoth [B]\n\n");
            scanf("%s", &choice);


            if (choice == 'C' || choice == 'c')
            {
               printf("\nThe circumference : %.2f\n", circumstance(radius));
            }

            else if(choice == 'A' || choice == 'a')
            {
               printf("\nThe area : %.2f\n", area(radius));
            }

            else if(choice == 'B' || choice == 'b')
            {
                printf("\nThe circumference : %.2f\nThe area : %.2f\n", circumstance(radius), area(radius));
            }

            else
            {
               printf("\nOOPS! Re-check your selection\n");
               continue; //back to the top
            }
       }

       //if i is 0 then exit
       else if (i == 0)
       {
           exit(0);
           break;
       }

       //if i is else then back to the top
       else
       {
         printf("\nOOPS! Re-check your selection\n");
         continue; //back to the top
       }


        k++;
   }


    return 0;
}


//function to calculate the circumstance
double circumstance(double rad)
{
    double circ;

    circ = 2*pi*rad;

    return circ;
}


//function to calculate the are
double area(double rad)
{
    double area;

    area = pi * pow(rad, 2);

    return area;
}
