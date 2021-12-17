#include<iostream>
#include<vector>
#include<string>
using namespace std;

// vector<string> get_stair_paths(int n) {
//   //Write your code here
// }

// int main() {
//   int n;
//   cin >> n;
//   vector<string> ans = get_stair_paths(n);
//   int cnt = 0;

//   cout << '[';
//   for (string str : ans) {
//     if (cnt != ans.size() - 1)
//       cout << str << ", ";
//     else
//       cout << str;
//     cnt++;
//   }
//   cout << ']';
// }


void printStairPaths(int n, string psf){
    // write your code here

	if(n<=0)
	{
		cout<<psf<<"\n";
       return;
	}
    
    for(int jump=1;jump<=3 and n-jump>=0;jump++)
    {
    	printStairPaths(n-jump,psf + to_string(jump));
    }
    
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}