#include<stdio.h>

int comparator(const void *p, const void *q){

	int l = *((const int *) p);
	int r = *((const int *) q);
	
	if( (l&1) && (r&1) ){
		return (r-l);
	}
	if( !(l&1) && !(r&1)){
		return (l-r);
	}
    	if (!(r&1))   //FOR KEEPING THE EVEN FIRST INORDER TO TAKE ODD FIRST then replace r with l 
        	return 1; 
  	return -1; 
}

void printArr(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}

int main(){
	
	int arr[]={2,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	qsort(arr, size, sizeof(arr[0]),comparator);
	printArr(arr,size);
	return 0;
}
