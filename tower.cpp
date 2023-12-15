#include<stdio.h>
void tower(int n, char s,char d,char a){
	if (n==1){
		printf("Move disk 1 from %c to %c\n", s, d);
        return;
    }
        tower(n-1,s,a,d);
		printf("Move disk from %d to %c \n" ,n, s, d);
		tower(n-1,a,d,s);
}
int main() {

   
	int numdisk;
	printf("Enter dsk no.");
	scanf("%d",&numdisk);
	tower(numdisk,'A','C','B');
	return 0;
   }


