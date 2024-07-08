
#include<iostream>
using namespace std;
int B[20],P[20],n,m,i,j,nb,np,high=0,temp;
static int Bf[20],Ff[20];
int main(){
cout<<"Enter the number of memory block"<<endl;
cin>>nb;
for(i=1;i<=nb;i++){
	printf("Enter size of B%d: ",i);
	cin>>B[i];
}
cout<<"Enter the number of Process "<<endl;
cin>>np;
for(i=1;i<=np;i++){
	printf("Enter size of P%d: ",i);
	cin>>P[i];
}
for(i=1;i<=np;i++){
	for(j=1;j<=nb;j++){
		if(Bf[j]!=1){
			temp=B[j]-P[i];
			if(temp>0){
				if(high<temp){
					Ff[i]=j;
					high=temp;
				}
			}
		}
	}       
	high=0;
	Bf[Ff[i]]=1;
}

for(i=1;i<=np;i++){
	printf("P%d allocated in M%d: \n",i,Ff[i]);
}
}







