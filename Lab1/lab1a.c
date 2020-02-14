
#include <stdio.h>
main(){
    float i = 1;
  while (i != 0) {
    printf("Enter the measurements in inches: \n");
    scanf("%f", &i);
    i = i * 2.54;
    printf("%.2f cm \n", i);
  }
}
