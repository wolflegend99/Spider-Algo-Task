//This is the 1st task - Encrypt it!!!
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
char* encrypt(char a[], int k){
int i=0;
while(a[i]!='\0'){
	if(a[i]>=65 && a[i]<=90){
		a[i]=a[i]+k;
		if(a[i]>90)
		a[i]=a[i]-26;
	}
    else if(a[i]>=97 && a[i]<=122){
	 	a[i]=a[i]+k;
	 	if(a[i]>122)
	 	a[i]=a[i]-26;
    }
 i++;
}
	return a;				 
	}
	char* decrypt(char a[], int k){
	int i=0;
	while(a[i]!='\0'){
		if(a[i]>=65 && a[i]<=90){
		 	a[i]=a[i]-k;
		 	if(a[i]<65)
		 	a[i]=a[i]+26;
			 }
        else if(a[i]>=97 && a[i]<=122){
		 	a[i]=a[i]-k;
		 	if(a[i]<97)
		 	a[i]=a[i]+26;
			 }
			 i++;
		}
		return a;			 
	}
int main(){
	int n,k;
	cin>>n>>k;
	k%=26;
	for(int i=0;i<n;i++){
		char a[100];
		cin>>a;
		cout<<"ciphertext#"<<i+1<<":"<<encrypt(a,k)<<endl;
	}
	for(int i=0;i<n;i++){
		char a[100];
		cin>>a;
		cout<<"plaintext#"<<i+1<<":"<<decrypt(a,k)<<endl;
	}
	return 0;
}
