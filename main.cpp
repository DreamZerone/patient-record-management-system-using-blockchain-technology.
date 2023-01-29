///*********CAUTION: System generate unique login id for each patient once it generate it will never change ///
////****************Hospital patient record management system Secured by blockchain technology**************/

#include <stdio.h>
  #include <unistd.h>
    #include<iostream>
      #include<cstring>
        #include<iomanip>
           using namespace std;


class Patient_Records 
{

public:
    ///patient_detail'
    string Unique_Script[10];
    string Sex_Of_Patient = "wating...";  ///wating for new record(FNRW)
  
string Name_Of_Patient = "wating...";
  
string Age_Baseline = "wating...";
  
 
    ///patient_Sickness_records
    string History_Diabetes = "wating...";
  
string History_CHD = "wating...";
  
string History_Vascular = "wating...";
  
string History_Smoking = "wating...";
  
string History_HTN = "wating...";
  
string History_DLD = "wating...";
  
string History_Obesity = "wating...";
  
string DLDmeds = "wating...";
  
string DMmeds = "wating...";
  
string HTNmeds = "wating...";
  
string ACEIARB = "wating...";
  
string Cholesterol_Baseline = "wating...";
  
string Creatinine_Baseline = "wating...";
  
string eGFR_Baseline = "wating...";
  
string sBP_Baseline = "wating...";
  
string DBP_Baseline = "wating...";
  
string BMI_Baseline = "wating...";
  
string Time_To_Event_Months = "wating...";
  
string EventCKD35 = "wating...";
  
string TIME_YEAR = "wating...";

 
public:

 string Generate_Hash( string , int);
 
void Get_Sickness_Data (string, int);
  
void Print_Sickness_Data (int);

 
};


class Patient_Login_Records:public Patient_Records 
{

private:
    ///patient_signup_data
    string Patient_Signup_UserId;
  
string Patient_Signup_Password;
  
    ///patient_Login_data
    string Patient_Login_Username;
  
string Patient_Login_Password;
  
    ///login_member_function
public:
int Current_Patient_index(int Current_index);
string Patient_Signup (string);
  
bool Patient_Login (string Patient_Login_Username,
		       
string Patient_Login_Password);

};
////Inherited patient record class
/*class Patient_Records_Recovery:Public Patient_Records{
 Public:
    void Get_Recovery_Record();
    
};*/
////Inherited patient record class
class Storing_Unique_Script:public Patient_Records{
  private:
  string Genesis_Block_Data;
  public:
 bool Scan_Genesis_Block(string);
    void Insert_Currect_Key(string);
};

/*///////////////////Main function////////////////////////
///////////////////////////////////////////////////////*/
 
