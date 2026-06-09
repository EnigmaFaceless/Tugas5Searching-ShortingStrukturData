#include <iostream>
using namespace std;

int main(){
	int L[5],i,K,temp;
	
	L[0]=1;
	L[1]=50;
	L[2]=10;
	L[3]=3;
	L[4]=2;
	//PROSES SECARA ASCENDING (NAIK)
	for (i=0; i<=4; i++){
		for (K=4; K>=0; K--){
		if (L[K]<L[K-1])
		{
		temp=L[K];
		L[K]=L[K-1];
		L[K-1]=temp;	
			}	
		}
		
	}
	cout<<"Hasil Urut Ascending :\n";
	for (int i=0; i<=4; i++)
	cout<<L[i]<<endl;
	return 0;}
