//explicit euler method for dx/dt=-3x x(0)=1

#include <iostream>
#include <fstream>
using namespace std;

int main ()

{


//string line;
//ifstream myfile  ("params.dat");
 
// while  

double dt;
int t_beg,t_end,n;

t_beg=0;
t_end=15;
dt=.1;

n=t_end/dt + 1;


int x [n];
int t [n];

int x_0=1;
x[0]=x_0;
t[0]=t_beg;

for (int i=0;i<=n;++i) {
    x[i+1]=(1-3*dt)*(x[i]);
    t[i+1]=(t[i]+dt);
}


for (int i=0;i<n;i++) {
    cout<<i<<'\t'<<x[i]<<endl;
}
return 0;
}
