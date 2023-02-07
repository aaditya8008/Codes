#include<stdio.h>
#include<string.h>

struct v1{
int x1;
int y1;

};
struct v2{
int x2;
int y2;

};
struct sum{
int x;
int y;

};

int main(){
struct v1 s1;
struct v2 s2;
printf("Enter X1,Y1:\n");
scanf("%d%d",&s1.x1,&s1.y1);
printf("Enter X2,Y2:\n");
scanf("%d%d",&s2.x2,&s2.y2);
struct sum s3;
s3.x=s1.x1 + s2.x2;
s3.y=s1.y1 + s2.y2;
printf("%d\n%d",s3.x,s3.y);
}


















