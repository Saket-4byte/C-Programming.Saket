// #include <stdio.h>
// #include<string.h>
// int main(){
//     typedef struct cricketer{
//         char firstname[15];
//         char lastname[15];
//         int age;
//         int noOfmatches;
//         float average;
//     } cricketer;

//     // 3 cricketers
//     cricketer arr[3];
//     for(int i=0;i<3;i++){
//         scanf("%s",arr[i].firstname);
//         scanf("%s",arr[i].lastname);
//         scanf("%d",&arr[i].age);
//         scanf("%d",&arr[i].noOfmatches);
//         scanf("%f",&arr[i].average);
//     }
//     printf("\n");
//      for(int i=0;i<3;i++){
//         printf("Name: %s %s\n",arr[i].firstname,arr[i].lastname);
//         printf("Age: %d\n",arr[i].age);
//         printf("Number of matches played: %d\n",arr[i].noOfmatches);
//         printf("Average: %f\n\n",arr[i].average);
//     }
//     return 0;
// }
#include <stdio.h>
#include<string.h>
int main(){
    struct employee{
        char name[25];
        int id;
        int age;
    } employee;
    struct employee arr[5];
    for(int i=0;i<5;i++){
        printf("enter the details of employee %d\n",i+1);
        printf("enter the employee name\n");
        scanf("%s",arr[i].name);
        printf("enter the employee id\n");
        scanf("%d",&arr[i].id);
        printf("enter the employee age\n");
        scanf("%d",arr[i].age);
        printf("\n");
    }

    printf("Employee name\tEmployee id\tEmployee.age\n");
    printf("------------------------------------------------\n");
    for(int i=0;i<5;i++){
        printf("%s\t\t\t%d\t\t%d\n",arr[i].name,arr[i].id,arr[i].age);
    }
   
    return 0;
}