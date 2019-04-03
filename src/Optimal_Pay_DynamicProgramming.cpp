#include <iostream>
#include <fstream>
#include<map>

using namespace std;

   int main(int argc, char* argv[])
    {
        ifstream in(argv[1]);
        if(!in){
        cout<<"Cannot open  input file;"<<endl;
        return -1;
        }
    
    ofstream out(argv[2]);
    
    if(!out){
        cout<<"Cannot open  output file;"<<endl;
        return -1;
    }
        
    
/*reading input*/
       
int  n,c,value;
    int number;
	in>>number;

           int coins[number];
        
        for(int j=0;j<number;j++)
	       {
		  in>>coins[j];
	       }
            
          in>>value;
     
        int amount[value+1];
        int index[value+1];

/*intializing the amount and index arrays*/
       
        for(int i=0;i<=value;i++)
        {
            amount[i] = INT16_MAX;
            index[i] = -1;
        }

        amount[0]=0;
        
        for(int j=0;j<number;j++)
        {
            for(int i=1;i<=value;i++)
            {
                if(i>=coins[j])
                    if(amount[i-coins[j]]+1<amount[i])
                    {
                        amount[i]=amount[i-coins[j]]+1;
                        index[i]=j;
                    }
            }
        }



       
/*Generating the count*/
       
        int i=sizeof(index)/sizeof(index[0])-1;

        if(index[i]==-1)
            out<<0;
        else {          
             out<< 1 <<endl;
            
            map<int,int, std::greater<int> > output;
            while (i != 0) 
            { 
                int j = index[i];
                if(output.find(coins[j])!= output.end())
                    output[coins[j]]++;
                else
                   output[coins[j]]=1 ;

                i = i - coins[j];
            }
            
/*printing the output */
            
            map<int,int> :: iterator it;
            for(it=output.begin();it!=output.end();it++)
            {
                 
                int f= it->first;
                int s= it->second;
                if(it == --output.end())
                    out<<f<<"  "<<s;
                else
                out << f <<"  "<<s<<endl;
                
                
            }
        }
        return 0;
}

