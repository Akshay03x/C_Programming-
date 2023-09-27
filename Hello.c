// #include <stdio.h>
// int main() {
//     int num, digit, i;
//     int frequency[10] = {0};
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         digit = num % 10;
//         frequency[digit]++;
//         num /= 10;
//     }
//     printf("Frequency of each digit:\n");
//     for (i = 0; i < 10; i++) {
//         printf("Digit %d occurs %d times\n", i, frequency[i]);
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int j=5,i=1;
//     for(j=5;j>=1;j--){
//         for(i=1;i<=j;i++){
//             printf("%d",i);
//         }
//         printf("%d\n");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     // int i, j, n=5;
//     for(int i=1 ;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
        
//         for(int k=1;k<=i;k++){
//             printf("%d ",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("%d",argc);
//     printf("%s",argv[1]);
//     return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int sum=0,n=9;
//     while(n){
//         scanf("%d",&n);
//         sum+=n;
//     }
//     printf("%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("%d   ",argc);
//     printf("%s",argv[2]);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     for (int i=5;i>=1;i--){
//         for (int j=5;j>=i;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// void main(){
//     int flag=0,n,i;
//     printf("enter n");
//     scanf("%d",&n);
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1){
//         printf("number is not prime");
//     }
//     else{
//         printf("number is prime");
//     }

// }
//5=1,5
//6=1,2,3,6


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=10;
    int flag= primeNumber(n);
    if(flag==1){
        printf("Not Prime :");
        return;
    }
    printf("Prime");
    return 0;
}

int primeNumber(int x){
    for(int i=0;i<x/2;i++){
        if(x%i==0){
            return 1;
        }
    }
    return 0;
}
