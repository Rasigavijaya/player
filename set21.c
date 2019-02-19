#include<stdio.h>
void main()
{
 int x1,x2,x3,y1,y2,y3;
 scanf("%d%d",&x1,&y1);
 scanf("%d%d",&x2,&y2);
 scanf("%d%d",&x3,&y3);
 if((x1==x2==x3)||(y1==y2==y3))
 {
 printf("yes");
 }
 else
 {
 printf("No");
 }
}
