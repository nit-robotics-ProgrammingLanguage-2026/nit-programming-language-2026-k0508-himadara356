#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    int a;
    int b;
    int c;
    char x[16];
    x[0] ='\0';
    scanf("%d", &n);
    a = n%3;
    b = n%5;
    c = n%7;
    /* TODO: 課題0508 */
    if (n<0)
    {
     printf("Error");
    }
    else if (n==0)
   { 
     printf("No");
   }
    else if (n<=0)
{
    if (a==0)
    {
      strcat(x, "Up");
    }
    if (b==0)
    {
      strcat(x, "GO");
    }
    if (c==0)
    {
      strcat(x, "!!");
    }
    if (!(a==0||b==0||c==0))
    {
      strcat(x, "NG");
      printf(x);
    }
    printf(x);
}
    return 0;
}
