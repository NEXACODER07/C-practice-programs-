#include<stdio.h>
int main()
{
    int n, d;
    printf("Enter row number : ");
    scanf("%d", &n);
    printf("Enter coloms number : ");
    scanf("%d", &d);
    for (int i = 1; i <=n; i++)
    {for (int j = 1; j<=d; j++)
    {
        if(i==1 || i == n || j == 1 || j == d){
            printf("*"); } 
        else { printf(" "); }
    }
    printf("\n");
        
    }
    
    return 0;
}
