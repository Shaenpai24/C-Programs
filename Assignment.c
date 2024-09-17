#include<stdio.h>
// 1
// int main(){
//     int a,b;
//     printf("Enter two numbers");
//     scanf("%d%d",&a,&b);
//     if (a > b){
//         printf("%d is greater than %d",a,b);
//     } 
//     else if (a == b){
//         printf("%d is equal to %d",a,b);
//     }
//     else{
//         printf("%d is greater than %d",b,a);
//     }
//     return 0;
// }
// 2
// int main(){
//     int a,b,c;
//     printf("Enter three numbers");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b && a>c){
//         printf("%d is the greatest of all the three",a);
//     }
//     else if (b>c && b>a){
//         printf("%d is the greatest of all the three",b);
//     }
//     else {
//         printf("%d is the greatest of the the three",c);
//     }
//     return 0;
// }
//3
// int main(){
//     int a;
//     printf("Enter a number");
//     scanf("%d",&a);
//     if (a > 0){
//         printf("%d is positive",a);

//     }
//     else if(a < 0){
//         printf("%d is negative",a);

//     }
//     else{
//         printf("%d is equal to zero",a);
//     }
//     return 0;
// }
//4
// int main(){
//     int a;
//     printf("Enter a number");
//     scanf("%d",&a);
//     if ( a %5==0 && a%11==0){
//         printf("%d is divisible by 5 and 11",a);
//     }
//     else {
//         printf("%d is not divisible by 5 and 11",a);
//     }
//     return 0;
// }
//5
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     if (a%2==0){
//         printf("The number is even");
//     }
//     else {
//         printf("The number is odd");
//     }
//     return 0; 
// }
//6
// int main(){
//     int a;
//     printf("Enter the year:");
//     scanf("%d",&a);
//     if (a % 4 == 0){
//         printf("They year is a leap year");
//     }
//     else{
//         printf("The year is not a leap year");
//     }
//     return 0;
// }
//7
#include<ctype.h>
// int main(){
//     char a;
//     printf("Enter an alphabet:");
//     a = getchar();
//     if (isalpha(a)>0){
//         printf("%c is an alphabet",a);
//     }
//     else {
//         printf("%c is not an alphabet",a);
//     }
//     return 0;
// }
//8
int main(){
    char a;
    printf("Enter an alphabet:");
    scanf("%c",&a);
    if  (a=='a'||'e'||'i'||'o'||'u'){
        printf("%c is an alphabet and a vowel",a);
    }
    else {
        printf("%c is an alphabet and a consonent",a);
    }
    return 0;
}
//9
// int main(){
//     char a;
//     printf("Enter a character");
//     a = getchar();
//     if (isalpha(a)>0){
//         printf("Alphabet");
//     }
//     else if(isdigit(a)>0){
//         printf("Digit");
//     } 
//     else {
//         printf("Special Character");
//     }
//     return 0;
// }
//10
// int main(){
//     char a;
//     printf("Enter a alphabet");
//     a = getchar();
//     if (isupper(a)>0){
//         printf("Upper Case");
//     }
//     else if(islower(a)>0){
//         printf("Lower Case");
//     }
//     else{
//         printf("Not an alphabet");
//     }
//     return 0;
// }
//11
// int main(){
//     int w;
//     printf("Enter a digit from 1 to 7");
//     scanf("%d",&w);
//     switch(w){
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thursday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("Saturday");
//         break;
//         case 7:
//         printf("Sunday");
//         break;
//         default:
//         printf("Wrong Input");
//         break;
//     }
//     return 0;
// }
//12
// int main(){
//     int m;
//     printf("Enter month number:");
//     scanf("%d",&m);
//     switch(m){
//         case 1:
//         printf("31");
//         break;
//         case 2:
//         printf("28");
//         break;
//         case 3:
//         printf("31");
//         break;
//         case 4:
//         printf("30");
//         break;
//         case 5:
//         printf("31");
//         break;
//         case 6:
//         printf("30");
//         break;
//         case 7:
//         printf("31");
//         break;
//         case 8:
//         printf("31");
//         break;
//         case 9:
//         printf("30");
//         break;
//         case 10:
//         printf("31");
//         break;
//         case 11:
//         printf("30");
//         break;
//         case 12:
//         printf("31");
//         break;
//         default:
//         printf("Wrong Input");
//         break;
//     }
//     return 0;
// }
//13
// int main(){
//     int m,n;
//     printf("Enter amount in inr");
//     scanf("%d",&m);
//     if (m>500){
//         printf("%d 500inr notes",m/500);
//     }
//     else if(m>200){
//         printf("%d 200 inr notes",m/200);
//     }
//      else if(m>100){
//         printf("%d 100 inr notes",m/100);
//     }
//      else if(m>50){
//         printf("%d 50 inr notes",m/50);
//     }
//      else if(m>10){
//         printf("%d 10 inr notes",m/10);
//     }
//     else{
//         printf("%d 1 inr demonitions",m);
//     }
//     return 0;
// }
//14
// int main(){
//     float a,b,c,sum;
//     printf("Input three angles of a triangle");
//     scanf("%f %f %f",&a,&b,&c);
//     sum = a+b+c;
//     if (sum==180){
//         printf("Triangle is valid");
//     }
//     else {
//         printf("Triangle is invalid");
//     }
//     return 0;
// }
//15
// int main(){
//     int a,b,c;
//     printf("Enter the sides of a triangle");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a+b>c&&b+c>a&&c+a>b){
//         printf("Triangle is Valid");
//     }
//     else{
//         printf("Triangle is invalid");
//     }
// }
//16
// int main(){
//     int s1,s2,s3;
//     printf("Enter the three sides of a triangle");
//     scanf("%d %d %d",&s1,&s2,&s3);
//     if (s1==s2&&s1==s3){
//         printf("The Triangle is Equilateral");
//     }
//     else if (s1==s2||s1==s3||s2==s3){
//         printf("The triangle is isocsles");
//     }
//     else{
//         printf("The triangle is scalene");
//     }
//     return 0;
// }
//17
// int main(){
//     int a,b,c,r1,r2;
//     printf("Enter the coefficient of x^2");
//     scanf("%d\n",&a);
//     printf("Enter the coefficient of x");
//     scanf("%d\n",&b);
//     printf("Enter the constant");
//     scanf("%d\n",&c);
//     r1 = -b/a;
//     r2 = c/a;
//     printf("The roots of the quadratic equation %dx^2+%dx+%d are %d and %d",a,b,c,r1,r2);
//     return 0;

// }
//18
// int main(){
//     int r,s;
//     printf("Enter Your Revenue");
//     scanf("%d",&r);
//     printf("Enter your spending");
//     scanf("%d",&s);
//     if (r>s){
//         printf("You have made a profit of %d",r-s);
//     }
//     else if (r<s){
//         printf("You have made a loss of %d",s-r);
//     }
//     else{
//         printf("You have made 0");
//     }
//     return 0;
// }
//19
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

// int main(){
//     int p;
//     printf("Enter your percentage");
//     scanf("%d",&p);
//     if (p >= 90){
//         printf("Your grade is A");
//     }
//     else if (p>=80){
//         printf("Your grade is B");
//     }
//     else if (p>=70){
//         printf("Your grade is C");
//     }
//     else if (p>=60){
//         printf("Your grade is D");
//     }
//     else if (p>=40){
//         printf("Your grade is E");
//     }
//     else{
//         printf("Your grade is F");
//     }
//     return 0;
// }
//21
// int main(){
//     float units,b;
//     printf("Enter your electric units");
//     scanf("%f\n",&units);
//     if (units<=50.0){
//         b = units*1/2;
//         printf("Your Electric bill is %f",b);
//     }
//     else if (units>50&&units<=150){
//         b = units*0.75;
//         printf("Your electric bill is %f",b);
//     }
//     else if (units>150&&units<=250){
//         b = units*1.2;
//         printf("Your electric bill is %f",units*b);
//     }
//     else{
//         b = units*2.7;
//         printf("Your Electric bill is %f",b);
//     }
//     return 0;
// }
//6
// int main(){
//     float m1,m2,m3,avg;
//     printf("Enter your marks in PCM");
//     scanf("%f%f%f",&m1,&m2,&m3);
//     avg = (m1+m2+m3)/3;
//     if (avg >80&&avg<=100){
//         printf("A grade");
//     }
//     else if (avg>60&&avg<=80){
//         printf("B grade");
//     }
//     else if (avg>40&&avg<=60 ){
//         printf("C grade");
//     }
//     else if (avg<=40&&avg>=0){
//         printf("F grade");
//     }
//     else if (avg>100){
//         printf("Invalid input of marks");
//     }
//     else{
//         printf("Invalid");
//     } 
//     return 0;
// }
// //7
// #include<ctype.h>
// int main(){
//     char a;
//     printf("Enter any character");
//     a = getchar();
//     if (a=='a','e','i','o','u'){
//         printf("5 points");
//     }
//     else if (isdigit(a)>0){
//         printf("10 points");
//     }
//     else{
//         printf("0 points");
//     }
//     return 0;
// }