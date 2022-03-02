#include<stdio.h>

int UsAl(int taban, int us)
{
	if(us==1)
	{
		return taban;
	}
	return taban*UsAl(taban,us-1);
}



int main(){
	int taban,us;
	printf("Taban degerini giriniz : ");
	scanf("%d",&taban);
	printf("Us degerini giriniz : ");
	scanf("%d",&us);
	printf("%d'in/un kuvveti : %d",taban,UsAl(taban,us));
	return 0;
}
