//week02-1a.cpp
//(SOIT106_ADVANCE_001)using c
# include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);

    int ans=0;
    while(a>0){
     ans=ans*10+a%10;
     a=a/10;
     }
     printf("%d",ans);
     }
