#include<stdio.h>
int sumDigit(long long int num);
int main()
{
    long long int num,ans;
    while((scanf("%lld",&num))&&num!=0)
    {
        if(num<=9)
            printf("%lld\n",num);
        else
        {
           ans=sumDigit(num);
           printf("%lld\n",ans);
        }
    }
}
int sumDigit(long long int num)
{
    long long int r=0,sum=0;
    if(num>9)
    {
      while(num>0){
       r=num%10;
       num/=10;
       sum+=r;
       }
       num=sum;
       sumDigit(num);
    }
    return num;
}
