//Author: Karthik Madhav Jain kmj5614@psu.edu


#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int sum_n(int n);

int main(void) {
  int number,sum;
  const char *integer = readline("Enter an int: ");
  number = atoi(integer);
  sum = sum_n(number);
  printf("\nsum of digits of %s is %i.",integer,sum);
  return 0;
}

int sum_n(int n){
  int summation=0;
  summation = summation + (n%10);
  if((n/10)>0)
    summation = n%10 + sum_n(n/10);
    return(summation); 
  return (summation); 
}