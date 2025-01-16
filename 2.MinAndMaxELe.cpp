#include<iostream>
using namespace std;
void Max(int *arr,int size){
    int large =arr[0] ;
   for(int i = 0;i<size;i++){
      if(large<arr[i]){
        large = arr[i];
      }
   }
   cout<<"Maximum number of the Array:-"<<" "<<large<<endl;
    }
    void Min(int *arr,int size){
        int min = arr[0] ;
        for(int i = 0;i<size;i++){
            if(min>arr[i]){
               min = arr[i];
            }
        }
        cout<<"Minimum number of the Array:-"<<" "<<min<<endl;
    }
int main(){
    int size;
    cout<<"Enter Size of Element:-"<<" ";
    cin>>size;
    int arr[size];
    for(int i = 0;i<size;i++){
    cout<<"Enter element at index "<<i<<":-"<<" ";
    cin>>arr[i];
    }
    Max(arr,size);
    Min(arr,size);
    return 0;
}