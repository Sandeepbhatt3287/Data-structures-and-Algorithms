    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    int firstIndex(int arr[], int idx, int x, int n){
        // write your code here
        if (idx==n)
        return -1;
        
        firstIndex( arr,idx+1,x,n);
        // cout<<arr[idx]<<endl;
        if (arr[idx]==x)
        {
            cout<<idx<<endl; 
            break;
        }
    }
    
    int main()
    {
        int n;
        cin >> n;
        int d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> d;
        int p = firstIndex(arr, 0, d, n);
        cout << p << endl;
    }