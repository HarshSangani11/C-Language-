#include<stdio.h>
struct  employee{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int experience;
    char company[100];
}s[100];

main(){
    int n;
    printf("Enter size of an Array:");
    scanf("%d",&n);
    

    for(int i=0;i<n;i++){
        printf("Enter ID:");
        scanf("%d",&s[i].id);

         printf("Enter NAME:");
        scanf("%s",&s[i].name);

         printf("Enter AGE:");
        scanf("%d",&s[i].age);

        printf("Enter ROLE:");
        scanf("%s",&s[i].role);

        printf("Enter CITY:");
        scanf("%s",&s[i].city);

        printf("Enter EXPERIENCE:");
        scanf("%d",&s[i].experience);

        printf("Enter COMPANY NAME:");
        scanf("%s",&s[i].company);
    }

    for(int i=0; i<n;i++){
        printf(" ID:%d\n NAME:%s\n AGE:%d\n ROLE:%s\n CITY:%s\n EXPERIENCE:%d\n COMPANY NAME:%s\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].experience,s[i].company);
    }

}