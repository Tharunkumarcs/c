#include <stdio.h>
#include <conio.h>
int main(){
	int num1,num2,result,i;
	printf("Enter the lowest limit :");
	scanf("%d",&num1);
	printf("Enter the highest limit :");
	scanf("%d",&num2);
	for(i=num1+1;i<num2;i++){
		result = i % 2;
		if(result != 0)
			continue;
		
		else
			printf("\n%d",i);
	}
	
	return 0;
}
