#include <bits/stdc++.h>
using namespace std;

void xu_ly(int a[], int b[], int c[], int i, int j,int &tam){
	i = 0;
	j = 0;
	while((i < 4) && (j < 4))
	{
		if(a[i] < b[j])
		{
			c[tam] = a[i];
			tam++; 
			i++;
		}
		else 
		{
			c[tam] = b[j];
			tam++; 
			j++; 
		}
	}
	for(i = 0; i < 4; i++)
	{
		c[tam] = a[i];
		tam++;
	}
	for(j = 0; j < 4; j++)
	{
		c[tam] = b[j];
		tam++;
	}
	for (int i = 0; i < 8; i++){
		cout << c[i] << " ";
	}
}
int main(){
	int a[4] = {1,3,6,8};
	int b[4] = {2,5,9,10};
	int c[8];
	int i = 0;
	int j = 0; 
	int tam;
	xu_ly(a,b,c,i,j,tam);
}
