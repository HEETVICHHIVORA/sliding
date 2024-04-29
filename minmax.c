#include<stdio.h>

#include<limits.h>

int min=INT_MAX;

int max=INT_MIN;

void findminmax(int arr[],int l,int r)

{

  if(l==r){

   min=arr[l];

   max=arr[r];

   return;

  }

  else if(l==r-1){

   if(arr[l]>arr[r]){

  min=arr[r];

  max=arr[l];

  return;

   }

   else{

   min=arr[l];

   max=arr[r];

   return;

   }

  }

  else{

   int mid=(l+r)/2;

   findminmax(arr,l,mid);

   int max1=max;

   int min1=min;

   findminmax(arr,mid+1,r);

   if(min1<min)

   {

min=min1;

   }

   if(max1>max)

   {

max=max1;

   }

  }

}

void main()

{int n;

 

printf("Enter the size of Array : ");

scanf("%d",&n);

int arr[1000];

for(int i=0;i<n;i++){

if(i==0){

printf("Enter %dst element of Array : ",i+1);

}

else if(i==1){

printf("Enter %dnd element of Array : ",i+1);

}

else if(i==2){

printf("Enter %drd element of Array : ",i+1);

}

else{

printf("Enter %dth element of Array : ",i+1);

}

scanf("%d",&arr[i]);

}

findminmax(arr,0,n-1);


printf("Minimum:%d",min);

printf("\nMaximum:%d",max);


}