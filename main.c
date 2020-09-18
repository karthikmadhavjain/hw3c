//Author: Karthik Madhav Jain kmj5614@psu.edu


#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int digit_sum(int n);

int main(void) {
  int number,sum;
  const char *integer = readline("Enter an int: ");
  number = atoi(integer);
  sum = digit_sum(number);
  printf("sum of digits of %s is %i.",integer,sum);
  return 0;
}

int digit_sum(int n){
  int summation=0;
  summation = summation + (n%10);
  if((n/10)>0)
    summation = n%10 + digit_sum(n/10);
    return(summation); 
  return (summation); 
}