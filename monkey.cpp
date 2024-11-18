#include <iostream>
using namespace std;
int main() {
    float cal=0;
    for(int i=1;i<=5;i++)
{
if(i%2==1){
    cal=cal+3;
}
else if (i%2==0){
     cal=cal-1.2;
}

}
cout<<cal;
    return 0;
}