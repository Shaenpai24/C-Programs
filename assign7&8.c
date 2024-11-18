#include<stdio.h>
// int main(){
//     int ar[4];
//     ar[0]=1;
//     ar[1]=2;
//     ar[2]=3;
//     ar[3]=4;
//     printf("%d\n",ar[2]);
//     int length = sizeof(ar)/sizeof(ar[0]);
//     printf("%d\n",length);
//     return 0;
// }
// int main(){
//     int ar[]={1,2,3,4,5,6,7,8,9};
//     int length = sizeof(ar)/sizeof(ar[0]);
//     int i;
//     for(i=0;i<length;i++){
//         printf("%d\n",ar[i]);
//     }
//     return 0;
// }
// int main()
// {
//     int i, j, temp, length;
//     int ar[] = {24, 50, 30, 23, 49, 60, 12, 32, 12, 19, 10, 29};
//     length = sizeof(ar) / sizeof(ar[0]);
//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < length; j++)
//         {
//             if (ar[j] > ar[i])
//             {
//                 temp = ar[i];//Using temporary variable
//                 ar[i] = ar[j];//The smaller value becomes the larger one
//                 ar[j] = temp;//The larger element is now the smaller one,Looping this we get the ascending value
//             }
//         }
//     }
//     printf("The sorted list of array is : \n");
//     for (i = 0; i < length; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
//     return 0;
// }
// int main()
// {
//     int i, j, length;
//     int ar[] = {24, 50, 30, 23, 49, 60, 12, 32, 12, 19, 10, 29};
//     length = sizeof(ar) / sizeof(ar[0]);
//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < length; j++)
//         {
//             if (ar[j] > ar[i])
//             {
//                 ar[i]=ar[i]+ar[j];//Without using the temporary variable
//                 ar[j]=ar[i]-ar[j];
//                 ar[i]=ar[i]-ar[j];
//             }
//         }
//     }
//     printf("The sorted list of array is : \n");
//     for (i = 0; i < length; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
//     return 0;
// }
// int main()
// {
//     int i, j, length;
//     int ar[] = {24, 50, 30, 23, 49, 60, 12, 32, 12, 19, 10, 29};
//     length = sizeof(ar) / sizeof(ar[0]);
//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < length; j++)
//         {
//             if (ar[j] > ar[i])
//             {
//                 ar[i] = ar[i] + ar[j]; // Without using the temporary variable
//                 ar[j] = ar[i] - ar[j];
//                 ar[i] = ar[i] - ar[j];
//             }
//         }
//     }
//     int n;
//     printf("Enter the array index you want to stop at:");
//     scanf("%d",&n);
//     for (i = 0; i < length; i++)
//     {
//         if (i == n)
//         {
//             break;
//         }
//         printf("%d\n", ar[i]);
//     }
    
//     return 0;
// }
// int main(){
//     int arr[3][3]={{1,2,3},{2,3,4},{3,4,5}};
//     for(int i = 0; i<3;i++){//i is the number of rows
//         for(int j = 0; j<3;j++){//j is the number of columns
//             printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
//         }
//     }
//     return 0;
// }
// int main(){
//     int i,j,arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(i =0;i<3;i++){
//         for(j = 0;j < 3;j++){
//             printf("Enter the elements of arr[%d][%d]\n",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",arr[i][j]);
//         }
//     }
//     return 0;
// }
// int main(){
//     int age=10;
//     int *ptr=&age;
//     int _age=*ptr;
//     printf("%d",_age);
// }
// int main(){
//     int i = 3;
//     printf("\nAddress of i = %p",&i);
//     printf("\nValue of i = %u",i);
// }
// int main(){
//     int key=8,i;
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
   
