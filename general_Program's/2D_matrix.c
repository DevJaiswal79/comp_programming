//working on 2D Matrix

#include<stdio.h>
void main()
{
     int a[3][3], b[3][3], c[3][3];int i,j;
     printf("enter input in array a\n");
     for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);}
     printf("array a=\n");
     for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");}
    printf("enter input in array b\n");
    for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);}
     printf("array b=\n");
     for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            printf("%d\t",b[i][j]);
        printf("\n");}
    printf("sum of matrix a and b\n");
    for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];}
    printf("array c=\n");
     for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);
            printf("\n");}
    printf("transpose of a matrix a\n=");
    for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            printf("%d\t",a[j][i]);
            printf("\n");}
    printf("\ntrace of matrix a=\t");
    int sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
        if(i==j){
                sum+=a[i][j];}}
            printf("%d",sum);
    printf("\ntrace of matrix b=\t");
    int sum1=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
        if(i==j){
                sum1+=b[i][j];}}
            printf("%d",sum1);
    printf("\ntrace of matrix c=\t");
    int sum2=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
        if(i==j){
                sum2+=c[i][j];}}
            printf("%d\n",sum2);


}
