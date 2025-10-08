#include<stdio.h>
#include<string.h>
int main()
{
//     char str[]="hello";
//     int freq[256]={0};
//     int ln= strlen(str);
//     for(int i=0;i<ln;i++)
//     {
//         freq[str[i]]++;
//     }
//     for(int i=0;i<256;i++)
//     {
//         if(freq [i]>0)
//         {
//             printf("%c: %d\n",i,freq[i]);
//         }
//     }
// }



// char str[]="cabbak";
// int freq[256]={0};
// int ln=strlen(str);
// for(int i=0;i<ln;i++){
//     freq[str[i]]++;
// }
// for(int i=0;i<256;i++){
//     if(freq[i]==1){
//         printf("%c: %d\n",i,freq[i]);
//     }
// }
// }


// char str[]="aabbccdd";
// int freq[256]={0};
// int ln=strlen(str);
// for(int i=0;i<ln;i++){
//     freq[str[i]]++;
// }
// for(int i=0;i<256;i++){
//     if(freq[i]>0){
//         printf("%c%d",i,freq[i]);
//     }
// }
// }

char str[]="abcdd";
char target='a';
char newstr[100];
int j=0;
int ln=strlen(str);
for(int i=0;i<ln;i++){
    if(str[i]!=target){
        newstr[j]=str[i];
        j++;
    }
}
}