//     for(i = 0;i<10;i++){
//         if(arr[i]==key){
//             printf("The index of the element is %d",i);
//         }
//     }
//     return 0;
// }
// int binarySearch(int arr[], int size, int target)
// {
//     int low = 0;
//     int high = size - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] > target)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 12;
//     int result = binarySearch(arr, size, target);
//     if (result != -1)
//     {
//         printf("Target found at %d\n", result);
//     }
//     else
//     {
//         printf("Target not Found");
//     }
//     return 0;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int i   = arr[0];
//     int *j  = &arr[0];
//     printf("%u\n%p\n",i,&i);
//     printf("%p\n%u\n",j,*j);
//     return 0;
// }
//Ascending Sort
// int main()
// {
//     int i, j, length;
//     int ar[] = {24, 50, 30, 23, 49, 60, 12, 32, 12, 19, 10, 29};
//     length = sizeof(ar) / sizeof(ar[0]);
//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < length; j++)
//         {
//             if (ar[i] > ar[j])
//             {
//                 ar[i]=ar[i]+ar[j];//Without using the temporary variable
//                 ar[j]=ar[i]-ar[j];
//                 ar[i]=ar[i]-ar[j];
//             }
//         }
//     }
//     printf("The sorted list of array is : \n");
//     for (i = 0; i < length; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
//     return 0;
// }
// int main()
// {
//     int i, j, length;
//     int ar[] = {24, 50, 30, 23, 49, 60, 12, 32, 12, 19, 10, 29};
//     length = sizeof(ar) / sizeof(ar[0]);
//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < length; j++)
//         {
//             if (ar[i] > ar[j])
//             {
//                 ar[i]=ar[i]+ar[j];//Without using the temporary variable
//                 ar[j]=ar[i]-ar[j];
//                 ar[i]=ar[i]-ar[j];
//             }
//         }
//     }
//     printf("The minimum term of the array is : \n");
//     for (i = 0; i < length; i++)
//     {
//         printf("%d\n", ar[i]);
//         if(i==0){
//             break;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int i, j, length;
//     int ar[] = {24, 50, 30, 23, 49, 60, 12, 32, 12, 19, 10, 29};
//     length = sizeof(ar) / sizeof(ar[0]);
//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < length; j++)
//         {
//             if (ar[i] > ar[j])
//             {
//                 ar[i]=ar[i]+ar[j];//Without using the temporary variable
//                 ar[j]=ar[i]-ar[j];
//                 ar[i]=ar[i]-ar[j];
//             }
//         }
//     }
//     for (i = 0; i < length; i++)
//     {
//         printf("%d\n", ar[i]);
        
//     }
//     return 0;
// }
// int main(){
//     int arr[5][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9}},sum=0;
//     for(int i = 0;i<5;i++){
//         for(int j = 0;j<5;j++){
//              if(i==j){
//                 sum+=arr[i][j];
//              }
//         }
//     }
//     printf("The trace of the matrix is %d",sum);
//     return 0;
// }
// void selsort(int arr[], int n)
// {
//     int i, j, temp, minindex;
//     for (i = 0; i < n; i++)
//     {
//         minindex = i;
//         for (j = 0; j < n; j++)
//         {
//             if (arr[j] < arr[minindex])
//             {
//                 minindex = j;
//             }
//         }
//     }
//     if (minindex != i)
//     {
//         temp = arr[minindex];
//         arr[minindex] = arr[i];
//         arr[i] = temp;
//     }
// }
// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }
// int main()
// {
//     int arr[] = {674, 53, 222, 343, 53, 525, 25, 234, 532, 429, 141, 313, 525};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Orginal array is:\n");
//     printarray(arr, n);
//     selsort(arr, n);
//     printf("Sorted array is:\n");
//     printarray(arr, n);
//     return 0;
// }
// int main()
// {
//     int arr[3][3];
//     int i, j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Enter arr[%d][%d]\n", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++)
//     {
//         printf("\n");
//         for (j = 0; j < 3; j++)
//         {
//             if (arr[i][j] % 2 == 0)
//             {
//                 printf("%d is Even\n", arr[i][j]);
//             }
//             else
//             {
//                 printf("%d is Odd\n", arr[i][j]);
//             }
//         }
//     }
//     return 0;
// }
// int linear(int a[], int n, int key)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             break;
//         }
//     }
//     if (i < n)
//     {
//         printf("Element found in the array at index %d", i);
//     }
//     else
//     {
//         printf("Element not found");
//     }
//     return 0;
// }
// int main()
// {
//     int a[10], i, n, key;
//     printf("Enter the no of array elements:");
//     scanf("%d\n", &n);
//     printf("Enter the elemets of the array\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d\n", &a[i]);
//     }
//     printf("Enter element to search:\n ");
//     scanf("%d", &key);
//     linear(a, n, key);
// }
// int sumofDigits(int n);
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Sum of digits of %d is: %d\n", n, sumofDigits(n));
//     return 0;
// }

