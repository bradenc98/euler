//explicit euler method for dx/dt=-3x x(0)=1

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main ()

{

string line;
double timestep;
int steps;

ifstream myfile ("params.dat");
if(myfile.is_open())


{
	while(getline(myfile,line))
	{
			
	istringstream ss(line);
	ss >> timestep >> steps;

        

        
	}
	myfile.close();
	
}
else
	cout<<"error";   

//cout<< timestep <<" "<< steps << endl ;
double dt;
int t_beg,t_end,n;

t_beg=0;
t_end=10;
dt=timestep;

//n=t_end/dt + 1;
n=steps;

double x [n];
double t [n];

int x_0=1;
x[0]=x_0;
t[0]=t_beg;

for (int i=0;i<=n;++i) {
    x[i+1]=(1-3*dt)*(x[i]);
    t[i+1]=(t[i]+dt);
}


//for (int i=0;i<n;i++) {
  //  cout<<i*dt<<'\t'<<x[i]<<endl;

for (double i=1;i<10;i++) {
	int m=(int)( i/dt);
	cout<<i<<'\t'<<x[m]<<endl;
}
return 0;
}
