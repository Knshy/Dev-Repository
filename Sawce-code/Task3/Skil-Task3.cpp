#include<iostream>
#include<vector>

namespace knsh_{

  void anotherVector(std::vector<int>test,int n, int m,bool n1){
     
    n1 = true;

    while(n1){
      std::cout<<"Push some numbers = ";
      std::cin>>n;

      test.push_back(n);

      if(n == 0){
        n1 = false;
      }
    }

    for(int based:test){
      if(based > m){
        m = based;
      }
    }
    std::cout<<"Max value on the list of numbers is = "<<m<<std::endl;
  }  
};

int main(){
    
  std::vector<int>test;
  int n = 0;
  int m = 0;
  bool n1;

  knsh_::anotherVector(test,n,m,n1); // btw I really don't know if bool n1 is necessary XD


  //  do{
  //    std::cout<<"Push some numbers = ";
  //    std::cin>>n;
  
  //    test.push_back(n);    
  //}while (n != 0);
  
  //  for(int testing:test){
  //     if(testing > m){
  //       m = testing;
  //     }
  //  }
  //
  // std::cout<<"\nMax value = "<<m<<std::endl;

  return 0;
}

// All the task are complete :3