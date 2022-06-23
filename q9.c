/*Write a program to maintain a record of n employee detail using an array of
structures with three fields(id, name , salary) and print the details of employees whose
salary is above 5000.*/

#include<stdio.h>
struct employee
{
     int id;
     char ename[20];
     int salary;
}emp[10];
int main()
{
     int i,n;
     printf("How many employee info you want to accept? \n");
     printf("Enter Limit: ");
     scanf("%d",&n);
     printf("Enter details for %d employees: \n",n);
     for(i=0;i<n;i++)
     {
          printf("Employee  ID Number: ");
          scanf("%d",&emp[i].id);
          printf("Name : ");
          scanf("%s",emp[i].ename);
          printf("Salary : ");
          scanf("\n %d",&emp[i].salary);
     }
     printf("Details of employees whose salary is above 5000 :\n");
     for(i=0;i<n;i++)
     {
          if(emp[i].salary>5000)
          printf("\n %d\t%s\t%d",emp[i].id,emp[i].ename,emp[i].salary);
     }
     return 0;
}