// int sumofDigits(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n % 10 + sumofDigits(n / 10);
// }
// int main(){
//     int i =0;
   
//     printf("%d\n",++i);
//     printf("%d\n",i);
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i = 0; i<3;i++){
//         for(int j = 0;j<3;j++){
//             if(i<=j){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;

// }
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
// temperature conversion
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
//Factorial of n
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
// float sqt(float a){
//     return pow(a,0.5);
// }
// int main(){
//     float a = 9080.0;
//     printf("Squareroot is %f",sqt(a));
//     return 0;
// }
// int main(){
//     int i,n,sum=0;
//     printf("Enter the no of terms");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         sum+=i;
//     }
//     printf("The sum is %d",sum);
//     return 0;
// }
// int sum(int a){
//     return a + sum(a-1);
// }
// int main(){
//     int a =9;
//     printf("%d",sum(a));
//     return 0;
//}
// int main(){
//     int matric[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     printf("%d",matric[1][1]);
//     return 0;
// } 
// int factorial(int n){
//     if (n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     } 
// }
// int main(){
//     int n;
//     printf("Enter the number you want to print the factorial of:");
//     scanf("%d",&n);
//     printf("The factorial of %d is %d",n,factorial(n));
//     return 0;
// }
 
// int main(){
//     int x =10,y=20;
//     printf("The value of x is %d and y is %d",x,y);
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf("The value of x is %d and y is %d\n",x,y);
//     return 0;
// }
// int main(){
//     int v = 10;
//     int *ptr = &v;
//     printf("The memory address of %d is %p",v,ptr);
//     return 0;
// }
// #include<math.h>

// float ac(float r)
// {
//     return 3.14 * r * r;
// }
// int as(int s)
// {
//     return s * s;
// }
// int main()
// {
//     int s;
//     float r;
//     printf("Enter the side of a square");
//     scanf("%d", &s);
//     printf("Enter the radius of circle\n");
//     scanf("%f", &r);
//     printf("The area of square is %d\n", as(s));
//     printf("The area of Circle is %f\n", ac(r));
//     return 0;
// }
// int isprime(int n)
// {
//     if (n <= 1)
//     {
//         return 0; // not prime
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     printf("Enter a number to check wether it is prime or not:");
//     scanf("%d", &n);
//     if (isprime(n))
//     {
//         printf("%d is a prime number", n);
//     }
//     else
//     {
//         printf("%d is not a prime numebr", n);
//     }
//     return 0;
// }

// 
// #include<math.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         if(i%2==0){
//             printf("%d ",i);
//         }
//         i++;
//     }
//     return 0;
// }
// int rangesum(int a, int b)
// {
//     int i, sum = 0;
//     if (a <= b)
//     {
//         for (i = a; i <= b; i++)
//         {
//             sum += i;
//         }
//     }
//     else
//     {
//         return -1;
//     }
//     return sum;
// }
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("The sum of numbers in the range of [%d %d] is %d", a, b, rangesum(a, b));
//     return 0;
// }
// int recpow(int a, int b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }

//     return a * recpow(a, b - 1);
// }
// int main()
// {
//     int a, b;
//     a = 3;
//     b = 4;
//     printf("The %d to the power of %d is %d", b, a, recpow(a, b));
//     return 0;
// }