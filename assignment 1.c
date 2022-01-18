#include<stdio.h>
void unionof()
{
    int m,n,i,j,s;
     printf("entr no of 1st&2nd array elements resp==\n");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("a1===\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("array b==\n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("\nunion of array=== {");
    for(i=0;i<m;i++)
    printf("%d  ",a[i]);
    for(j=0;j<n;j++)
    {   s=1;
        for(i=0;i<m;i++)
        {
            if(a[i]==b[j])
           { s=0;
            break;}
        }
        if(s==1)
        printf(" %d ",b[j]);
    }
    printf(" }\n");
}
void differene()
{
  int m,n,i,j,s;
     printf("entr no of 1st&2nd array elements resp==\n");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("a1===\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("array b==\n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("difference of a-b sets== { ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {  s=1;
        if(a[i]==b[j])
        {
          s=0;
          break;
        }
      }
      if(s==1)
      printf("%d ",a[i]);
    }
    printf(" }\n");
    printf("difference of b-a sets== { ");
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {  s=1;
        if(a[j]==b[i])
        {
          s=0;
          break;
        }
      }
      if(s==1)
      printf("%d ",b[i]);
    }
    printf(" }\n");
}
void inter()
{
     int m,n,i,j;
     printf("entr no of 1st&2nd array elements resp==\n");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("a1===\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("array b==\n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("\nintersection of two arrays are== {");
    for(i=0;i<m;i++)
    {  // s=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf(" %d ",a[i]);
                
            }
        }
       // if(s==1)
    }
    printf(" }\n");
}
void symetric_dif()
{
  int m,n,i,j,s;
    printf("entr no of 1st&2nd array elements resp==\n");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("a1===\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("array b==\n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("symmetric difference of sets is== {");
    for(i=0;i<m;i++)
    { s=1;
      for(j=0;j<n;j++)
      {
        if(a[i]==b[j])
        {
          s=0;
          break;
        }
      }
      if(s==1)
      printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    { s=1;
      for(j=0;j<m;j++)
      {
        if(a[j]==b[i])
        {
          s=0;
          break;
        }
      }
      if(s==1)
      printf("%d ",b[i]);
    }
    printf("}\n");
}
int main ()
{   int i;
    do
    {
    printf("\nwhich operation u have to perpform==\n");
    printf("1.union\n2.intersection\n3.difference\n4.symmetric difference\n0.exit\n");
    scanf("%d",&i);
    if(i==0)
    break;
    switch(i)
    {
        case 1:
        unionof();
        break;
        case 2:
        inter();
        break;
        case 3:
        differene();
        break;
        case 4:
        symetric_dif();
        break;

    }
    }
    while(i!=0);
    return 0;
}
