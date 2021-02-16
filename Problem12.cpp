#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int divNum(int x){
    vector<int> divisors;
    vector<int> divNums;
    int tempNum=0;
    for(int i =2;x!=1 && i<19;i++){
        cout<<i<<endl;
        if(x%i==0){
            divisors.push_back(i);
            do{
                x/=i;
                tempNum++;
            } while (x%i==0);
            divNums.push_back(tempNum);
            tempNum=0;
        }
    }
    int divNum=1;
    for(int i=0; i < divNums.size(); i++){
        divNum*=(divNums[i]+1);
    }
    return divNum;
}
using namespace std;


int main() {
   for(int i = 4;;i++){
        if(divNum(i*(i+1)/2) > 500){
            std::cout<<i*(i+1)/2;
            break;
        }
    }
    return 0;
}
