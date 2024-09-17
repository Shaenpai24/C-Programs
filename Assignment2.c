#include<stdio.h>
//1
// int main(){
//     int a;
//     printf("Enter a number");
//     scanf("%d",&a);
//     if (a>0){
//         printf("Positive");
//     }
//     else {
//         printf("Negative");
//     }
//     return 0;
// }
//2
// int main(){
//     int a;
//     printf("Enter a number");
//     scanf("%d",&a);
//     if (a>0){
//         printf("Positive");
//     } 
//     else if (a==0){
//         printf("Zero");
//     }
//     else{
//         printf("Negative");
//     }
//     return 0;
// }
//3
// int main(){
//     int b;
//     printf("Enter a number");
//     scanf("%d",&b);
//     if (b%2==0){
//         printf("Even");
//     }
//     else {
//         printf("Odd");
//     }
//     return 0;
// }
//4
// int main(){
//     int age;
//     printf("Enter your age");
//     scanf("%d",&age);
//     if (age>=18){
//         printf("You're  elligible to vote");
//     }
//     else{
//         printf("You're not elligible to vote");
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
//7
 #include<ctype.h>
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
//8
// int main(){
//     char a;
//     printf("Enter a alphanumerical");
//     a = getchar();
//     if (isupper(a)>0){
//         printf("Upper case");
//     }
//     else if (islower(a)>0){
//         printf("Lower case");
//     }
//     else{
//         printf("Not an alphabet");
//     }
//     return 0;
// }
// 9
// #include<math.h>
// int main(){
//     int a,b,c,D,p;
//     printf("Enter the coeffiecient of x^2,x and constant");
//     scanf("%d%d%d",&a,&b,&c);
//     D = sqrt(b*b-4*a*c);
//     if (D>0){
//         p = 20;
//         printf("The roots are real and unequal\n");
//         printf("You get %d points\n",p);
//     }
//     else if (D<0){
//         p = 10; 
//         printf("The roots are imaginary\n");
//         printf("You get %d points\n",p);
//     }
//     else {
//         p = 0;
//         printf("The roots are equal\n");
//         printf("You get %d points\n",p);
//     }
//     return 0;
// }
//10
// int main(){
//     int w,h,b;
//     printf("Enter you weight in kg's");
//     scanf("%d",&w);
//     printf("Enter your height in meteres");
//     scanf("%d",&h);
//     b = w/h^2;
//     if (b<18.5){
//         printf("Underweight");
//     }
//     else if (b>18.5&&b<24.5){
//         printf("Normal weight");
//     }
//     else{
//         printf("Over Weight");
//     }
//     return 0;
// }