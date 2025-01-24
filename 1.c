#include <stdio.h>
int main ()
{
// Method 1
int a, b, temp;
printf("Enter the values you want to swap by Method 1:\n");
scanf("%d %d", &a, &b);
temp = b;
b = a;
a = temp;
printf("The swapped values by Method 1 are %d, %d\n", a, b);

// Method 2
int c, d;
printf("Enter the values you want to swap by Method 2:\n");
scanf("%d %d", &c, &d);
c = c + d;
d = c - d;
c = c - d;
printf("The swapped values by Method 2 are %d, %d\n", c, d);
}
