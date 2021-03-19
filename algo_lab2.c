#include <stdio.h>
#include<stdlib.h>
int main(){

  int mas[10], i;
  int sum = 0;
  for (i = 0; i < 10; i++)
  {
  printf ("Enter elem: ");
  scanf("%d", &mas[i]);
  }
  for (i = 0; i < 10; i++){
  if (i%2 == 0){
    sum = sum + mas[i];
    }
  }
  printf("Enter sum: %d", sum);
  return 0;
}
