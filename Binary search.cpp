#include<iostream>
using namespace std;
int index(int arr[], int target){
    int s = 0;
    int e = 6-1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return mid;

}

int main(){
    int arr[] = {1,3,4,5,6,7};
    int target = 8;

    cout<<index(arr,target);
}
