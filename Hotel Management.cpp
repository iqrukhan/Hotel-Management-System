#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int c,z,p,f,k;
class Hotel
{
private:
	/*int ecoroom;
	int luxroom;*/
	
	
	
	float L1;
	float E1;
public:	
	string name;
	string phone;
	float rent;
	int status;
	Hotel()
	{
		name="blank";
		phone="blank";
		rent=0.0;
		L1=1000;
		E1=350;
		status=0;//if not available 1
		
		
	}

	float servicesE(int noofdays)
	{
		float laundry;
		float food;

		laundry=50;
		food=10;
		rent=noofdays*(food+laundry+E1);
		return rent;
	
	}
	float servicesL(int noofdays)
	{
		float laundry;
		float food;
		float wifi;

		laundry=60;
		food=50;
		wifi=15;
	
		
		rent=noofdays*(wifi+food+laundry+L1);
		return rent;
	
	}
	
	void eco(int x)
	{
		int nodays;
		for(int i=x;i<=x;i++)
		{
		cout <<"ROOM NO: "<<x<<endl;
		cout << "Enter Name;"<<endl;
		cin>>name;
		cout << "Enter phone;"<<endl;
		cin>>phone;
		status=1;
		cout<<"Enter no of days you want to stay:";
		cin>>nodays;
		cout << "Total rent:"<<endl;
		cout <<servicesE(nodays)<<"Rs"<<endl;
	
		}

	}
	void lux(int x)
	{
		int nodays;
		for(int i=x;i<=x;i++)
		{
		cout <<"ROOM NO:"<<x<<endl;
		cout << "Enter Name;"<<endl;
		cin>>name;
		cout << "Enter phone;"<<endl;
		cin>>phone;
		status=1;
		cout<<"Enter no of days you want to stay:";
		cin>>nodays;
		cout << "Total rent:"<<endl;
		cout <<servicesL(nodays)<<"Rs"<<endl;
		}

	}
		void records()
	{
		cout <<"Room Allotted to: " <<name<<endl;
		cout <<"Contact Number: " <<phone<<endl;
		cout <<" Total rent:  " <<rent <<endl;
	}
		

};



