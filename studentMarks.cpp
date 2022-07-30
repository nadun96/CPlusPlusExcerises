/*
IM 2018 010
L.A.M.N.U.Bandara
Assignment 02
2020.07.08
*/

#include <iostream> //Preprocessor directory
#include <iomanip>
using namespace std; //namespace std



//Create structure variable student
struct student
{
char name[15]; //to store name
int maths; //to store mathematics marks
int sci; //to store science marks
int eng; //to store English marks
int his; //to store  History marks
int tot; // to store aggregate value
};

//student structure to store students list
struct student SL[40];

//Declare variable to store number of students
int nos;

//read inputs function
void datainput()
{
    bool con = true;
    while(con)
    {
        cout<< "Enter number of students less than 40:"; //enter nmber of students
		cin>>nos;
        if (nos<41 && nos>0) //check no.stu
        {
            con = true;
            cout <<"\n";
            for (int x=0;x<nos;x++)
              {
                  cout<<"Student["<<x<<"]\n";
                  cout<<" Enter Student Name:";
                  cin>>SL[x].name;
                  int marks;
                  con = true;
                  while(con)
                  {
                      cout << "Enter Mathematics Marks[0:100]:";
                      cin>>marks;
                      if(marks > 0 && marks < 100)
                      {
                      SL[x].maths = marks;
                      con = false;
                      }
                      else
                      {
                        cout<< "Invalid data input!\n";
                      }
                  }
                  con = true;

                  while(con)
                  {
                      cout << "Enter Science Marks[0:100]:";
                      cin>>marks;
                      if(marks > 0 && marks < 100)
                      {
                         SL[x].sci = marks;
                         con = false;
                      }
                      else
                      {
                         cout<< "Invalid data input!\n";
                      }
                  }

                  con = true;
                  while(con)
                  {
                      cout << "Enter English Marks[0:100]:";
                      cin>>marks;
                      if(marks > 0 && marks < 100)
                      {
                         SL[x].eng = marks;
                         con = false;
                      }
                      else
                      {
                          cout<< "Invalid data input!\n";
                      }

                  con = true;
                  while(con)
                  {
                      cout << "Enter History Marks[0:100]:";
                      cin>>marks;
                      if(marks > 0 && marks < 100)
                      {
                         SL[x].his = marks;
                         con = false;
                      }
                      else
                      {
                          cout<< "Invalid data input!\n";
                      }

                  }
              }
        }
        }
        else
        {
            cout << "Invalid data input!\n";
        }

    }
}

//students data Sort function ascending order
void Asort()
{
	for(int i=0;i<nos;i++)
	{
	SL[i].tot=SL[i].maths + SL[i].sci + SL[i].eng +SL[i].his;
	}
    for(int i=0;i<nos;i++)
	{
		for(int j=i+1;j<nos;j++)
		{
			if(SL[i].tot>SL[j].tot)
			{
				student temp=SL[i];
				SL[i]=SL[j];
				SL[j]=temp;
			}
		}
	}
}  

//data printing function
void printdata()
{
	for(int i=0;i<nos;i++){
	cout<<"Rank\t"<<"total\t"<<"Name\n";
    cout<<nos-i<<"\t"<<SL[i].tot <<"\t"<< SL[i].name <<"\n";cout<<"maths\tscience\tenglish\thistory\n"<<SL[i].maths <<"\t"<< SL[i].sci<<"\t"<< SL[i].eng <<"\t"<< SL[i].his <<"\t";	
	cout<<endl;
}
}


int main()
{
	
    datainput();
    Asort();
    printdata();
    
    return 0;
}
