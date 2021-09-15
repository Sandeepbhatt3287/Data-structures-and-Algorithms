//In a country of novice government, the economic system is changed where only coins are used that
//too of various denominations. Whenever a foreigner visits this country, they visit a money exchanger
//to get the currency of the same country. As the foreigner is unaware of the denomination of the country,
//the money exchange prefers to tell them the denomination which is the nearest maximum and nearest 
//minimum to the denomination mentioned by the foreigner. In case they get the correct guess of the 
//denomination, they are told the same denomination. The denominations are always quoted in ascending order.

//Example 1: In a country, 8 given denominations are as follows
//[5, 10, 15, 22, 33, 40, 42, 55]
//
//The foreigner asks for denomination 25.
//The money exchange tells them that denominations of 33 and 22 are available.
//
//Example 2: 
//In a country, 5 given denominations are as follows
//[7, 14, 18, 25, 30]
//
//The foreigner asks for the denomination of 18.


#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
   int low=0;
    int high =n-1;
    int data ;
    cin>>data;
    
    
    while (low <=high)
    {
        int mid = (low+high)/2;
        if (data>a[mid])
        {
            low=mid+1;
        }else if(data <a[mid])
        {
            high=mid-1;
        }else
        {
            cout<<mid<<endl;
            return 0;
        }
    }
      cout<<a[low]<<endl;
      cout<<a[high]<<endl;
}
