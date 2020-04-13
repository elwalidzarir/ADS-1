/*#include <iostream>

using namespace std;
int put_elements_in_order(int* arr,int num_of_elements){
    int box;
    for(int i=0;i<num_of_elements;i++){
        for(int j=i+1;j<num_of_elements;j++){
            if(arr[i]>arr[j]){
                box=arr[i];
                arr[i]=arr[j];
                arr[j]=box;
            }
        }
    }
    for(int w=0;w<num_of_elements;w++){
        cout<<arr[w]<<endl;
    }
}
int cbinsearch(int* arr,int length,int value){
    int first=0;
    int last=length-1;
    int middle=(last+first)/2;
    while (first <= last)
	{
		if(arr[middle] < value){
			first = middle + 1;
		}
		else if(arr[middle] == value){
			return middle;
			break;
		}
		else{
			 last = middle - 1;
		}
		middle = (first + last)/2;
		if(first > last){
		      middle=-1;
		}
    return middle;
}
}
int countRepitition(int* arr, int size, int x)
{
    int counter=0;
    int indice=finding_value_in_array(arr,size,x);
    for(int i=0;i<size;i++){
        if(arr[i]==arr[indice]){
        counter++;
        }
   }
   return counter;
}
