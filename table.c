#include <stdio.h>
//decleration
int table();
int A;
int main() {
    printf("enter the number :");
    scanf("%d",&A);
		table();   //call
	return 0;
}

//definition
int table(){
    int n=A;
    
	int a= n*1==n;
	printf("%dx1=%d\n",n,1*n);
	
	int b= n*2==2*n;
	printf("%dx2=%d\n",n,2*n);
	
	int c= n*3==3*n;
	printf("%dx3=%d\n",n,3*n);
	
	int d= n*4==4*n;
	printf("%dx4=%d\n",n,4*n);
	
	int e= n*5==5*n;
	printf("%dx5=%d\n",n,5*n);
	
	int f= n*6==6*n;
	printf("%dx6=%d\n",n,6*n);
	
	int g= n*7==7*n;
	printf("%dx7=%d\n",n,7*n);
	
	int h= n*8==8*n;
	printf("%dx8=%d\n",n,8*n);
	
	int i= n*9==9*n;
	printf("%dx9=%d\n",n,9*n);
	
	int j= n*10==10*n;
	printf("%dx10=%d\n",n,10*n);
		
}