int main()
{
/////////////////////////////////////// Data is Retrieved in the beginning ///////////////////////////////////////
/////////////////////////////////// After Entering the Data REMEBER to Save Data ///////////////////////////////////	
	int pass;
	Hotel obj[10],objl[10];
	int choice;
			//Retrieving Data
			ifstream MyReadfile;

                               ///////////////////////////////////ecostatus//////////////////

                      
                      MyReadfile.open("Ecostatus.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>obj[f].status;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					   ///////////////////////////////////luxstatus//////////////////

                      
                      MyReadfile.open("luxstatus.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>objl[f].status;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					   ///////////////////////////////////econame//////////////////

                      
                      MyReadfile.open("econame.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>obj[f].name;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					  ///////////////////////////////////luxname//////////////////

                      
                      MyReadfile.open("luxname.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>objl[f].name;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					  ///////////////////////////////////ecophone//////////////////

                      
                      MyReadfile.open("ecophone.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>obj[f].phone;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					   ///////////////////////////////////luxphone//////////////////

                      
                      MyReadfile.open("luxphone.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>objl[f].phone;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					   ///////////////////////////////////ecorent//////////////////

                      
                      MyReadfile.open("ecorent.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>obj[f].rent;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					   ///////////////////////////////////luxrent//////////////////

                      
                      MyReadfile.open("luxrent.txt");
                      {
						  f=0;
                          if(MyReadfile.is_open())
                          {
                              while(!MyReadfile.eof())
                              {
                                  MyReadfile>>objl[f].rent;
								  f++;
                              }

                          }
                      }
					      MyReadfile.close();
					cout<<"Data is Retrieved"<<endl;

	cout << "Enter Password to continue: "<<endl;
	cin >> pass;
	if(pass==123)
	{
	
	do
	{
	
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\t* MAIN MENU *";
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\n\n\t\t\t1.Book A Room";
        cout<<"\n\t\t\t2.To Check Allotted Rooms";
        cout<<"\n\t\t\t3.Customer Record";
        cout<<"\n\t\t\t4.To Switch Room";
		cout<<"\n\t\t\t5.To Delete Room";
		cout<<"\n\t\t\t6.To Save Data";
		cout<<"\n\t\t\t7.To See All Rooms";
        cout<<"\n\t\t\t0.Exit";
        cout<<"\n\t\t\t****** PLEASE SAVE DATA BEFORE EXITING THE PROGRAM ******";
        cout<<"\n\n\t\t\tEnter Your Choice: ";
        cin>>choice;
	
		if(choice==1) //Book A Room
		{
			
			cout<<"Enter 1 for Economy suit and Enter 2 for Luxury suit: "<<endl;
			cin>> z;
			switch(z)
			{
			case 1: 
				int room;
				cout << "Enter room no:"<<endl;
				cout << "Enter 0-10:"<<endl;
				cin>>room;
				obj[room].eco(room);
				break;
			case 2:
				
				cout << "Enter room no:"<<endl;
				cout << "Enter 0-10:"<<endl;
				cin>>room;
				objl[room].lux(room);
				break;
			}
			
			
		
		
		}
		
		else
		if(choice==2)  //To Check Allotted Rooms
		{
			cout<<"check 1 for Economy suit and check 2 for Luxury suit: "<<endl;
			cin>> p;
			switch(p)
			{
			case 1:
			for(int i=0;i<10;i++)
			{
				if(obj[i].status==0)
				{
					cout <<"Room number " <<i <<" is avaliable: "<<endl;
				}

			}
			break;
			case 2:
			for(int i=0;i<10;i++)
			{
				if(objl[i].status==0)
				{
					cout <<"Room number " <<i <<" is avaliable: "<<endl;
				}

			}

			break;
			}
		}
		else
		
		if(choice==3)  //Customer Record
		{
			int troom;
			int p;
			cout << "press 1 for economy rooms and press 2 for luxury rooms "<<endl;
			cin>>p;
			switch(p)
			{
			case 1:
			cout << "Enter room number"<<endl;
			cin>>troom;
			obj[troom].records();
			break;
			case 2:
			cout << "Enter room number"<<endl;
			cin>>troom;
			objl[troom].records();
			break;
			}
		}
		else
		if(choice==4) //To Switch Room
		{
			int troom,temp=-1;
			cout << "Press 1 if you want to switch to luxury and 2 for economy: "<<endl;
			cin>>p;
			switch(p)
			{
			case 1:
			cout <<"Enter room number"<<endl;
			cin>>troom;
			for(int i=0;i<10;i++)
			{
			if(objl[i].status==0)
			{
				temp=i;
				
			}
			break;
			}
			if(temp!=-1)
			{
			obj[troom].status=0;
			objl[temp].lux(temp);
			}
			else
				cout << "Room is not avaliable"<<endl;
			break;
			
			case 2:
			cout <<"Enter room number"<<endl;
			cin>>troom;
			for(int i=0;i<10;i++)
			{
			if(obj[i].status==0)
			{
				temp=i;
				
			}
			break;
			}
			if(temp!=-1)
			{
			objl[troom].status=0;
			obj[temp].eco(temp);
			}
			else
				cout << "Room is not avaliable: "<<endl;
			break;
		}
			
		}
		else
		if(choice==5)  //To Delete Room
		{
			int troom;
			cout << "Press 1 to delete a room from economy suit and press 2 for luxuray suit: "<<endl;
			cin>>p;
			switch(p)
			{
			case 1:
				cout << "Enter room number you want to delete "<<endl;
				cin>> troom;
				obj[troom].status=0;
				obj[troom].name="blank";
				obj[troom].phone="blank";
				obj[troom].rent=0;
			break;
			case 2:
				cout <<"Enter room number you want to delete "<<endl;
				cin >> troom;
				objl[troom].status=0;
				objl[troom].name="blank";
				objl[troom].phone="blank";
				objl[troom].rent=0;
			break;
			}
		}
		if(choice==6)  //To Save Data
		{
			ofstream Myfile;
			/////////////////////////////ecostatus///////////////////////////
			Myfile.open("Ecostatus.txt");
			{
			for(int i=0;i<10;i++)
			{
			Myfile<<obj[i].status<<endl;
			}
			
			}
			Myfile.close();
		
			/////////////////////////////luxstatus///////////////////////////
			
			Myfile.open("luxstatus.txt");
			{
			for(int i=0;i<10;i++)
			{
			Myfile<<objl[i].status<<endl;
			}
			
			}
			Myfile.close();
			/////////////////////////////econoame///////////////////////////

		
			Myfile.open("econame.txt");
			{
			for(int i=0;i<10;i++)
			{
			
				Myfile<<obj[i].name<<endl;
			}
			
			}
			Myfile.close();
			/////////////////////////////Luxname///////////////////////////

			
			Myfile.open("luxname.txt");
			{
			for(int i=0;i<10;i++)
			{
			
				Myfile<<objl[i].name<<endl;
			}
			
			}
			Myfile.close();
			/////////////////////////////ecophone///////////////////////////

			
			Myfile.open("ecophone.txt");
			{
			for(int i=0;i<10;i++)
			{
			
				Myfile<<obj[i].phone<<endl;
			}
			
			}
			Myfile.close();
			/////////////////////////////luxphone///////////////////////////

			
			Myfile.open("luxphone.txt");
			{
			for(int i=0;i<10;i++)
			{
			
				Myfile<<objl[i].phone<<endl;
			}
			
			}
			Myfile.close();
			/////////////////////////////ecorent///////////////////////////

			
			Myfile.open("ecorent.txt");
			{
			for(int i=0;i<10;i++)
			{
			
				Myfile<<obj[i].rent<<endl;
			}
			
			}
			Myfile.close();
			/////////////////////////////luxrent///////////////////////////

			
			Myfile.open("luxrent.txt");
			{
			for(int i=0;i<10;i++)
			{
			
				Myfile<<objl[i].rent<<endl;
			}
			
			}
			Myfile.close();

			cout << "DATA IS SAVED"<<endl;
			
		}
		
		if(choice==7) //To See All Rooms
		{
			cout<< "press 1 for Eco and 2 for lux"<<endl;
			cin>>p;
			switch(p)
			{
			case 1:
				for(k=0;k<10;k++)
				{
				obj[k].records();
				}
				break;
			case 2:
				for(k=0;k<10;k++)
				{
				objl[k].records();
				
				}
				break;
		
			}
		}
		
		
	}while(choice!=0);
	}
	
else 
	{
		cout << "Wrong Password please re-enter!"<<endl;
		cin >>pass;
	
	}
	
		system("pause ");
		return 0;
}
