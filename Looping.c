#include<stdio.h>
// int main(){
//     char i = 'a';
//     while(i<='z'){
//         printf("%c\n",i);
//         i++ ;
//     }
//     return 0;
// }
// 
// int main(){
//     int i = 0;
//     while(i<=10){
//         printf("%d\n",i);
//         i++ ;
//     }
//     return 0;
// }
// int main(){
//     int i = 0;
//     do {
//         printf("%d\n",i);
//         i++;
//     }
//     while(i<10);
//     return 0;
// }
// 
#include <stdio.h>

// int main() {
//   int i, j;
  
//   // Outer loop
//   for (i = 1; i <= 2; ++i) {
//     printf("Outer: %d\n", i);  // Executes 2 times
    
//     // Inner loop
//     for (j = 1; j <= 3; ++j) {
//       printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
//       printf("\n%d",i*j);
//     }
//   }
  
//   return 0;
// }
// int main() {
//   int i, j;
  
//   // Outer loop
//   for (i = 1; i <= 2; ++i) {
//     printf("Outer: %d\n", i);  // Executes 2 times
    
//     // Inner loop
//     for (j = 1; j <= 3; ++j) {
//       printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
//       printf("\n%d*%d=%d",i,j,i*j);
//     }
//   }
  
//   return 0;
// }
// int main(){
//     int i;
//     int l;
//     printf("Enter the limit till which you want");
//     scanf("%d",&l);
//     for (i=2;i<=l;i+=2){
//         printf("%d\n",i);
//     }

// }
// b becomes the new a and sum becomes the b
// int main(){
//     int a =0 ,b=1;
//     int noft,sum =0;
//     printf("Enter no of terms");
//     scanf("%d",&noft);
//     printf("%d\n%d\n",a,b);
//     for (int i =1; i<noft;i++){
//         sum = a+b;
//         printf("%d\n",sum);
//         a=b;
//         b = sum;
//     }
//     return 0;
// }

// int main(){
//     int a;
//     int fact=1;
//     printf("ENter a whole number");
//     scanf("%d",&a);
//     for (int i = 1;i <=a;i++){
//         fact = fact*i;

//     }
//     printf("The factorial of b is:%d",fact);
//     return 0;
// }
// STOP THE LOOP IF I = 5
int main(){
    for(int i = 0;i <=10;i++){
        
        if (i == 7){
        break;
    }
}
return 0;
}