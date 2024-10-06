#include <stdio.h>
void main (void)
{
    int x,y,p;
    printf("enter r=the value of x and y: ");
    scanf("%d%d",&x,&y);
    p=x+y;
    printf("sum of x and y=%d",p);
}
git init
git add .
git commit -m "my first code in c"
git branch -M main
git remote add origin https://github.com/mrmanaskumar/c-language.git
git push -u origin main