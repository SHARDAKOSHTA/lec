#include<stdio.h>
// #include<string.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
printf("entre the value of these points:\n");
scanf("%lf %lf %lf %f %f %f ",&x1,&y1,&x2,&y2,&x3,&y3);
double m1=(y2-y1)/(x2-x1);
double m2=(y3-y2)/(x3-x2);
if(m1==m2){
	printf("%lf is straight line",m1);
}
else{
	printf("%lf is not",m2);
}
}
    // char str[]="hii";
//     int ln=strlen(str);
//     // printf("%c",str[0]);
// //     printf("%s",str);
// // }
// for(int i=0;str[i]!=0;i++){
//     printf("%c\n",str[i]);
// }
// }
// for(int i=2;str[i]!=0;i--){
//     printf("%c\n",str[i]);
// }
// }
// char newstr[10];

// for(int i=0;str[i]!=0;i++){
//     newstr[i]=str[i];
//     printf("%c\n",newstr[i]);
// }
// }
// char str[]="madam";
// int ln= strlen(str);
// int istrue=1;
// for( int i=0;i<ln/2;i++){
//     if(str[i]!=str[ln-i-1]){
//         istrue=0;
//         break;
//     }
// }
//     if(istrue==1){
//         printf("palindrome");
//     }
//     else{
//         printf("not palindrome");
//     }
// }

// char str[]="mmnnkkllooppss";
// int count=0;
// int ln=strlen(str);
// for(int i=0;i<ln;i++){
//     for(int j=i+1;j<ln;j++){
//         if(str[i]==str[j]){
//             count++; 
//             break;
//         }
//     }
// }
// printf("%d\n",count);
// return 0;
// }



