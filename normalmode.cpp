//This is the normal mode of the 2nd program -
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	int inl,n;
	cin>>inl;
	cout<<"Enter the number of requests : ";
	cin>>n;
    int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}  
	for (int i = 0; i < n-1; i++){
       for (int j = 0; j < n-i-1; j++){
           if (a[j] > a[j+1]){
           int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
	}
}
	    if(a[0]>=inl){
	    	cout<<inl<<" ";
	    	for(int i=0;i<n;i++)
	    	   cout<<a[i]<<" ";
	    	cout<<"\nTotal Distance: "<<(a[n-1]-inl);}
	    else if(a[n-1]<=inl){
	    	for(int i=0;i<n;i++)
	    	   cout<<a[i]<<" ";
	    	   cout<<inl;
	    	cout<<"\nTotal Distance: "<<(inl-a[0]);
		}
		else{
		int i;
		for(i=0;i<n;i++){
		if(inl<a[i]){
		    break;
			}
		}
        cout<<inl<<" ";	
		for(int j=i;j<n;j++){
			cout<<a[j]<<" ";
		}
		for(int j=i-1;j>=0;j--){
			cout<<a[j]<<" ";
		}
		cout<<endl;
		cout<<"Total distance: "<<(2*a[n-1]-inl-a[0])<<endl;
		cout<<inl<<" ";
		for(int j=i-1;j>=0;j--){
			cout<<a[j]<<" ";
		}
		for(int j=i;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl<<"Total distance: "<<(a[n-1]+inl-2*a[0]);
		}
	return 0;
}
