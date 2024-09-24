#include <stdio.h>
int binarysearch(int num[],int target,int numsize){
    int left=0;
    int right=numsize-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(num[mid]==target){
            return mid;//如果成立则返回mid
        }
        else if(num[mid]<target){
            left=mid+1;
        }
        else if(num[mid]>target){//这里实际上可以只写else然后删掉条件项，但是为了教学我留下了条件项
            right=mid-1;
        }
    }
    return -1;//如果循环中找不到对应的target则返回-1.
}

int main(){
    int num[10]={0,1,2,3,4,5,6,7,8,9};
    int target;
    printf("Please give me your target:");
    scanf("%d",&target);
    int numsize=sizeof(num)/sizeof(num[0]);//计算数组长度

    int result=binarysearch(num,target,numsize);
    if(result!=-1){
        printf("Your target found:%d %d",target,result);
    }
    else{
        printf("We didn't found target: %d, Sorry",target);
    }
    return 0;
}
