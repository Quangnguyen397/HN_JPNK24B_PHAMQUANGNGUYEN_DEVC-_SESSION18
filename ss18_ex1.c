#include<Stdio.h>



int main(){
	struct student{
		char name[50];
		int age;
		char phone[12];
	};
	struct student user01;
	printf("nhap ten : ");
	fgets(user01.name,sizeof(user01.name),stdin);
	printf("nhap tuoi : ");
	scanf("%d",&user01.age);
	fflush(stdin);
	printf("nhap sdt : ");
	fgets(user01.phone,sizeof(user01.phone),stdin);
	printf("\nho va ten : %s",user01.name);
	printf("\ntuoi : %d",user01.age);
	printf("\nsdt : %s",user01.phone);
	return 0;
	
}
