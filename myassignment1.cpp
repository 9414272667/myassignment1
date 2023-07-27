#include<iostream>

using namespace std;

int main()
{
	int input,index,p,q,r,s;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
	int arr[1000];
	
	for(index=0; index<=1000; index++)
	{
		arr[index] = rand()%5999+1000;
	}
	
	for(input=0; input<=1000; input++)
	{
	 p=arr[input]%10000/1000;
	 q=arr[input]%1000/100;
	 r=arr[input]%100/10;
	 s=arr[input]%10;
	 
	 if(p>q && p>r && p>s)
	 {
	 	cout<<arr[input]<<" is the base of "<<p+1<<endl;
	 	if(p+1==1)
		 {
	 	    a1++;
		 }
		 
		 else if(p+1 == 2)
		 {
		 	a2++;
		 }
		 
		 else if(p+1 == 3)
		 {
		 	a3++;
		 }
		 
		 else if(p+1 == 4)
		 {
		 	a4++;
		 }
		 
		 else if(p+1 == 5)
		 {
		 	a5++;
		 }
		 
		 else if(p+1 == 6)
		 {
		 	a6++;
		 }
		 
		 else if(p+1 == 7)
		 {
		 	a7++;
		 }
		 
		 else if(p+1 == 8)
		 {
		 	a8++;
		 }
		 
		 else if(p+1 == 9)
		 {
		 	a9++;
		 }
		 
		 else if(p+1 == 10)
		 {
		 	a10++;
		 }
	 }
	 
	 else if(q>p && q>r && q>s)
	 {
	 	cout<<arr[input]<<" is the base of "<<q+1<<endl;
	 	if(p+1==1)
		 {
	 	    a1++;
		 }
		 
		 else if(p+1 ==2)
		 {
		 	a2++;
		 }
		 
		 else if(p+1 == 3)
		 {
		 	a3++;
		 }
		 
		 else if(p+1 == 4)
		 {
		 	a4++;
		 }
		 
		 else if(p+1 == 5)
		 {
		 	a5++;
		 }
		 
		 else if(p+1 == 6)
		 {
		 	a6++;
		 }
		 
		 else if(p+1 == 7)
		 {
		 	a7++;
		 }
		 
		 else if(p+1 == 8)
		 {
		 	a8++;
		 }
		 
		 else if(p+1 == 9)
		 {
		 	a9++;
		 }
		 
		 else if(p+1 == 10)
		 {
		 	a10++;
		 }	
	 	
	 }
	 
	 else if(r>p && r>q && r>s)
	 {
	 	cout<<arr[input]<<" is the base of "<<r+1<<endl;
	 	if(p+1==1)
		 {
	 	    a1++;
		 }
		 
		 else if(p+1 == 2)
		 {
		 	a2++;
		 }
		 
		 else if(p+1 == 3)
		 {
		 	a3++;
		 }
		 
		 else if(p+1 == 4)
		 {
		 	a4++;
		 }
		 
		 else if(p+1 == 5)
		 {
		 	a5++;
		 }
		 
		 else if(p+1 == 6)
		 {
		 	a6++;
		 }
		 
		 else if(p+1 == 7)
		 {
		 	a7++;
		 }
		 
		 else if(p+1 == 8)
		 {
		 	a8++;
		 }
		 
		 else if(p+1 == 9)
		 {
		 	a9++;
		 }
		 
		 else if(p+1 == 10)
		 {
		 	a10++;
		 }
	 }
	 
	 else if(s>p && s>q && s>r)
	 {
	 	cout<<arr[input]<<" is the base of "<<s+1<<endl;
	 	if(p+1==1)
		 {
	 	    a1++;
		 }
		 
		 else if(p+1 ==2)
		 {
		 	a2++;
		 }
		 
		 else if(p+1 == 3)
		 {
		 	a3++;
		 }
		 
		 else if(p+1 == 4)
		 {
		 	a4++;
		 }
		 
		 else if(p+1 == 5)
		 {
		 	a5++;
		 }
		 
		 else if(p+1 == 6)
		 {
		 	a6++;
		 }
		 
		 else if(p+1 == 7)
		 {
		 	a7++;
		 }
		 
		 else if(p+1 == 8)
		 {
		 	a8++;
		 }
		 
		 else if(p+1 == 9)
		 {
		 	a9++;
		 }
		 
		 else if(p+1 == 10)
		 {
		 	a10++;
		 }
	 } 
    }
	
	cout<<"Base 1 : "<<a1<<endl;
	cout<<"Base 2 : "<<a2<<endl;
	cout<<"Base 3 : "<<a3<<endl;
	cout<<"Base 4 : "<<a4<<endl;
	cout<<"Base 5 : "<<a5<<endl;
	cout<<"Base 6 : "<<a6<<endl;
	cout<<"Base 7 : "<<a7<<endl;
	cout<<"Base 8 : "<<a8<<endl;
	cout<<"Base 9 : "<<a9<<endl;
	cout<<"Base 10 : "<<101<<endl;	
	
  int b1;
  int b2;
  int b3;
  int b4;
  int b5;
  int b6;
  int b7;
  int b8;
  int b9;
  int b10;
  cout<<"1:"<<endl;
  for (b1 = 1; b1 < a1 + 1; b1++) {
  	
    cout<<"* "<<endl;
  }
  cout<<endl;
  cout<<"2:";
  for (b2 = 1; b2 < a2 + 1; b2++) {
  
    cout<<"*";
  }
  cout<<a2;
  cout<<endl;
  cout<<"3:";
  for (b3 = 1; b3 < a3+1; b3++) {
  	
    cout<<"*";
  }
  cout<<a3;
  cout<<endl;
  cout<<"4  ";
  for (b4 = 1; b4 < a4 + 1; b4++) {
  	
    cout<<"*";
  }
  cout<<a4;
  cout<<endl;
  cout<<"5  ";
  for (b5 = 1; b5 < a5 + 1; b5++) {

    cout<<"*";
  }
  cout<<a5;
  cout<<endl;
  cout<<"6  ";
  for (b6 = 1; b6 < a6 + 1; b6++) {
   
    cout<<"*";
  }
  cout<<a6;
  cout<<endl;
  cout<<"7  ";
  for (b7 = 1; b7 < a7 + 1; b7++) {
  	
    cout<<"*";
  }
  cout<<a7;
  cout<<endl;
  cout<<"8  ";
  for (b8 = 1; b8 < a8 + 1; b8++) {
  	
    cout<<"*";
  }
  cout<<a8;
  cout<<endl;
  cout<<"9  ";
  for (b9 = 1; b9 < a9 + 1; b9++) {
  	
    cout<<"*";
  }
  cout<<a9;
  cout<<endl;
  cout<<"10 ";
  for (b10 = 1; b10 < a10 + 1; b10++) {
  	
    cout<<"*";
  }
  cout<<a10;
  cout<<endl;
	return 0;
	
}
