#include<iostream>
using namespace std;
void becomebig(int *&arr,int size,int newsize){
	int *bigarr=new int [newsize];
	copy(arr,arr+size,bigarr);
	
	//把後面擴增的部分塞零進去 
	for(int i=size;i<newsize;i++){
		bigarr[i]=0;
	}
	
	delete[] arr;
	arr=bigarr;
} 


int main(){
	int size;
	//讓使用這輸入陣列大小 
	cout<<"請輸入一個陣列大小:";
	cin>>size;
	
	int *arr=new int [size];
	
	//幫陣列設定值 
	for(int i=0;i<size;i++){
		arr[i]=i+1;
	}
	
	//印出擴增前的陣列 
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int newsize=size*2;
	becomebig(arr,size,newsize);
	
	//印出擴增後的陣列 
	for(int i=0;i<newsize;i++){
		cout<<arr[i]<<" ";
	} 
} 
