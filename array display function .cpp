//this programe is training to funtion and array ... 
//ENG ; mahmoud basyony 

#include<iostream>
#define size 10
//or const int size =10;  
using namespace std  ;
void display (int b[]);     //funtion prototypy
int avg(int b[], int length_array);
int max (int b[]) ;   //funtion prototype 
int sum (int b[]); // function prototype
void sort (int b []) ; //functon prototype 

int main ()
{

int a[size]={1,5,6,9,8,5,5,6,6,8} ;	
	
display(a); 	
cout<<"the max of this array is="<<max(a)<<endl ; 	
cout<<"the sum  of this array is="<<sum(a)<<endl ;
cout << "the average of this array is: " << avg(a,size) << endl;

sort(a) ; 	
display(a) ; 
	
	
	
	
	return 0; 
}
void display ( int b[] )
{
int a ; 
	for(int i=0;i<size;i++)
	cout<<b[i]<<endl ; 

}
int max (int b[])
{
	
 	int max=b[0] ; 
 	
 	for(int i=1;i<size ; i++)
 	  if (b[i]>max)
	   max=b[i] ; 
	
	
return max ; 	
}
int sum (int b[] )
{

int s= 0 ; 
for(int i=0;i<size ; i++)
    s+=b[i];    
	return s ; 
	  
}
void sort (int b [])
{
	int temp ; 
	for(int i=0;i<size;i++)
	for(int j=0;j<size;j++)
	if (b[i]<b[j])
	{
  		temp = b[i] ; 
  		b[i]=b[j];
 		b[j]=temp ; 
	  	
    }
	  
} 
int avg(int b[], int length_array){
	return sum(b)/length_array;
	
}