int 
main () 
{
    /////(A_Wild_Object)//
    Patient_Records Sickness[10][10],Unique_Id,Records;	    
   //class          //object
 
 Patient_Records Safe_Records_Storage[10][10];///recovery storage

////***************genesis block************************************************///
int Curr_Hash;
 Storing_Unique_Script Genesis_Block[10][10];
 
    ////login_class_object
  char Adding_Patient_Choice;
  string U_Temp;    ////to return Unique_Code
int Is_Successful;

int Curr_Index;
  
int Return_Is_Successful;
  
int Index = 0;
  
int Index_No = 0;
  
cout << "                 ";

string Welcome="WELCOME TO 'MEDIINFRA'!!";
    for(int i=0; i<Welcome.size(); i++){
        cout<<Welcome[i];
      fflush(stdout);
      usleep(300000); // wait for 3000000 micro second
}
cout<<endl;
cout << "                           ";
string Technology="Secured by blockchain technology..";
    for(int i=0; i<Technology.size(); i++){
        cout<<Technology[i];
      fflush(stdout);
      usleep(200000); // wait for 2000000 micro second
}
cout<<endl<<endl;
  string signupHere="Signup here.....";
   for(int i=0; i<signupHere.size(); i++){
        cout<<signupHere[i];
      fflush(stdout);
      usleep(100000); // wait for 2000000 micro second
}
  cout<<endl<<endl;
Patient_Login_Records Patient_Signup_Obj[10];	////login_class_variable 
  
char Restart_System;		/////Restart_System
  do
    
    {
      
 
      do
	
	{
	    string Temp;
string Passing_Unique_String;
	  
Passing_Unique_String=Patient_Signup_Obj[Index].Patient_Signup (Temp);

for(int k=0; k<Index; k++)
	   Genesis_Block[k][Index].Generate_Hash( Passing_Unique_String,Index); ////**Genesis_Block**//
Index = Index + 1;
	  
cout <<
	    
"Do you want to add more new 'Patient' or 'signup' (y/n)?: ";
	  
cin >> Adding_Patient_Choice;	///adding_more_patient
	
}
      
while (Adding_Patient_Choice != 'n');	////until_not_to_add
      
char Logout_System;	/////////Logout_System
      do
	
	{
	  
 
int Start_Searching = 0;
	  
 char User_Choice;

do{
cout<<endl;
cout<<"1. Doctor."<<endl;
cout<<"2. Patient."<<endl;
int Choice_Input;
cin>>Choice_Input;

 
cout << "Do you want to login (y/n)?: ";
	  
char Login_Choice;
	  
cin >> Login_Choice;
	  
 
if (Login_Choice != 'n')
	    
	    {
	      
 
int Check_If_True = 1;
	      
while (Check_If_True)
		
		{
		  
 
		    ////searching_of_patient
		    string Search_Id, Search_Pwd;
		  
cout << "You can search any patient here!" << endl;
		  
cout <<
		    
"To search and login any patient write login ID and PASSWORD here!"
		    
 <<endl;
		  
cout << "Patient Login ID: ";
		  
cin >> Search_Id;
		  
cout << "Patient Login PASSWORD:";
		  
cin >> Search_Pwd;
		  
 
int Start_Searching = 0;
		  
for (Start_Searching; Start_Searching < Index;
			
Start_Searching++)
		    
		    {
		      
Return_Is_Successful =
			
Patient_Signup_Obj[Start_Searching].
			Patient_Login 
 (Search_Id, Search_Pwd);
		      
if (Return_Is_Successful == 1){
    
    
    
		Curr_Index=	Start_Searching;
		string Passing_Unique_String=Search_Id+Search_Pwd;
   U_Temp = Unique_Id.Generate_Hash( Passing_Unique_String, Curr_Index ); 
   int i1,i2;
          int Return_If_Find;
   for( i1=0; i1<Curr_Index; i1++){

       for( i2=0; i2<Curr_Index; i2++){
               
               
               Return_If_Find=Genesis_Block[i1][i2].Scan_Genesis_Block(U_Temp);
           
           if(Return_If_Find == 1)
           break;
           else break;
       }
        if(Return_If_Find == 1)
           break;
   }
   if((i1 == Curr_Index) && (i2 == Curr_Index) && (Return_If_Find == 0))
   Genesis_Block[i1][i2].Insert_Currect_Key(U_Temp);
   cout<<"\n Patient Validation Processing";
   char Validation[]={'.','.','.','.','.','.','.'};
       for(int v2=0; v2<7; v2++){
           cout<<Validation[v2];
              fflush(stdout);
              usleep(700000); // wait for 2000000 micro second
   }
   cout<<endl;
   cout<<"\nLogin successful!!\n"<<endl;
   
break;
}		    
}
		  
if (Return_Is_Successful == 0)
		    
		    {
		      
cout <<
			
"\nLogin unsuccessful incorrect username or password login again! \n"
			
 <<endl;
		      
Check_If_True = 1;
		    
}
		  else
		    
		    {
		      
Check_If_True = 0;
		    
}
		
}
	      
switch (Return_Is_Successful)
		
		{
		
 
case true:
		  
		  {
		    
 
char Patient_Medical_History;
		   
 
cout <<
		      
"Do you want to view Patient_Medical_History(y/n)?:";
		    
cin >> Patient_Medical_History;
		    
if (Index_No >= 1)
		      
		      {
			
if (Patient_Medical_History != 'n')
			  
			  {

for (int j = 0; j <= Index_No; j++)
				  
				  {
				      
				      			      		
////////*************** Data Validation Module******************////      
     if((Sickness[Curr_Index][j].Sex_Of_Patient        == Safe_Records_Storage[Curr_Index][j].Sex_Of_Patient)       &&
        (Sickness[Curr_Index][j].Name_Of_Patient       == Safe_Records_Storage[Curr_Index][j].Name_Of_Patient)      &&
        (Sickness[Curr_Index][j].Age_Baseline          == Safe_Records_Storage[Curr_Index][j].Age_Baseline)         &&
        (Sickness[Curr_Index][j].History_Diabetes      == Safe_Records_Storage[Curr_Index][j].History_Diabetes)     &&
        (Sickness[Curr_Index][j].History_CHD           == Safe_Records_Storage[Curr_Index][j].History_CHD)          &&
        (Sickness[Curr_Index][j].History_Vascular      == Safe_Records_Storage[Curr_Index][j].History_Vascular)     &&
        (Sickness[Curr_Index][j].History_Smoking       == Safe_Records_Storage[Curr_Index][j].History_Smoking)      &&
        (Sickness[Curr_Index][j].History_HTN           == Safe_Records_Storage[Curr_Index][j].History_HTN)          &&
        (Sickness[Curr_Index][j].History_DLD           == Safe_Records_Storage[Curr_Index][j].History_DLD)          &&
        (Sickness[Curr_Index][j].History_Obesity       == Safe_Records_Storage[Curr_Index][j].History_Obesity)      &&
        (Sickness[Curr_Index][j].DLDmeds               == Safe_Records_Storage[Curr_Index][j].DLDmeds)              &&
        (Sickness[Curr_Index][j].DMmeds                == Safe_Records_Storage[Curr_Index][j].DMmeds)               &&
        (Sickness[Curr_Index][j].HTNmeds               == Safe_Records_Storage[Curr_Index][j].HTNmeds)              &&
        (Sickness[Curr_Index][j].ACEIARB               == Safe_Records_Storage[Curr_Index][j].ACEIARB)              &&
        (Sickness[Curr_Index][j].Cholesterol_Baseline  == Safe_Records_Storage[Curr_Index][j].Cholesterol_Baseline) &&
        (Sickness[Curr_Index][j].Creatinine_Baseline   == Safe_Records_Storage[Curr_Index][j].Creatinine_Baseline)  &&
        (Sickness[Curr_Index][j].eGFR_Baseline         == Safe_Records_Storage[Curr_Index][j].eGFR_Baseline)        &&
        (Sickness[Curr_Index][j].sBP_Baseline          == Safe_Records_Storage[Curr_Index][j].sBP_Baseline)         &&
        (Sickness[Curr_Index][j].DBP_Baseline          == Safe_Records_Storage[Curr_Index][j].DBP_Baseline)         &&
        (Sickness[Curr_Index][j].BMI_Baseline          == Safe_Records_Storage[Curr_Index][j].BMI_Baseline)         &&
        (Sickness[Curr_Index][j].Time_To_Event_Months  == Safe_Records_Storage[Curr_Index][j].Time_To_Event_Months) &&
        (Sickness[Curr_Index][j].EventCKD35            == Safe_Records_Storage[Curr_Index][j].EventCKD35)           &&
        (Sickness[Curr_Index][j].TIME_YEAR             == Safe_Records_Storage[Curr_Index][j].TIME_YEAR)
        )
    
    {
        
    
           cout<<"No data alteration found !!!!!!\n"<<endl;                 
    
    cout<<"\nPrinting Start";
	    char Validation[]={'.','.','.','.','.','.','.'};
        for(int v3=0; v3<7; v3++){
           cout<<Validation[v3];
              fflush(stdout);
              usleep(700000); // wait for 7000000 micro second
   }
         cout<<endl;
        
    }
	else {
	    cout<<"\nData alteration found!!!!..........???##"<<endl;
	    
	      cout<<"\nRecovery Process start";
	    char Validation[]={'.','.','.','.','.','.','.'};
        for(int v4=0; v4<7; v4++){
           cout<<Validation[v4];
              fflush(stdout);
              usleep(700000); // wait for 7000000 micro second
   }
         cout<<endl;
	    
	    Sickness[Curr_Index][j] = Safe_Records_Storage[Curr_Index][j];
	    
	}	    
////**********************************************************/////		      
 
				      
				      
				    	cout<<endl<<" ["<<"Patient S.No - "<<Curr_Index<<",Index - "<<j<<"]"<<endl;
Sickness[Curr_Index][j].Print_Sickness_Data (Curr_Index);
				  
} 
cout << endl;
	       
}
		      
}
		    
		    else
		      
		      {
			
cout << "\nNo patient record found !!!\n" << endl;
		      
}
	
	switch(Choice_Input){
	    
case 1:{	
cout <<
		      
"If you want new record of patient then Press(y) if not then(n):";
		    
char Add_New_Record;
		    
cin >> Add_New_Record;
		    
if (Add_New_Record != 'n')
		      
		      {
			
cout <<
			  
"Please enter all the type of sickness of patient!!!"
			  
 <<endl;

 
Sickness[Curr_Index][Index_No].             ////////Getting Sickness data
			  Get_Sickness_Data 
 (U_Temp, Curr_Index);

    Safe_Records_Storage[Curr_Index][Index_No] = Sickness[Curr_Index][Index_No];    //////Storing sickness data		      
  
  
  
  
  ///**********Hacking System on here Try to Hack Here by Changing Data Once it hacked System will detect 
  //     where is data was altered then after recovery process start and system will recover the data */ 
  
  //  Sickness[Curr_Index][Index_No].Name_Of_Patient = "HACKED";  
		          
		      }
      break;
}
case 2:break;
	}
char View_Data;
		    
cout << "Do you want to view the data(y/n)? :";
		    
cin >> View_Data;
		    
if (View_Data != 'n'){

Sickness[Curr_Index][Index_No].
			Print_Sickness_Data 
 (Curr_Index);
		    
 
}
 
cout <<
		      
"Do you want to view Patient_Medical_History(y/n)?:";
		    
cin >> Patient_Medical_History;
		    
if (Patient_Medical_History != 'n')
		      
		      {
		    
for (int j = 0; j <= Index_No; j++)
			      
			      {
			          
			      		
////////*************** Data Validation Module******************////      
     if((Sickness[Curr_Index][j].Sex_Of_Patient        == Safe_Records_Storage[Curr_Index][j].Sex_Of_Patient)       &&
        (Sickness[Curr_Index][j].Name_Of_Patient       == Safe_Records_Storage[Curr_Index][j].Name_Of_Patient)      &&
        (Sickness[Curr_Index][j].Age_Baseline          == Safe_Records_Storage[Curr_Index][j].Age_Baseline)         &&
        (Sickness[Curr_Index][j].History_Diabetes      == Safe_Records_Storage[Curr_Index][j].History_Diabetes)     &&
        (Sickness[Curr_Index][j].History_CHD           == Safe_Records_Storage[Curr_Index][j].History_CHD)          &&
        (Sickness[Curr_Index][j].History_Vascular      == Safe_Records_Storage[Curr_Index][j].History_Vascular)     &&
        (Sickness[Curr_Index][j].History_Smoking       == Safe_Records_Storage[Curr_Index][j].History_Smoking)      &&
        (Sickness[Curr_Index][j].History_HTN           == Safe_Records_Storage[Curr_Index][j].History_HTN)          &&
        (Sickness[Curr_Index][j].History_DLD           == Safe_Records_Storage[Curr_Index][j].History_DLD)          &&
        (Sickness[Curr_Index][j].History_Obesity       == Safe_Records_Storage[Curr_Index][j].History_Obesity)      &&
        (Sickness[Curr_Index][j].DLDmeds               == Safe_Records_Storage[Curr_Index][j].DLDmeds)              &&
        (Sickness[Curr_Index][j].DMmeds                == Safe_Records_Storage[Curr_Index][j].DMmeds)               &&
        (Sickness[Curr_Index][j].HTNmeds               == Safe_Records_Storage[Curr_Index][j].HTNmeds)              &&
        (Sickness[Curr_Index][j].ACEIARB               == Safe_Records_Storage[Curr_Index][j].ACEIARB)              &&
        (Sickness[Curr_Index][j].Cholesterol_Baseline  == Safe_Records_Storage[Curr_Index][j].Cholesterol_Baseline) &&
        (Sickness[Curr_Index][j].Creatinine_Baseline   == Safe_Records_Storage[Curr_Index][j].Creatinine_Baseline)  &&
        (Sickness[Curr_Index][j].eGFR_Baseline         == Safe_Records_Storage[Curr_Index][j].eGFR_Baseline)        &&
        (Sickness[Curr_Index][j].sBP_Baseline          == Safe_Records_Storage[Curr_Index][j].sBP_Baseline)         &&
        (Sickness[Curr_Index][j].DBP_Baseline          == Safe_Records_Storage[Curr_Index][j].DBP_Baseline)         &&
        (Sickness[Curr_Index][j].BMI_Baseline          == Safe_Records_Storage[Curr_Index][j].BMI_Baseline)         &&
        (Sickness[Curr_Index][j].Time_To_Event_Months  == Safe_Records_Storage[Curr_Index][j].Time_To_Event_Months) &&
        (Sickness[Curr_Index][j].EventCKD35            == Safe_Records_Storage[Curr_Index][j].EventCKD35)           &&
        (Sickness[Curr_Index][j].TIME_YEAR             == Safe_Records_Storage[Curr_Index][j].TIME_YEAR)
        )
        {
    
           cout<<"No data alteration found !!!!!!\n"<<endl;                  
      cout<<"\nPrinting Start";
	    char Validation[]={'.','.','.','.','.','.','.'};
        for(int v5=0; v5<7; v5++){
           cout<<Validation[v5];
              fflush(stdout);
              usleep(700000); // wait for 7000000 micro second
   }
         cout<<endl;
        
    }
	else {
	    cout<<"\nData alteration found!!!!..........???##"<<endl;
	    cout<<"\nRecovery Process start";
	    char Validation[]={'.','.','.','.','.','.','.'};
        for(int v6=0; v6<7; v6++){
           cout<<Validation[v6];
              fflush(stdout);
              usleep(700000); // wait for 7000000 micro second
   }
         cout<<endl;
	    
	    Sickness[Curr_Index][j] = Safe_Records_Storage[Curr_Index][j];
	    
	}	    
////**********************************************************/////		      
    
			          
				cout<<endl<<" ["<<"Patient S.No - "<<Curr_Index<<",Index - "<<j<<"]"<<endl;
Sickness[Curr_Index][j].Print_Sickness_Data (Curr_Index);
			      
} 
cout << endl;
}
		 
} 
 
cout <<
		    
"Well done! all the task completed return to main menu!!"
		    
 <<endl;
		  
 
break;
		
 
}
	      
Index_No++;
	    
}

    cout<<"If you want to login again as Doctor or Patient Press (y/n):";
cin>>User_Choice;
 
} while(User_Choice != 'n');


cout <<
	    "System application Logout Please login again......:(y/n):";
	  
cin >> Logout_System;
	
 
}
      
while (Logout_System != 'n');
      
 
cout << "Restart The System application...... ::y/n::";
      
cin >> Restart_System;
    
}
  
while (Restart_System != 'n');
  
 
cout << "\n\nAll the process !(abnormally) terminated... thankyou!\n\n";
  
return 0;

}


 
string
Patient_Login_Records::Patient_Signup (string Temp) 
{
  
cout << "Enter Patient Username: ";
  
cin >> Patient_Signup_UserId;
  
cout << "Enter Patient Password: ";
  
cin >> Patient_Signup_Password;
  
cout << "Signup successful now you can login!" << endl;
Temp=Patient_Signup_UserId+Patient_Signup_Password;
return Temp;
} 
 
