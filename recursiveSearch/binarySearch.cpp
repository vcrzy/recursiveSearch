#include<iostream>
using namespace std;

int binarySearch(int n, int i, int f, int v[]) {
   
	int half;
   
   if (i == f-1)
   {
		return f;
   }
   else 
   {
		half = int(i + f)/2;
		if (v[half] < n)
		{		
			return binarySearch( n, half, f, v);
		}
        else
	    {
			return binarySearch( n, i, half-1, v);
		}		
	} 
}


int main()
{
	cout<<binarySearch(19,1,99,99);
}