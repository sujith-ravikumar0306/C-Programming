//STRUCTURES IN C :-

/*

//simple structure declaration and initialization and access

#include<stdio.h>

struct stu
{
    int rollno;
    char name[20];
    float cgpa;
};

void main()
{
    struct stu s1={40,"sujith",9.21};   //initializing during compile time.
    printf("Roll.no:%d\n",s1.rollno);
    printf("Name:%s\n",s1.name);
    printf("CGPA:%.2f\n",s1.cgpa);

    struct stu s2={40,"sujith",9.11};   //initializing during compile time.
    printf("Roll.no:%d\n",s2.rollno);
    printf("Name:%s\n",s2.name);
    printf("CGPA:%.2f\n",s2.cgpa);

    if(s1.cgpa==s2.cgpa){
        printf("Same CGPA!");
    }
    //else if(s1.rollno==s2.rollno){
     //   printf("Same roll.no!");
    //}
    else if(s1.name==s2.name){
        printf("Same name!");
    }
    else{
        printf("NO match!");
    }
}




//initializing and accessing structure during runtime

#include<stdio.h>

struct stu
{
    int rollno;
    char name[20];
    float cgpa;
}s[10];

void main()
{
    int n,i;
    printf("Enter total no of students:");
    scanf("%d",&n);
    printf("***************************");
    for(i=1;i<=n;i++)
    {
        printf("\nEnter details of student-%d",i);
        printf("\nEnter roll no:");
        scanf("%d",&s[i].rollno);
        fflush(stdin);
        printf("Enter name:");
        scanf("%s",&s[i].name);
        fflush(stdin);
        printf("Enter CGPA:");
        scanf("%f",&s[i].cgpa);
        fflush(stdin);
    }

    printf("*******Details entered***********");
    for(i=1;i<=n;i++)
    {
        printf("\nStudent-%d:",i);
        printf("\n---------");
        printf("\nRoll no:%d",s[i].rollno);
        printf("\nName:%s",s[i].name);
        printf("\nCGPA:%.2f",s[i].cgpa);
        printf("\n");
    }

}




//pointer to a structure

#include<stdio.h>

struct stud{
    int rollno;
    char name[20];
    float cgpa;
};

struct stud s={40,"sujith",9.21};

void main()
{
    struct stud *ptr=&s;                //pointer with same data type as that of structure
    printf("Name: %s",ptr->name);        // "ptr->member" is a way of accessing members through pointer
    printf("\nRoll.no: %d",(*ptr).rollno);//"(*ptr).member" tells to access the content of ptr which is the structure variable
    printf("\nCGPA: %f",ptr->cgpa);
    printf("\n\nSIZE OF STRUCTURE:%d",sizeof(s));
    printf("\nSIZE OF POINTER:%d",sizeof(ptr));6
}




//usage of typedef to give a synonym for structure datatype

#include<stdio.h>
typedef struct student{
    int rollno;
    char name[20];
    float cgpa;
} stu;      //the synonym given to data-type "struct student"

void main()
{

    stu s1={40,"sujith",9.21};   //typedef processed synonym used instead of actual data-type name
    printf("Roll.no:%d\n",s1.rollno);
    printf("Name:%s\n",s1.name);
    printf("CGPA:%.2f\n",s1.cgpa);
}



//structure padding - (automated by compiler) memory holes(memory wastage) to reduce fetching cycles(improved performance)

#include<stdio.h>

typedef struct abc{
    char a; //1-bytes for char, 3 paddings
    int b;  //4-bytes for int, 0 paddings
    char c; //1-bytes for char, 3 paddings
}stru1;//total size=12 bytes

typedef struct def{
    char d; //1-byte for char, followed by space for another char in same word
    char e; //1-byte for char, 2 paddings
    int f;  //4- bytes for int, 0 paddings
}stru2;//total size=8 bytes

void main()
{
    stru1 s1;
    stru2 s2;
    printf("Size of stru1= %d",sizeof(s1));
    printf("\nSize of stru2= %d",sizeof(s2));
}



//structure packing - removing the paddings(improve memory usage) by compiler and leading to more memory cycles (reduced performance)

#include<stdio.h>
#pragma pack(1)     //header file used to enable packing(disable automated paddings by compiler).

typedef struct abc{
    char a; //1-bytes for char, 3 paddings
    int b;  //4-bytes for int, 0 paddings
    char c; //1-bytes for char, 3 paddings
}stru1;//total size=12 bytes

typedef struct def{
    char d; //1-byte for char, followed by space for another char in same word
    char e; //1-byte for char, 2 paddings
    int f;  //4- bytes for int, 0 paddings
}stru2;//total size=8 bytes

void main()
{
    stru1 s1;
    stru2 s2;
    printf("Size of stru1= %d",sizeof(s1));
    printf("\nSize of stru2= %d",sizeof(s2));
}

*/
































































































































































