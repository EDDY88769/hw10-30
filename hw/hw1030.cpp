#include<iostream>
using namespace std;
void becomebig(int *&arr,int size,int newsize){
	int *bigarr=new int [newsize];
	copy(arr,arr+size,bigarr);
	
	//��᭱�X�W��������s�i�h 
	for(int i=size;i<newsize;i++){
		bigarr[i]=0;
	}
	
	delete[] arr;
	arr=bigarr;
} 


int main(){
	int size;
	//���ϥγo��J�}�C�j�p 
	cout<<"�п�J�@�Ӱ}�C�j�p:";
	cin>>size;
	
	int *arr=new int [size];
	
	//���}�C�]�w�� 
	for(int i=0;i<size;i++){
		arr[i]=i+1;
	}
	
	//�L�X�X�W�e���}�C 
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int newsize=size*2;
	becomebig(arr,size,newsize);
	
	//�L�X�X�W�᪺�}�C 
	for(int i=0;i<newsize;i++){
		cout<<arr[i]<<" ";
	} 
} 
