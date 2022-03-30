#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

enum State{working=0, failed,freezed};

enum State CurrState = 2;
enum State FindState() {
    return CurrState;
}
int main(void) {
int a = 10;
float b = 2;
char c = "data";
printf("\n sizeof(a) = %d bytes",sizeof(a));
printf("\n sizeof(b) = %f bytes",sizeof(b));
printf("\n Address of a = %u amd b = %u",&a,&b);
printf("Testing .....");
printf("I like pizza\a\n");
printf("it'S realy good!\n");
char a[]="compile";
printf("process = %s\n",a);
int age = 20;
float gpa = 2.75;
char grade = 'B';
char name[] = "jordan";
bool n = false;
bool t = true;
char f = 45;
unsigned char z = 256;
printf("Your name is %s and your actual age is %d\n",name,age);
printf("YOur gpa is %f and and now your grade is %c\n",gpa,grade);
printf("%d\n",n);
printf("%c\n",f);
printf("Checking the variable is true : %d\n",t);

printf("Unsigned char : %d\n",z);
format specifier
%s = string (Array of characters)
%lf = double
%.1 = decimal precision
%1 = minimum feild width
%- = left align
float item1 = 2.67;
float item2 = 10.56;
float item3 = 15.90;
printf("item 1  = $%-f\n",item1);
printf("item 2  = %lf\n",item2);
printf("item 3  = %.2f\n",item3);
printf("item 1  = %13.2f",item1);

enum day {sunday =1 ,thuesday,wednesday,thursday,friday,saturday};
int main(void) {
    enum day d = thursday;
    printf("The day number day stored in d = %d",d);
(FindState() == working) ? printf("working"); : printf("Not working");
short a = 345;
long int b = 3276;
float c = 455.345;
double d = 349834.34563;
void clrscr();
printf("%lf",((a+b)*c)/d);
long long int a = 329873209413223;
unsigned long long int b = 213902498237498324U;
printf("%lld\t\t\t%llu",a,b);
// format specifier(%) is defines what type of data inputed and to be displayed.
// constant fixed value , canot change and altered during the execution (Eg : const float a = 2.3)

// Operators :
// 1) Arithmatic operators -

//    Addition ( + )
//    Substraction ( - )
//    Multiplication  ( * )
//    Division ( / )
//    Modulus ( % )

int x = 145.45;
int y = 15.45;
int z = x / (float) y;
printf("%d",z);
Assignment operators :
int x = 109;
x*=2;
printf("%d",x);

3 > 2 ? printf("true") : printf("false");

double a = sqrt(177);
double b = pow(3,4);
int c = round(3.14);
int d = ceil(3.43);
int e = floor(3.298);
double f = fabs(-100);
double g = log(3);
double h = sin(90);
double i = cos(60);
double j = tan(180);
printf("%lf\n",a);
printf("%lf\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%lf\n",f);
printf("%lf\n",g);
printf("%lf\n",h);
printf("%lf\n",i);
printf("%lf\n",j);
operator cont:
int x = 5;
int y = 6;
int u = x / (float) y;
printf("%f\n",u);
u++;
printf("%f",u);
// Assignment operator :
// it replaces a statement and change value of same variable
eg : x = x + 1;
char name[50];
int age;
printf("ENter your name");
// scanf("%s",&name);
fgets(name,50,stdin); // defualt new line
printf("Enter your age ?");
scanf("%d",&age);
printf("Hello %s, How are you !!",name);
printf("You are %d years old ",age);
const double PI = 3.14159;
double radius;
double circumference;
double area;

printf("Enter the radius of circle ?");
scanf("%lf",&radius);

circumference = 2 * PI *radius;
area = PI * radius * radius;
printf("circumference = %lf\n",circumference);
printf("Area = %lf",area);

double a;
double b;
double c;
printf("Enter side A : ");
scanf("%lf",&a);
printf("Enter the side of B : ");
scanf("%lf",&b);
c  = sqrt(a*a + b*b);
printf("The side of c is %lf",c);

int age;
printf("Enter your age : ");
scanf("%d",&age);
if (age<=0)
{
    /* code */
    printf("You are not born yet !!");
}
else if (age<=18)
{
    /* code */
    printf("You are an adult ?");
}
else
printf("You are 18+ so glad !!");
// switch is used for many else statements and check the equality
char grade;
printf("Enter your grade ??");
scanf("%c",&grade);
switch (grade)
{
case 'A' /* constant-expression */:
    /* code */
    printf("You are exellent");
    break;
case 'B':
    printf("you are now very good!");
    break;
case 'C':
    printf("You are good grade!");
    break;
case 'D':
    printf("You are just passed try hard !!");
    break;
case 'E':
    printf("You are just passed mark so bad try harder !!");
    break;
case 'F':
    printf("You are Failed man, Try next exam");
    break;
default:
    printf("You can enter only a valid grade, Try again");
    break;
}
char unit;
float temp;

printf("Is the tempurature is currently Farenheat(F) or Celcius(C) \n");
scanf("%c",&unit);
unit = toupper(unit);
if (unit == 'F')
{
    /* code */
    printf("The temp is in F(FArenheat) ");
}
else if (unit == 'C')
{
    /* code */
    printf("The temp is celcius(C) ");
}
else {
    printf("%c is not a valid unit of measurement ",unit);
}


check  farenheat or celcius
char unit;
float temp;
printf("Is this temperature Celcius (C) or Farenheit (F) \n");
scanf("%c",&unit);
unit = toupper(unit);
if (unit == 'C')
{
    /* code */

    printf("The temp is currently C");
    printf("[Enter the temp in Celcius] : ");
    scanf("%f",&temp);
    temp = (temp * 9 / 5) + 32;
    printf("\n Temp in farenheit : %.1f",temp);
}
else if (unit == 'F')
{
    printf("The temp is currently F.");

    printf("[Enter the temp in Faremh0eit] : ");  xcvbnmzxcv `90-\        scanf("%f",&temp);
    temp = ((temp - 32) * 5) / 9;111
    printf("Temp in Celcius : %.1f",temp);
}
else {
    printf("\n %c is not valid expression or measurement",unit);
}

char operator;
double num1;
double num2;
double result;

printf("\nEnter an operator(+,-,*,/) \n");
scanf("%c",&operator);
printf("Enter number 1 :\t");
scanf("%lf",&num1);
printf("Enter number 2 :\t");
scanf("%lf",&num2);
switch (operator)
{
case '+':
    result = num1 + num2;
    printf("Result = %lf",result);
    break;
case '-':
    result = num1 - num2;
    printf("Result = %lf",result);
    break;
case '*':
    result = num1 * num2;
    printf("\n Result = %lf",result);
    break;
case '/':
    result = num1 / num2;
    printf("\n Reslut = %lf",result);
    break;

default:
    printf("'%c' is not a valid expression or operator ",operator);
}

// Logical oprators - && (AND) checks if two conditions are true
// float temp = 25;
// bool sunny = true;

// if (temp >= 0 && temp <= 30 && sunny)
// {
//     /* code */
//     printf("The weather is good !!\n");
// }
// else
// {
//     printf("The weather is bad !!");
// }

// logical operator - || (OR) checks if at lest one condition is true
float temp = 50;
if (temp <= 0 || temp <= 30)
{
    /* code */
    printf("The temp is good !!");
}
else
{
    printf("The temp is bad ?");
}

// logical operator - ! (NOT) reverses the state of the condition
bool sunny = true;

if (!sunny)
{
    /* code */
    printf("It's sunny outside !\n");
}
else
{
    printf("It's cloudy outside !!");
}

// Functions :
void birthday()
{
    printf("happy birthday to you !\n");
    printf("Happy birthday to you !\n");
    printf("Happy birthday to you dear !\n");
    printf("Happy birthday to you !");
}
int main()
{
    birthday();
    birthday();
    birthday();
    return 0;
}

void birthday(char x[],int y)
{
    printf("Happy birthday dear '%s' !\n",x);
    printf("You are '%d' years old .",y);
}
int main()
{
    char name[] = "Shamel";
    int age = 10;
    birthday(name,age);
    return 0;
}

// return - returns a value back to a calling function
double square(double x)
{
    double result = x*x*x;
    return result;
}
int main()
{
    double x = square(3.14);
    printf("%lf",x);
    return 0;
}

/* Ternary operator - shortcut to if/else when assigning or returning a value
 condition ? value if true(execute) : value if false (execute) */
int findmax(int x,int y)
{
if (x>y)
{
    return x;
}
else
{
    return y;
}
    return (x > y) ? x : y;
}
int main()
{
    int max = findmax(4,2);
    printf("%d",max);
}

// how use user defined functions
void main()
{
    int x = 2,y = 3,z;
    z = add(x,y);
    printf("z = %d",z);
}
int add(int a,int b)
{
    return (a+b);
}

void y();
void y()
{
    printf("Y");
}
void main()
{
    void a(),b(),c(),d();
clrscr();
    y();
    a();
    b();
    c();
    d();
}
void a()
{
    printf("A\t");
    y();
}
void b()
{
    printf("B\t");
    a();
    y();
}
void c()
{
    printf("C\t");
    y();
    a();
    b();
}
void d()
{
    printf("D\t");
    y();
    a();
    b();
    c();
}

// Function prototype
// function declaration without a body , before main()
// Ensure that calls to a function are made with the correct arguments
// void hello(char[], int); // function prototype
int main()
{
    char name[] = "Gaia";
    int age = 20;
    hello(name,age);
    return 0;
}
void hello(char name[], int age)
{
    printf("Hello %s\n",name);
    printf("You are %d years old",age);
}

// string functions

int main()
{
    char string1[] = "cro";
    char string2[] = "ebo";
// strlwr(string1);                  // lowercase
// strupr(string1);                 // uppercase
// strcat(string1,string2);        // concatination.
// strncat(string1,string2,1);    // appends n characters on string2 to string1.
// strcpy(string1,string2);      // copied string2 contents to string1.
// strncpy(string1,string2,1);  // copy n characters of string1 to string2.
// strset(string1,'?');        // set all characters on string1 is changed to given character.
// strnset(string1,'Y',1);    // first char will be changed to given char.
// strrev(string1);          // reverses string
// printf("%s\n",string1);

// int string_length = strlen(string1);                    // returns length of string
// int string_compare = strcmp(string1,string2);          // string same returns false otherwise true
// printf("%d",string_length);
// int string_compare = strncmp(string1,string2,1);     // compare specified n number char and it returns true or false
// int string_compare = stricmp(string1,string2);      // same case of strcmp()
// int string_compare = strnicmp(string1,string2,1);  // same case of strncmp()
// printf("%d\t",string_compare);
// if (string_compare == 0)
// {
//     printf("This characters are same !!\n");
// }
// else
// {
//     printf("This charcters are not same ??\n");
// }
// }

// for loop : repeates a section of code a limited amount of times.
// int main()
// {
//     for (int i = 1; i < 10; i++)
//     {
//        printf("Test");
//     }
// }


// while loop - it repeatedly checks the statements and when become it's true.
int main()
{
    char name[15];
    printf("What's your name ?\n");
    fgets(name,15,stdin);
    name[strlen(name)-1] = '\0';
    while (strlen(name) == 0)
    {
        printf("You did not enter your name !\n");
        printf("What's your name ?\n");
        fgets(name,15,stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("Hello %s",name);
    return 0;
}

// while loop - It's executes block of code once then check the condition
int main()
{
    int number = 0;
    int sum = 0;
    do
    {
       printf("Enter a number above 0 : ");
       scanf("%d",&number);
       if (number > 0)
       {
          sum += number;
       }

    } while (number > 0);
    printf("Sum = %d",sum);
    return 0;
}

// Nested loop - a loop on inside a loop.
int main()
{
    int rows;
    int columns;
    char symbol;

    printf("Enter # number of rows :\t");
    scanf("%d",&rows);
    printf("Enter the # nunber of columns :\t");
    scanf("%d",&columns);
    scanf("%c");
    printf("Enter a symbol to use :\t");
    scanf("%c",&symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }
    return 0;
}

// continue - skip that code and working next itration.
// break    - exits entire loop/switch
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i == 15)
        {
            break;
        }

        printf("%d\n",i);
    }
    return 0;
}

// Array - data structure that can stores many values of the same datatype.
int main()
{
    double prices[] = {24,23.1,12,23,23};
    printf("%.3lf",prices[0]);
}

int main()
{
    double prices[] = {5.0,10.0,15.0,20.0,25.0};
int a = 10;
printf("%d bytes\n",sizeof(prices));
printf("%d bytes",sizeof(prices[0]));
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n",prices[i]);
    }
    return 0;
}

// 2D Array - is a list of colomns and rows on a matrix,grid,tables.
int main()
{
    int matrix[3][3];
    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);
    printf("matrix bytes : %d\n",sizeof(matrix));
    printf("1st row bytes : %d\n",sizeof(matrix[0]));
    printf("Row and column bytes : %d\n",sizeof(matrix[0][0]));
    printf("Rows : %d\n",rows);
    printf("columns : %d\n",columns);
    matrix[0][0] = 2;
    matrix[0][1] = 4;
    matrix[0][2] = 6;
    matrix[1][0] = 1;
    matrix[1][1] = 3;
    matrix[1][2] = 5;
    matrix[2][0] = 3;
    matrix[2][1] = 5;
    matrix[2][2] = 7;
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < columns; j++)
       {
           printf("%d ",matrix[i][j]);
       }
       printf("\n");
    }
    return 0;
}

// update string data
int main()
{
    char cars[4][10] = {"Toyota","Suzukhi","Mahendara","Bmw"};
    strcpy(cars[0],"Benze");
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n",cars[i]);
    }
    return 0;
}   

// string swapping
int main()
{
    char x[15] = "coffie";
    char y[15] = "Water";
    char temp[15];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("x = %s\n",x);
    printf("y = %s\n",y);
    return 0;
}

// sorting
void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
       printf("%d ",array[i]);
    }
    
}
int main()
{
    int array[] = {2, 4, 9, 7, 1, 6, 10, 3};
    // char array[] = {'D', 'G', 'A', 'N', 'H'};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    printArray(array,size);
    return 0;
}

/* struct - are the collection of related varibles
            and diffrent data types
            it is similer to class of oop(but no methods in their) */
struct student
{
    char name[20];
    int age;
    char place[20];
};

int main()
{
   struct student student1;
   struct student student2;

   strcpy(student1.name, "Fasil");
   student1.age = 20;
   strcpy(student1.place, "Vadakara");
   strcpy(student2.name, "Rohan");
   student2.age = 21;
   strcpy(student2.place, "Kochi");

    printf("Student1 Name : %s\n",student1.name);
    printf("Student1 Age : %d\n",student1.age);
    printf("Student1 Place : %s\n",student1.place);
   printf("-----------------------------------\n");
   printf("Student2 Name : %s\n",student2.name);
   printf("Student2 Age : %d\n",student2.age);
   printf("Student2 Place : %s",student2.place);
   return 0;
}

// typedef - is a reserved keyword that gives an existing datatype a "nickname"
typedef struct 
{
    char name[15];
    char password[20];
    int id;
}user;

int main() 
{
    user user1 = {"Fasi","^&*GBIU_",23};
    user user2 = {"Abhi","43tgoi",25};
    printf("user1 username : %s\n",user1.name);
    printf("user1 password : %s\n",user1.password);
    printf("id = %d\n",user1.id);
    printf("---------------------");
    printf("\nuser2 Name : %s\n",user2.name);
    printf("user2 Password : %s\n",user2.password);
    printf("id = %d",user2.id);
    return 0;
}
struct Student
{
    char name[15];
    float gpa;
};

int main()
{
   struct Student Student1 = {"Monic", 9.0};
   struct Student Student2 = {"Darvin", 6.0};
   struct Student Student3 = {"Dopoi", 3.0};
   struct Student Student4 = {"Romy", 1.0};
   struct Student Student5 = {"Andru", 3.0};

   struct Student Students[] = {Student1,Student2,Student3,Student3,Student4,Student5};
   for (int i = 0; i < sizeof(Students)/sizeof(Students[0]); i++)
   {
       printf("---------------------\n");
      printf("%-12s|\t",Students[i].name);
      printf("%.2lf|\n",Students[i].gpa);
    //   printf("---------------------\n");
   }
   return 0;
}

// ENUM

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
int main()
{
    enum Day today = Wed;
    printf("%d",today);
    if (today == Sun || today == Sat)
    {
       printf("It's the weakend ! party time !");

    }
    else
    {
        printf("Have to work today :( ");
    }
    
    return 0;
}

// pseudo random numbers - a set of values or elements that are statistically random
int main()
{
    srand(time(0));
    int number1 = (rand() % 100) + 1;
    int number2 = (rand() % 100) + 1;
    printf("%d\n",number1);
    printf("%d\n",number2);
    return 0;
}

// Bitwise operators : used to bit level (0 and 1) programming.
// & - AND
// | - OR
// ^ - XOR
// << - LEFT SHIFT
// >> - RIGHT SHIFT
int main()
{                                               // 00000000 - 0
int a = 4; // 00000100                          // 00000001 - 1
int b = 8; // 00001000                          // 00000010 - 2   
int c = 0; // 00001100                          // 00000011 - 3
                                                // 00000100 - 4

c = a & b;                                      // 00000101 - 5
printf("AND = %d\n",c);                         // 00000110 - 6
                                                //  00000111 - 7
c = a | b;                                      // 00001000 - 8
printf("OR = %d\n",c);                          // 00001001 - 9
                                                // 00001010 - 10
c = a ^ b;                                      // 00001011 - 11
printf("XOR = %d\n",c);                         // 00001100 - 12

c = a << 1;
printf("LEFT SHIFT = %d\n",c);

c = a >> 1;
printf("RIGHT SHIFT = %d",c);
return 0;
}

// pointer : it holds the adress of another variable, a another array etc.
//           * = indirection operator(value at adress)
void printaAge(int age)
{
    printf("You are %d years old\n",age);
}
int main()
{
    int age = 21;
    int *pAge = NULL;
    pAge = &age;

    printf("Adress of age = %p\n",&age);
    printf("value of page = %p\n",pAge);
    printaAge(age);
    return 0;
}

int main()
{
    FILE *pF = fopen("test.txt","a");
    fprintf(pF,"write something here\nTesting file\n");
    fprintf(pF,"Hi is something there ");
    fclose(pF);
    if (remove("test.txt") == 0 )
    {
        printf("File is removed successfully!\n");
    }
    else
    {
        printf("Canot find any files !\n");
    }
    
    return 0; 
}

int main()
{
    FILE *pF = fopen("rule.txt","r");
    char buffer[255];
    if (pF == NULL)
    {
      printf("Unable to open file\n");
    }
    else
    {
         while (fgets(buffer, 255, pF) != NULL)
       {
           printf("%s\n",buffer);
       }
       
    }
    fclose(pF);
    return 0;
}