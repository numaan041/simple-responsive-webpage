// SURAJ KR CHAUHAN
// 20MCA059

#include<iostream>

using namespace std;
int compute(int arr[],int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += abs(arr[i] - arr[i-1]);
    }
    return sum;

}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sortSpecialSelection(int arr[], int n)
{

    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
   

}
void printmax(int arr[],int n){
	cout<<compute(arr,n);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
sortSpecialSelection(arr,n);

printmax(arr,n);

}