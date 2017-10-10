#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
vector<vector<int> > MultiplicationTable;

    //initializing values 
MultiplicationTable.resize(13);

   for(int row=0; row<MultiplicationTable.size(); row++)
       {
         MultiplicationTable[row].size(13);

         for(int column=0; column<MultiplicationTable[row].size(); column++)
            {
             MultiplicationTable[column].size(13);

                 MultiplicationTable[row][column]=row*column;
               {
                 cout<<MultiplicationTable[row][column]<<"  "<<endl;

               }
              cout<<endl;
            }
       }
   return 0;
}

