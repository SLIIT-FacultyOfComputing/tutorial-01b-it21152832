/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1 , int no2);//declare prototype of minimum
int maximum(int no1 , int no2);//declare prototype of maximum
int multiply(int no1 , int no2);//declare prototype of multiply

int main() 
{
 int no1, no2; //variable declaration

 printf("Enter a value for no 1 : ");//input values for no1
 scanf("%d", &no1);

 printf("Enter a value for no 2 : ");//input values for no2
 scanf("%d", &no2);

 printf("MINIMUM = %d\n", minimum(no1, no2));//call minimum function
 printf("MAXIMUM = %d\n", maximum(no1, no2));//call maximum function
 printf("MULTIPLY = %d\n", multiply(no1, no2));//call multiply function

 return 0;

}

int minimum(int no1 , int no2)//pass minimum function
{
  if(no1<no2)
  {
    return no1;//return minimum value
  }
  else
  {
    return no2;//return minimum value
  }
   
      
}

int maximum(int no1 , int no2)//pass maximum function
{
    if(no1>no2)
  {
    return no1;//return maximum value
  }
  else
  {
    return no2;//return maximum value
  }
}

int multiply(int no1 , int no2)//pass multiply function
{
    int mul ;

    mul = no1 * no2;

    return mul ;//return multiply value 
}