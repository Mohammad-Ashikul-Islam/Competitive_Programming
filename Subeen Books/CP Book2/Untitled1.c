#include<stdio.h>
#include<string.h>
typedef struct{
   char first[20]; char last[20];
}nametype;
typedef struct{
    int id; nametype name; char grade[3];
}studenttype;
void calculate_grade(studenttype* s, int m)
{
    if(m>=80) strcpy(s->grade,"A+");
    else if(m>=70) strcpy(s->grade,"A");
     else if(m>=60) strcpy(s->grade,"A-");
      else if(m>=50) strcpy(s->grade,"B");
       else if(m>=40) strcpy(s->grade,"C");
        else strcpy(s->grade,"F");
}
int main()
{
    int marks[]={72, 82, 60, 20, 50};
    int i,n=5; studenttype student[5];
    for(i=0; i<n; i++){
        printf("Enter The Id For Student %d: ",i+1);
        scanf("%d",&student[i].id);
        printf("Enter The First Name For Student %d: ",i+1);
        scanf(" %[^\n]",student[i].name.first);
        printf("Enter The Last Name For Student %d: ",i+1);
        scanf("%s",student[i].name.last);

        printf("\n");
    }
    for(i=0; i<n; i++){calculate_grade(&student[i],marks[i]); }
    for(i=0; i<n; i++){
        printf("Name: %s %s\n",student[i].name.first, student[i].name.last);
        printf("Grade: %s\n",student[i].grade);
    }
    return 0;
}
