#include <stdio.h>
#include <math.h>

int main (){
  double y;
  for (double x = 2; x <= 8; x += 0.08){
    //Вычисляем значение y
    y = ((2 * sin(x) - 4) / (sin(x + 8) * (cos(x - 4))));
    printf ("x = %lf y = %lf \n", x, y);
  }
return 0;
}