bool 
  Patient_Login_Records::Patient_Login (string Patient_Login_Username,
					
string Patient_Login_Password) 
{
  
 
if ((Patient_Signup_UserId) == (Patient_Login_Username) 
	 &&(Patient_Signup_Password) == (Patient_Login_Password))
    
    {

return true;
    
}
  
  else
    
    {
      
return false;
    
}

}


 
////Get_Sickness_Data
void Patient_Records::Get_Sickness_Data (string Unique_Code, int Index) 
{
  
  Unique_Script[Index]=Unique_Code;
  
    ///Patient_Records

    cout << "Gender_Of_Patient:";
  
cin >> Sex_Of_Patient;
  
cout << "Name_Of_Patient:";
cin >> Name_Of_Patient;
  
cout << "Age_Baseline:";
  
cin >> Age_Baseline;
  
 
    ///patient_Sickness_records
    cout << "History_Diabetes:";
  
cin >> History_Diabetes;
  
  
cout << "History_CHD:";
  
cin >> History_CHD;
  
cout << "History_Vascular:";
  
cin >> History_Vascular;
  
cout << "History_Smoking:";
  
cin >> History_Smoking;
  
cout << "History_HTN:";
  
cin >> History_HTN;
  
cout << "History_DLD:";
  
cin >> History_DLD;
  
cout << "History_Obesity:";
  
cin >> History_Obesity;
  
cout << "DLDmeds:";
  
cin >> DLDmeds;
  
cout << "DMmeds:";
  
cin >> DMmeds;
  
cout << "HTNmeds:";
  
cin >> HTNmeds;
  
cout << "ACEIARB:";
  
cin >> ACEIARB;
  
cout << "Cholesterol_Baseline:";
  
cin >> Cholesterol_Baseline;
  
cout << "Creatinine_Baseline:";
  
cin >> Creatinine_Baseline;
  
cout << "eGFR_Baseline:";
  
cin >> eGFR_Baseline;
  
cout << "sBP_Baseline:";
  
cin >> sBP_Baseline;
  
cout << "DBP_Baseline:";
  
cin >> DBP_Baseline;
  
cout << "BMI_Baseline:";
  
cin >> BMI_Baseline;
  
cout << "Time_To_Event_Months:";
  
cin >> Time_To_Event_Months;
  
cout << "EventCKD35:";
  
cin >> EventCKD35;
  
cout << "TIME_YEAR:";
  
cin >> TIME_YEAR;

} 
 

