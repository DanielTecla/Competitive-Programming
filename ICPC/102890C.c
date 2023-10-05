#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,v,h;
    long long total=0;
    scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));

    for(int j = 1; j <= n; j++){
        scanf("%d %d",&v,&h);
        v+=1;
        h+=1;
        for(int k = 1; k <= v; k++)
            total += (k%1000000007);
            
        total *= h; 
        
        *(arr+j-1) = total; 
        total = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(arr+i));
    }
    
    free(arr);
}