#include<stdio.h>
#include<limits.h>
int Bsearch(){
    int arr[6]={1,2,3,4,5,6};
    int s=0;
    int end=5;
     int target=4;
    while(s<=end){
        int mid=(s+end)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        s=mid+1;
    }
    else{
        s=mid-1;
    }
}
    return -1;
}
int main(){
	int data= Bsearch();
	printf("data");

}