//5
//1 2 3 4 5
//61

#include<stdio.h>
int main()
{
  int n,i;
  int sum=0;
  scanf("%d",&n);
    int a[n-1];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
 if(n<3)
 {
   if(n==0)
   {
     sum=0;
   }

   else if(n==1)
      {
        sum=a[0];
      }

      else
      {
        sum=sum+(a[0]*a[1]);
        a[0]=a[1];
        a[1]='\0';
        sum=sum+a[0];
      }

      }
      else
      {
  for(i=1;i<n-1;i=i)
  {
    sum=sum+((a[n-2]*a[n-1])+a[n-3]);
    a[n-2]=a[n-1];
      a[n-1]='\0';
      n--;
  }
    sum=sum+(a[0]*a[1]);
    a[0]=a[1];
    a[1]='\0';
    sum=sum+a[0];
}
      printf("%d",sum);
      return 0;
      }
