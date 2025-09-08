
#include <iostream>
using namespace std;
#include <vector>

double search(vector <int>&arr1,vector <int>&arr2){
  int n1=arr1.size();
  int n2=arr2.size();

  int mid=(n1+n2)/2;
  int mid1=mid-1;

  int count =0;
  int  index1=-1;
  int index2=-1;

  int i=0;
  int j=0;

  while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j]){
      count=count+1;
      if(count==mid){
        index1=arr1[i];
      }
      if(count==mid+1){
        index2=arr1[i];
        
      }
      i++;
    }
    else{
       if(arr1[i]>arr2[j]){
      count=count+1;
      if(count==mid){
        index1=arr2[j];
      }
       if(count==mid+1){
        index2=arr2[j];
      }

      j++;
    }
  }
}

  while(j<n2){
    count=count+1;
     if(count==mid){
       index1=arr2[j];
     }
      if(count==mid+1){
        index2=arr2[j];
        
      }

     j++;
  }
    while(i<n1){
    count=count+1;
     if(count==mid){
       index1=arr1[i];
     }
     if(count==mid+1){
        index2=arr1[i];
      }
     i++;
  }
  if((n1+n2)%2==0){
    return  (double)(double)(index1+index2)/2.0;
  }
  else{
    return index1;
  }
}

int main(){
  vector <int> arr1={2,4,10,14,15};
  vector <int> arr2={1,3,5,9,11};

  double  result=search(arr1,arr2);
  cout<<result;
}