#include<stdio.h>

int max(int a[],int n){
	int i,m=0,c=0;
	for(i=0;i<n;i++){
		if(i==n-1){
			if(a[i]==1){
				c++;
			}
			if(c>m){
					m=c;
			}
		}else{
			
			if(a[i]==1){
			c++;
			}else{
				if(c>m){
					m=c;
				}
				c=0;
			}
		}
		
	}
	return m;	
}

int main(){
	int a[100],n,i,m,j,x;
	printf("NUmber of cases");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter number of elements in array :- ");
		scanf("%d",&m);
		printf("Enter elements \n");
		for(j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		x = max(a,m);
		printf("max array size is %d \n", x);
	}
}
