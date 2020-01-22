//
//  main.cpp
//  lab1
//
//  Created by Gleb Zhutowskiy on 12/1/19.
//  Copyright © 2019 Gleb Zhutowskiy. All rights reserved.
//

//#include <iostream>
//#include <vector>
//using namespace std;
//int cubes(int n,int a=999)
//{
//    if(a==999) a=n;
//    if(n==0 || (n==1 && a>1)) return 1;
//    int out=0;
//    for(int i=a-1;i>0;--i){
//        out+=cubes(n-i,i);
//    }
//    return out;
//}
//int main()
//{
//        cout<<"Enter number of cubes: ";int num;
//        cin>>num;
//        cout<<cubes(num)+1<<endl;
//}

#include <iostream>

using namespace std;

int drobi(int prev_step, int n) {
  if (n == 0)
    return 1;

  int count = 0;
    
  for (int step = 1; step < prev_step; ++step) {
    if ((n - step) < 0)
      break;
    count += drobi(step, n - step);
  }

  return count;
}

int main()
{
  int n;
    
  cout << "Cubes:"; cin >> n;
    
  cout << drobi(n + 1, n)<<endl;
}
