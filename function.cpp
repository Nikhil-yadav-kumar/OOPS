// #include<iostream>
// using namespace std;
// void printhello(){
//     cout<<"hello";//function definition
// }
// int main(){
//     printhello();// function callingk
 
// }

// #include<iostream>
// using namespace std;
// int sum(int a,int b)
// {
// int s= a + b;}


// int main(){
//     cout<<sum(10,5)<<endl;
// }
// #include<iostream>
// using namespace std;
// int smallest(int a,int b){//parameters - it is the copy of arguements
//     if(a<b){
//         return a;
//     }
//     else{return b;}

// }

// int main(){
//     cout<<"min="<<smallest(14,32);//arguments-actual value passed to a function
 
// }

// #include<iostream>
// using namespace std;
// int sum(int n){
    
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
       

//     }
//     return sum;
// }
// int main(){
//     cout<<sum(7)<<endl;
//     cout<<sum(10);
 
// }

// #include<iostream>
// using namespace std;
// int fact(int n){
    
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     cout<<fact(5);
 
// }

#include<iostream>
using namespace std;
int sumofdigits(int num){
    int digsum=0;
    while(num>0){
        int lastdig=num%10;
        num/=10;
        
        digsum+=lastdig;
    }
    return digsum;
}
int main(){
    cout<<"sum =" <<sumofdigits(1234);
 
}