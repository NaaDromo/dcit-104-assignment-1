#include <iostream>

using namespace std;

int main()
{
    int a,upto, num, sum = 0;



                    //take inpur from user
    cout<< "find the sum of prime numbers up to :";
    cin >> upto;



                   //sort out all prime numbers wihin the range given
    for(num = 2; num<upto; num++){
       for(a = 2; a<=(num / 2); a++){
           if(num%a ==0){
                a=num;
                break;
           }
       }



                   //if the number is prime,add it
        if(a !=sum){
            sum+=sum;
        }
     }


     cout << endl << "sum of all prime numbers upto" << upto << "is" << sum;


     return 0;


}
 
