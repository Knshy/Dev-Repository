#include<iostream>

namespace knsh_{

    void by_ArchValue(int arch[5], int n){
        for(int i = 0; i < 5; i++){
            std::cin>>arch[i];

            if(arch[i] > n){
                n = arch[i];
            }
        }
        
        std::cout<<"Max value = "<<n<<std::endl;
    }
};
int main(){
    
    int arch[5];
    int n = 0;

    knsh_::by_ArchValue(arch,n);

    return 0;
}