///Print_Sickness_Data
void 
Patient_Records::Print_Sickness_Data (int Index) 
{
  ////Print Unique_Script
  cout<<"["<<"Unique_Script ::: "<<Unique_Script[Index]<<" :::]"<<endl;
  
    ////print_patient_data
    cout << "_____________________________________" << endl;
  
cout << "-------------------------------------|" << endl;
  
cout << setw (25) << "Gender of patient |";
  
cout << setw (10) << Sex_Of_Patient;
  cout << "  |" << endl;
  
cout << setw (25) << "Name of patient |";
  
cout << setw (10) << Name_Of_Patient;
  cout << "  |" << endl;
  
cout << setw (25) << "Age of patient |";
  
cout << setw (10) << Age_Baseline;
  cout << "  |" << endl;
  
cout << "-------------------------------------|" << endl;
  
cout << "_____________________________________|" << endl;
  
 
 
 
/////Print_Sickness_Data
    cout << "1___________________________________________________________" <<
    
endl;
  
cout << setw (25) << "History_Diabetes |";
  
cout << setw (19) << History_Diabetes;
  cout << setw (17) << "|" << endl;
  
 
cout << "2___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_CHD |";
  
cout << setw (19) << History_CHD;
  cout << setw (17) << "|" << endl;
  
 
cout << "3___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_Vascular |";
  
cout << setw (19) << History_Vascular;
  cout << setw (17) << "|" << endl;
  
 
cout << "4___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_Smoking |";
  
cout << setw (19) << History_Smoking;
  cout << setw (17) << "|" << endl;
  
 
cout << "5___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_HTN |";
  
cout << setw (19) << History_HTN;
  cout << setw (17) << "|" << endl;
  
 
cout << "6___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_DLD |";
  
cout << setw (19) << History_DLD;
  cout << setw (17) << "|" << endl;
  
 
cout << "7___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_Obesity |";
  
cout << setw (19) << History_Obesity;
  cout << setw (17) << "|" << endl;
  
 
cout << "8___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "DLDmeds |";
  
cout << setw (19) << DLDmeds;
  cout << setw (17) << "|" << endl;
  
 
cout << "9___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "DMmeds |";
  
cout << setw (19) << DMmeds;
  cout << setw (17) << "|" << endl;
  
 
cout << "10__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "HTNmeds |";
  
cout << setw (19) << HTNmeds;
  cout << setw (17) << "|" << endl;
  
 
cout << "11__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "ACEIARB |";
  
cout << setw (19) << ACEIARB;
  cout << setw (17) << "|" << endl;
  
 
cout << "12__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "Cholesterol_Baseline |";
  
cout << setw (19) << Cholesterol_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "13__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "Creatinine_Baseline |";
  
cout << setw (19) << Creatinine_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "14__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "eGFR_Baseline |";
  
cout << setw (19) << eGFR_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "____________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "sBP_Baseline |";
  
cout << setw (19) << sBP_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "16__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "DBP_Baseline |";
  
cout << setw (19) << DBP_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "17__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "BMI_Baseline |";
  
cout << setw (19) << BMI_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "18__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "Time_To_Event_Months |";
  
cout << setw (19) << Time_To_Event_Months;
  cout << setw (17) << "|" << endl;
  
 
cout << "19__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "EventCKD35 |";
  
cout << setw (19) << EventCKD35;
  cout << setw (17) << "|" << endl;
  
 
cout << "20__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "TIME_YEAR |";
  
cout << setw (19) << TIME_YEAR;
  cout << setw (17) << "|" << endl;
  
cout << "____________________________________________________________|" <<
    
endl;

} 
string Patient_Records::Generate_Hash(string str, int Index){

  char C_H_R[]={'q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',   /////hash script generator  
                 'j','k','l','z','x','c','v','b',
                 'n','m' ,'q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m','q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m','q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m','q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m','q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m','q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m','q','w','e','r','t','y','u','i',
                 'o','p','a','s','d','f','g','h',
                 'j','k','l','z','x','c','v','b',
                 'n','m'};
    char D_I_G[]={'0','1','2','3','4','5','6','7',
         '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9','0','1','2','3','4','5','6','7',
                 '8','9'};
    
int  a=0;
for(int i=0; i<str.size(); i++)
    a=a+(str[i]+0);

    
    string Unique_Code="";
    int ad=10;
    if(a<200){
    for(int j=0; j<a/4+1; j++){
    Unique_Code = Unique_Code +C_H_R[j];
    Unique_Code=Unique_Code+str;
    Unique_Code = Unique_Code +D_I_G[j];
    }
    }
    
    else if(a<400){
    for(int j=0; j<a/8+1; j++){
    Unique_Code = Unique_Code +C_H_R[j];
    Unique_Code=Unique_Code+str;
    Unique_Code = Unique_Code +D_I_G[j];
    }
    }
    
    else if(a<600){
    for(int j=0; j<a/12+1; j++){
    Unique_Code = Unique_Code +C_H_R[j];
    Unique_Code=Unique_Code+str;
    Unique_Code = Unique_Code +D_I_G[j];
    }
    }
    
    else if(a<800){
    for(int j=0; j<a/16+1; j++){
    Unique_Code = Unique_Code +C_H_R[j];
    Unique_Code=Unique_Code+str;
    Unique_Code = Unique_Code +D_I_G[j];
    }
    }
    
    else if(a<1000){
    for(int j=0; j<a/20+1; j++){
    Unique_Code = Unique_Code +C_H_R[j];
    Unique_Code=Unique_Code+str;
    Unique_Code = Unique_Code +D_I_G[j];
    }
    }
    
    else {
    for(int j=0; j<a/24+1; j++){
    Unique_Code = Unique_Code +C_H_R[j];
    Unique_Code=Unique_Code+str;
    Unique_Code = Unique_Code +D_I_G[j];
    }
    }
    cout<<"\n\nUNIQUE_SCRIPT ["<<Unique_Code<<"]\n\n";
    return Unique_Code;
}
 bool Storing_Unique_Script::Scan_Genesis_Block(string Scan){
     if(Genesis_Block_Data == Scan){
         return 1;
     }
     return 0;
 }
void Storing_Unique_Script::Insert_Currect_Key(string Scan){
     Genesis_Block_Data=Scan;
 }





