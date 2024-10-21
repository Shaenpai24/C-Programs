#include<stdio.h>
// int main(){
//     int i;
//     for(i =1;i<=10;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }
// int main(){
//     int i,a=0,b=1,n,r;
//     printf("Enter the term:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         r = a+b;
//         a = b;
//         b = r;
//     }
//     printf("%d",r);
// }
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//         if(i==8){
//             break;
//         }
//         printf("%d\n",i);
//     }
// }
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//          if(i == 8){
//             continue;
//          }
//         printf("%d\n",i);
//   }
//     return 0; 
//  }
// int main(){
//     int i,n,f;
//     printf("Enter a number to print it's factorial");
//     scanf("%d",&n);
//     f = n;
//     for(i=n-1;i>=1;i--){
//         f *=i;
//     }
//     printf("%d is the factorial of %d",f,n);
//     return 0;
// }
//Functions
// void printNamaste(){
//     printf("Namaste!\n");
// }
// void printBonjour(){
//     printf("Bonjour!\n");
// }
// int main(){
//     int n;
//     printf("Enter 1 if you are Indian and 2 if you are French:");
//     scanf("%d\n",&n);
//     if(n ==1){
//         printNamaste();
//     }
//     else if(n==2){
//         printBonjour();
//     }
//     else{
//         printf("Invalid Input please try again\n");
//     }
//     return 0;
// }
// int sum(int a, int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     printf("Enter another number:\n");
//     scanf("%d",&b);
//     int s = sum(a,b);
//     printf("The sum of the two numbers is %d",s);
//     return 0;
// }
// void caluclateGST(float a){
//     a += 0.18*a;
//     printf("The price after GST is %f",a);
// }
// int main(){
//     float a;
//     printf("Enter your price to caluclate grand total:");
//     scanf("%f",&a);
//     caluclateGST(a);
//     return 0;

// }
#include<math.h>
// int main(){
//     float a;
//     printf("Enter a number to caluclate it's square:");
//     scanf("%f",&a);
//     float p=pow(a,2);
//     printf("The square of %f is %f",a,p);
//     return 0;
// }
// void arSquare(float a){
//     printf("The area of square is %f",pow(a,2));
// }
// void arCircle(float r){
//     printf("The area of Circle is %f",3.14*pow(r,2));
// }
// void arRectangle(float l,float b){
//     printf("The are of Rectangle is %f",l*b);
// } 
// int main(){
//     float a,r,l,b;
//     printf("Enter side of square,radius of circle,length and breadth of rectangle respectfully:");
//     scanf("%f\n%f\n%f\n%f",&a,&r,&l,&b);
//     arSquare(a);
//     arCircle(r);
//     arRectangle(l,b);
// }
// void printH(int count){
//     if (count == 0){
//         return;
//     }
//     printf("Hi\n");
//     printH(count-1);
// }
// int main(){
//     printH(10);
//     return 0;
// }
// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }
// int main(){
//     int n;
//     printf("Enter a number to caluclate the sum of natural numbers:");
//     scanf("%d",&n);
//     printf("The sum of the series is %d\n",sum(n));
//     return 0;
// }
// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     int factn = fact(n-1)*n;
//     return factn;
// }
// int main(){
//     int n;
//     printf("Enter a non negative integer:");
//     scanf("%d",&n);
//     printf("The factorial of %d is %d",n,fact(n));
//     return 0;
// }
// float convertTemp(float celsius){
//     float far = (9.0/5.0)*celsius+32;
//     return far;
// }
// int main(){
//     float celsius;
//     printf("Enter the celsius");
//     scanf("%f",&celsius);
//     printf("The farenheit value is %f",convertTemp(celsius));
//     return 0;
// }
// int fibonacci(int n){
//     if(n==0||n==1){
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//     }
//     int fib = fibonacci(n-1)+fibonacci(n-2);
//     return fib;
// }
// int main(){
//     int n;
//     printf("Enter the fibonacci term :");
//     scanf("%d",&n);
//     printf("The %dth in the fibonacci series is %d",n,fibonacci(n));
//     return 0;
// }
// float powf(float n,float a){
//     if(a==0){
//         return 1;
//     }
//     return n*powf(n,a-1);
// }
// int main(){
//     float n,a;
//     printf("Enter the base:");
//     scanf("%f",&n);
//     printf("Enter the power:\n");
//     scanf("%f",&a);
//     printf("The %fth power of %f is %f\n",a,n,powf(n,a));
//     return 0;
// }
float sqt(float a){
    return pow(a,0.5);
}
int main(){
    float a = 9080.0;
    printf("Squareroot is %f",sqt(a));
    return 0;
}
int main();