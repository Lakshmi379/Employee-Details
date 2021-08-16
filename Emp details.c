#include<stdio.h>
struct employee
{
	int age,phonenumber,salary;

	char name[20];
}
emp[100];

int main()
{
	int i,n;
	printf("Enter the no of employees:\n");
	scanf("%d",&n);
	printf("Enter employee name,age,phone number,salary:\n");
	for(i=0;i<n;i++)
	{
	scanf("%s  %d       %d           %d",&emp[i].name,&emp[i].age,&emp[i].phonenumber,&emp[i].salary);
    }
    printf("\nEmp_NAME\tEmp_AGE\t\tEmp_PHONENO.\tEmp_SALARY\n");
    for(i=0;i<n;i++)
    {
    printf("%s\t\t%d\t\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].phonenumber,emp[i].salary);
	}
}
