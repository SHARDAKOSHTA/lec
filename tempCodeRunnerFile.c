 #include<stdio.h>
 int main()
 {
//     
// int a=10;
// 	if(a<11){
// 		printf("hello");
// 	}
// 	else{
// 		printf("hii");
// 	}
// }
// int a=6;
// switch(a)
// {
// 	case 1:
// 	printf("monday");
// 	break;
// 	case 2:
// 			printf("tuesday");
// 		break;
// 		case 3:
// 			printf("wednesday");
// 			break;
// 			case 4:
// 				printf("thursday");
// 				break;
// case 5:
// 					printf("friday");
// 					break;
// 					case 6:
// 						printf("saturday");
// 							break;
// 							dafault:
// 								printf("sunday");
// 								break;							}
// int n=234;
// int count=0;
// if(n==0){
//    count=1;
// }
// while (n>0)
// {
//    count++;
//    n=n/10;
// }
//    printf("%d",count);
// return 0;
// }
// char ch;
// printf("entre a character");
// scanf("%c", &ch);
// switch(ch)	
// {
// 	case 'a': case 'e': case 'i': case 'o': case 'u':
// 		case 'A': case 'E': case 'I': case 'O': case 'U':
// 		printf("vowels\n");
// 		break;
// 		default:
// 			printf("consonant\n");
// 			break;
// 		}
// 	}
// for(int i=0;i<4;i++){
// // 	printf("\n*");
// // }
// 	for(int j=0;j<4;j++){
// 		printf("*");
// 	}
// 	printf("\n");
// }
// }
// for(int i=0;i<4;i++){
// 	for(int j=0;j<=i;j++){
// 		printf("*");
// 	}
// 	printf("\n");
// }
// }
// for(int i=0;i<5;i++){
// 	for(int j=3;j>i;j--){
// 		printf("*");
// 	}
// 	printf("\n");
// }
// }


// for(int i=0;i<5;i++){
// 	for(int j=0;j>i;j--){
// 		printf(" ");
// 		for(int k=5;k<i;k++){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }
// int num=65;
// for(int i=0;i<4;i++){
// 	for(int j=0;j<=i;j++){
// 	printf("%c",num++);
// 	}
// 	printf("\n");
// }

// }
// int i,j,k,p;
// for(int i=0;i<7;i++){
// 	for(int j=5;j>i;j--){
// 		printf(" ");
// 	}
// 	for(int k=0;k<=i;k++){
// 		printf("*");
// 	}
// 	for(int p=1;p<=i;p++){
// 		printf("*");
// 	}
// 	printf("\n");
// }
// }
// for(int i=0;i<4;i++){
// 	for(int j=0;j>i;j--){
// 		printf(" ");
// 	}
// 	for(int k=0;k<=i;k++){
// 		printf("*");
// 	}
// 	for(int p=3;p<=i;p++){
// 		printf("*");

// 		}
		
// 		printf("\n");
// 	}
// }
//BUTTERFIL PATTERN:

// for(int i=0;i<6;i++){
// 	for(int j=0;j<i;j++){
// 		printf("*");
// 	}
// 	for(int k=6;k>i;k--){
// 		printf(" ");
// 	}
// 	for(int m=6;m>i;m--){
// 		printf(" ");
// 	}
// 	for(int n=0;n<i;n++){
// 		printf("*");
// 	}
// 	printf("\n");
// }
// for(int i=0;i<6;i++){
// 	for(int j=6;j>i;j--){
// 		printf("*");
// 	}
// 	for(int k=0;k<i;k++){
// 		printf(" ");
// 	}
// 	for(int m=0;m<i;m++){
// 		printf(" ");
// 	}
// 	for(int n=6;n>i;n--){
// 		printf("*");
// 	}
// 	printf("\n");
// }
// }

//SQUARE PATTERN:

// int n=5;
// for(int i=0;i<n;i++){
//     printf("*");
// }
// printf("\n");
// for(int i=0;i<n-2;i++){
//     printf("*");
// for(int j=0;j<n-2;j++){
//     printf(" ");
// }
// printf("*\n");
// }
// for(int i=0;i<n;i++){
//     printf("*");
// }
// }

//2nd method of square type:
 
// int n=5;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if( i==1 || i==n || j==1 || j==n){
//             printf("*");
//         }
//         else {
//             printf(" ");
//         }
//     }
//         printf("\n");
//     }
// }

//FUNCTION:

// int sum(){
//     int a=5;
//     int b=10;
//     int c=a+b;
//     printf("%d",c);
// }
// int main(){
//     sum();
//     sum();
// }

//CROSS PATTERN:

//     int i,j;
// for( int i=0;i<=6;i++){
//     for(int j=0;j<=6;j++){
//         if(i==j || j==6-i){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//     }
//         printf("\n");
//     }
//     return 0;
// }

  
//EVEN /ODD:

// int sum(a){
//     scanf("%d",&n);
//     if(a%2==0){
//         printf("EVEN\n");
//     }
//     else{
//         printf("ODD\n");
//     }
//     int main(){
//         sum();
//     }

//RETURN TYPE:

// int sum(){
//     int a=5;
//     int b=10;
//     int c=a+b;
//     return c;
// }
// int main(){
//     int data=sum();
//     printf("%d",data);
// }

//ARRAY : 

// int arr[7]={1,3,4,6,5,-5,1};
// int k=7;
// for(int i=0;i<7;i++){
//     for(int j=0;j<7;j++){
//         if(arr[i]+arr[j]==k){
//             printf("%d %d",i,j);
//             break;
//         }
//     }
// }
//  }
// int arr[5]={1,2,3,2,1};
// int check=1;
// for(int i=0;i<5/2;i++){
//     if(arr[i]!=arr[5-1-i]){
//         check=0;
//         break;
//     }
// }
// if(check==1){
//     printf("p");
// }
// else{
//     printf("not");
// }
// }
// int arr[5]={10,20,30,40,50};
// int f=arr[0];
// for(int i=0;i<5;i++){
//       arr[i]=arr[i+1];
// }
// arr[4]=f;
//  }

int arr[5]={2,3,-4,-8,-1};
int maxsum=0;
for(int i=0;i<5;i++){
    int cursum=0;
    for(int j=0;j<5;j++){
        cursum=cursum+maxsum;
        if(cursum>maxsum){
            maxsum=cursum;
        }
    }
}
printf("%d",maxsum);
 }