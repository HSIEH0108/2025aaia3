///week04-4a.cpp Part1:Input Part2:Output
///UVA100 The 3n + 1
#include <iostream>
using namespace std;
int main()
{
	int a,b;//Part1:Input
	while(cin >> a >> b){
		int ans=0;
		int a2=a,b2=b;
		if(a2>b2)swap(a2,b2);
		for(int i=a2;i<=b2;i++){//part 5
			int now=1;//part4
			int n=i;
			while(n!=1){ //Part3
				if(n%2==1) n=3*n+1;
				else n = n/2;
				now++;//Part 4
			}
			///ans will be here!
			if(now > ans)ans = now;//Part 4
		}
		printf("%d %d %d\n",a,b,ans);
	}//Part2:Output
}
