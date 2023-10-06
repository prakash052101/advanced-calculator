			//ADVANCED CALCULATOR PROGRAMM
  #include <fstream.h>                           //file handling,cout,cin;
  #include <conio.h>            	 	 //clrscr(),getch();
  #include <stdio.h>            	 	 //gets(),puts(),remove();
  #include <process.h>          		 //for exit(0)
  #include <iomanip.h>         		         //for setpricision,endl;
  #include <math.h>            	  		 //for pow(),sqrt();
  #include <string.h>           		 //for strcmp();
  #define pi 3.14                             	 //macro
  #define cube(x) ((x*x)+(x*x)*(x-1))            //macro
  #include "c:\turboc3\bin\formula.cpp"          //for formula programm
  #include "c:\turboc3\bin\arith_ca.cpp"         //for arithmetic programm
  #include "c:\turboc3\bin\ar2d_cal.cpp"        //for area2D_figures programm
  #include "c:\turboc3\bin\ar3d_cal.cpp"        //for area3D_figures programm
  #include "c:\turboc3\bin\volume.cpp"          //for volume programm
  #include "c:\turboc3\bin\clrall_h.cpp"        //for clearing all history programm
  #include "c:\turboc3\bin\patrn.cpp"           //for pattern programm
  void main()                                  //starting main
  {                                           //clearing screen
	 clrscr();                            //declaring variables
	 int ch;
	 char pk[32]="1234";
	 char mah[32],n;
	 char ans='y';
	 int i,m,j=0,k=0,p=0,q=0,r=0,c=5;
	 ifstream fin("pass.txt",ios::in);   //reading text file
	 while(fin)
	 {
		fin>>j;
		 k=j;
	 }
	 fin.close();
	 if(k<4)                            //condition for starting code
	 {
	  start:                              //goto label
	  cout<<"\n\n\n\n\n\n\n\n\n\n";
	  cout<<"\t\t\t       Enter Password:";     //entering password
	  for(i=0;i<32;)
	  {
	   n=getch();                               //taking value one by one
	   if(n>=33 && n<=126)
	   {
	    mah[i]=n;
	    ++i;
	    cout<<"*";                            //changing into aestrik
	   }
	   if(n=='\b' && i>=1)              //if entered backspace delete one character
	   {
	    cout<<"\b \b";
	    --i;
	   }
	   if(n=='\r')                      //if 'enter' clicked,break loop
	   {
	    mah[i]='\0';
	    break;
	   }
	  }
	  if(strcmp(mah,pk)==0)            //checking password correct or not
	  {
	   remove("pass.txt");
	   remove("pass1.txt");
	   cout<<"\n\n\t\t\t\t Login Sucessful"<<endl;
	   cout<<"\t\t\t  ENTER ANY KEY TO CONTINUE......";
	   getch();
	   clrscr();
	   Name_Pattern();           //calling name and class pattern function
	   getch();                  //wait till user enter any key
	   clrscr();                 //clearing screen
	    do                               //do while starting
	    {
	     clrscr();                            //clearing screen
	     cout<<"\n\t\t\tWELCOME USER TO THE MAIN MENU"<<endl;    //displaying main menu
	     cout<<"________________________________________________________________________________"<<endl;
	     cout<<"********************************************************************************"<<endl;
	     cout<<"________________________________________________________________________________"<<endl;
	     cout<<"\t#\t1.OPEN CALCULATOR MENU\t";
	     cout<<"\t\t2.OPEN FORMULA MENU   #"<<endl;
	     cout<<"\t#\t3.CLEAR ALL HISTORY    ";
	     cout<<"\t\t\t4.EXIT FROM PROGRAMM  #"<<endl;
	     cout<<"\n\t\t\tSELECT YOUR CHOICE FROM MENU(1 to 4)"<<endl;
	     cout<<"\n\t\t\t:-)\tUSER ENTER YOUR MENU:";    //enter choice to use desired programm
	     cin>>ch;
	     clrscr();                                 //clearing screen
	     switch(ch)                                   //switch case
	     {
	      case 1:
	      Calc_Pattern();                //caliing calculator pattern function
	      getch();		      //wait till user enter any key
	      do                              //nested do while1
	      {
	       clrscr();                      //clearing screen
	       cout<<"\n\t\t\t   WELCOME USER TO CALCULATOR MENU"<<endl; //displaying calculator menu
	       cout<<"    ============================================================================"<<endl;
	       cout<<"\t@\t1).Arithmetic Opressions.";
	       cout<<"\t2).Area of 2-D Figures.       @"<<endl;
	       cout<<"\t@\t3).Area of 3-D Figures.";
	       cout<<"\t\t4).volume of 3-D Figures.     @"<<endl;
	       cout<<"\t@\t5).Exit From The Programm.\t\t\t\t      @"<<endl;
	       cout<<"\n\t\t\tSELECT YOUR CHOICE FROM MENU(1 to 5)"<<endl;
	       cout<<"\n\t\t\t      :-) User Enter Your Choice:";  //enter choice to use desired function
	       cin>>ch;
	       clrscr();                      //clearing screen
	       switch(ch)                 //nested switch case1
	       {
		 case 1:                    //case 1 of nested switch1
			do                        //nested do while2
			{                    //displaying menu of arithmetic operations
			 cout<<"\n\t\t\tWelcome To Arithmetic Oprations Programm."<<endl;
			 cout<<"    ____________________________________________________________________________"<<endl;
			 cout<<"\t*\t1.Addition"               ;
			 cout<<"\t\t\t\t2.Subtraction         *"<<endl;
			 cout<<"\t*\t3.Multiplication"         ;
			 cout<<"\t\t\t4.Division            *"<<endl;
			 cout<<"\t*\t5.Square Root Of a Number";
			 cout<<"\t\t6.Square of Number    *"<<endl;
			 cout<<"\t*\t7.Cube of a Number"       ;
			 cout<<"\t\t\t8.Find Power          *"<<endl;
			 cout<<"\t*\t9.Percentage Calculator"  ;
			 cout<<"\t\t\t10.History\t      *"<<endl;
			 cout<<"\t*\t11.Clear Arithmetic History";
			 cout<<"\t\t12.Exit From Programm *"<<endl;
			 cout<<"\n\t\t\tSELECT YOUR CHOICE FROM MENU(1 to 12)"<<endl;
			 cout<<"\n\t\t\t          Enter Your choice:";
			 cin>>ch;                       //enter choice to user desired function
			 clrscr();                    //clearing screen
			 switch(ch)                  //nested switch case2
			 {
				case 1:            //function calling according desired case
					A1.Addition();
					break;
				case 2:
					A1.Subtraction();
					break;
				case 3:
					A1.Multiplication();
					break;
				case 4:
					A1.Division();
					break;
				case 5:
					A1.Square_Root();
					break;
				case 6:
					A1.Square();
					break;
				case 7:
					A1.Cube();
					break;
				case 8:
					A1.Power();
					break;
				case 9:
					A1.Percentage();
					break;
				case 10:
					History_Arithmetic();
					break;
				case 11:
					Clear_Arithmetic_History();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\tARIHMETIC HISTORY DELETED SUCCESSFULLY";
					getch();
					clrscr();
					break;
				case 12:
					break;
				default:
					cout<<"\n\n\n\n\n\n\n\n\n";
					cout<<"       \t\t\t  !!!User Code Error!!!"<<endl;
					cout<<"       \t\t\tUser Entered Wrong Choice"<<endl;
			 }      //end of nested switch case2
			 cout<<"\n\n\n\n\n\n\n\n\n\n";
			 cout<<"\tQ.\tWish To Continue in Arithmetic Operations Program(y/n):";
			 cin>>ans;
			 clrscr();
			}while(ans=='y'||ans=='Y');//condition for nested do while2
		 break;
		 case 2:                     //case 2 for nested switch case1
			do                 //nested do while3
			{                 //showing menu for area of 2d figures
			 cout<<"\n\t\t\tWelcome To Area Of 2-D Figures Programm."<<endl;
			 cout<<"     ______________________________________________________________________"<<endl;
			 cout<<"\t*\t1.Area Of Reactangle. ";
			 cout<<"\t\t2.Area of Triangle.\t*"    <<endl;
			 cout<<"\t*\t3.Area of Square     ";
			 cout<<"\t\t4.Area of Circle \t*"    <<endl ;
			 cout<<"\t*\t5.Area of Rhombus   ";
			 cout<<"\t\t6.History  \t\t*"<<endl;
			 cout<<"\t*\t7.Clear Area Of 2-D History";
			 cout<<"\t8.Exit From Programm \t*"<<endl;
			 cout<<"\n\t\t\tSELECT YOUR CHOICE FROM MENU(1 to 8)"<<endl;
			 cout<<"\n\t\t\t         Enter Your choice:";
			 cin>>ch;                      //select your desired function
			 clrscr();                //clearing screen
			 switch(ch)              //nested switch case3
			 {
				case 1:
					a1.Area_of_Rectangle();
					break;
				case 2:
					a1.Area_of_Triangle();
					break;
				case 3:
					a1.Area_of_Square();
					break;
				case 4:
					a1.Area_of_Circle();
					break;
				case 5:
					a1.Area_of_Rhombus();
					break;
				case 6:
					History_Areaof_2D();
					break;
				case 7:
					Clear_Areaof_2D_History();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\tAREA OF 2-D HISTORY DELETED SUCCESSFULLY";
					getch();
					clrscr();
					break;
				case 8:
					break;
				default:
					cout<<"\n\n\n\n\n\n\n\n\n";
					cout<<"       \t\t\t  !!!User Code Error!!!"<<endl;
					cout<<"       \t\t\tUser Entered Wrong Choice"<<endl;
			 }     //end of nested switch case3
			 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
			 cout<<"\tQ.\tWish To Continue in Finding Area of 2-d Figures Program(y/n):";
			 cin>>ans;         //wish to continue till ans=='y'
			 clrscr();         //clearing screen
			}while(ans=='y'||ans=='Y');   //end of nested do while3
		 break;
		 case 3:         //case 3 for nested switch case1
			do                  //nested do while4
			{                   //showing menu for area of 3D figures
			 cout<<"\n\t\t\tWelcome To Area Of 3-D Figures Programm."<<endl;
			 cout<<"   ____________________________________________________________________________"<<endl;
			 cout<<"\t*\t1.C.S.A of Cylinder."       ;
			 cout<<"\t\t2.T.S.A of Cylinder.       *"<<endl;
			 cout<<"\t*\t3.C.S.A of HCylinder."      ;
			 cout<<"\t\t4.T.S.A of HCylinder.      *"<<endl;
			 cout<<"\t*\t5.A.E.E of HCylinder.      ";
			 cout<<"\t6.C.S.A of Cone.\t   *"        <<endl;
			 cout<<"\t*\t7.T.S.A of Cone.  "         ;
			 cout<<"\t\t8.C.S.A of Cube.\t   *"     <<endl;
			 cout<<"\t*\t9.T.S.A of Cube.\t  "       ;
			 cout<<"\t10.C.S.A of Cuboid.        *  "<<endl;
			 cout<<"\t*\t11.T.S.A of Cuboid.        ";
			 cout<<"\t12.C.S.A of Hemisphere.    *"   <<endl;
			 cout<<"\t*\t13.T.S.A of Hemisphere.   ";
			 cout<<"\t14.C.S.A of Sphere.        * " <<endl;
			 cout<<"\t*\t15.T.S.A of Sphere.\t  "    ;
			 cout<<"\t16.O.S.A of HSphere.\t   *"    <<endl;
			 cout<<"\t*\t17.C.S.A of Frustum.\t "    ;
			 cout<<"\t18.T.S.A of Frustum.       *"  <<endl;
			 cout<<"\t*\t19.History     \t\t";
			 cout<<"\t20.Clear History           *"<<endl;
			 cout<<"\t*\t21.Exit From Programm.\t\t\t\t\t   *" <<endl;
			 cout<<"\n\t\t\tSELECT YOUR CHOICE FROM MENU(1 to 21)"<<endl;
			 cout<<"\n\t\t\t\tEnter Your choice:";
			 cin>>ch;          //choose your desired function
			 clrscr();          //clearing screen
			 switch(ch)          //nested switch case4
			 {
				case 1:
					a2.CSA_of_Cylinder();
					break;
				case 2:
					a2.TSA_of_Cylinder();
					break;
				case 3:
					a2.CSA_of_HCylinder();
					break;
				case 4:
					a2.TSA_of_HCylinder();
					break;
				case 5:
					a2.Ar_Each_End_HCylinder();
					break;
				case 6:
					a2.CSA_of_Cone();
					break;
				case 7:
					a2.TSA_of_Cone();
					break;
				case 8:
					a2.CSA_of_Cube();
					break;
				case 9:
					a2.TSA_of_Cube();
					break;
				case 10:
				       a2.CSA_of_Cuboid();
				       break;
				case 11:
				       a2.TSA_of_Cuboid();
				       break;
				case 12:
				       a2.CSA_of_Hemisphere();
				       break;
				case 13:
				       a2.TSA_of_Hemisphere();
				       break;
				case 14:
				       a2.CSA_of_Sphere();
				       break;
				case 15:
				       a2.TSA_of_Sphere();
				       break;
				case 16:
					a2.OSA_of_HSphere();
					break;
				case 17:
				       a2.CSA_of_Frustum();
				       break;
				case 18:
				       a2.TSA_of_Frustum();
				       break;
				case 19:
				       History_Areaof_3D();
				       break;
				case 20:
					Clear_Areaof_3d_History();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\tAREA OF 3-D HISTORY DELETED SUCCESSFULLY";
					getch();
					clrscr();
					break;
				case 21:
					break;
				default:
					cout<<"\n\n\n\n\n\n\n\n\n";
					cout<<"       \t\t\t  !!!User Code Error!!!"<<endl;
					cout<<"       \t\t\tUser Entered Wrong Choice"<<endl;
			 }        //end ofnested switch case 4
			 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
			 cout<<"\tQ.\tWish To Continue in Finding Area Of 3-D Figures Program(y/n):";
			 cin>>ans;
			 clrscr();       //clearing screen
			}while(ans=='y'||ans=='Y');//continue till ans click y
		 break;                                  //end of nested do while4
		 case 4:                //case 4 of nested switch case1
			do                 //nested do while5
			{                    //showing menu for volume programm
			 cout<<"\n\t\t\t  Welcome To Volume Of 3-D Figures"<<endl;
			 cout<<"    ____________________________________________________________________________"<<endl;
			 cout<<"\t*\t1.Volume Of RCylinder"      ;
			 cout<<"\t\t2.Volume Of HCylinder      *" <<endl;
			 cout<<"\t*\t3.Volume Of Cone     ";
			 cout<<"\t\t4.Volume Of Cube\t   *"        <<endl;
			 cout<<"\t*\t5.Volume Of Cuboid   ";
			 cout<<"\t\t6.Volume Of Hemisphere     *"   <<endl;
			 cout<<"\t*\t7.Volume Of Sphere   ";
			 cout<<"\t\t8.Volume of Hsphere        * "  <<endl;
			 cout<<"\t*\t9.Volume of Frustum(Bucket)";
			 cout<<"\t10.History \t\t   *"<<endl;
			 cout<<"\t*\t11.Clear History     \t";
			 cout<<"\t12.Exit From Programm      *"  <<endl;
			 cout<<"\n\t\t\tSELECT YOUR CHOICE FROM MENU(1 to 12)"<<endl;
			 cout<<"\n\t\t\t\tEnter Your choice:";
			 cin>>ch;               //select your desired option
			 clrscr();             //clearing screen
			 switch(ch)           //nested switch case5
			 {
				case 1:
					V1.Vol_of_RCylinder();
					break;
				case 2:
					V1.Vol_of_HCylinder();
					break;
				case 3:
					V1.Vol_of_Cone();
					break;
				case 4:
					V1.Vol_of_Cube();
					break;
				case 5:
					V1.Vol_of_Cuboid();
					break;
				case 6:
					V1.Vol_of_Hemisphere();
					break;
				case 7:
					V1.Vol_of_Sphere();
					break;
				case 8:
					V1.Vol_of_HSphere();
					break;
				case 9:
					V1.Vol_of_Frustum();
					break;
				case 10:
					History_Volume();
					break;
				case 11:
					Clear_Volume_History();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\tVOLUME HISTORY DELETED SUCCESSFULLY";
					getch();
					clrscr();
					break;
				case 12:
					break;
				default:
					cout<<"\n\n\n\n\n\n\n\n\n";
					cout<<"       \t\t\t  !!!User Code Error!!!"<<endl;
					cout<<"       \t\t\tUser Entered Wrong Choice"<<endl;
			 }       //end of switch case 5
			 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
			 cout<<"\tQ.\tWish To Continue in Finding Volume of 3-D Figures Program(y/n):";
			 cin>>ans;
			 clrscr();    //clesring screen
			}while(ans=='y'||ans=='Y'); //end of nested do while5
		 break;                              //continue till user enter y
		 case 5:             // case 5 of nested switch case1
		 break;                   //to exit from menu
		 default:                  //default option for wrong entry
			 cout<<"\n\n\n\n\n\n\n\n\n";
			 cout<<"       \t\t\t  !!!User Code Error!!!"<<endl;
			 cout<<"       \t\t\tUser Entered Wrong Choice"<<endl;
	       }       //end of nested switch case1
	       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\tQ.\t  WISH TO CONTINUE IN CALCULATOR PROGRAMM:(y/n):";
	       cin>>ans;
	       clrscr();             //clearing screen
	      }while((ans=='y')||(ans=='Y'));    //end of nested do while1
	      break;                          //continue till user ans y
	      case 2:           //switch case 2
		     Frmula_Pattern();    //caliing formula paatern function
		     getch();             //wait till user enter any key
		     do                 //nested do while6
		     {
		      clrscr();            //clear screen
		      cout<<"\n\t\t\tWELCOME USER TO FORMULA MENU"<<endl; //displaying forrmula menu
		      cout<<"--------------------------------------------------------------------------------"<<endl;
		      cout<<"\t@\t1).Enter Formula.     ";
		      cout<<"\t\t2).Show Formula.\t      @"<<endl;
		      cout<<"\t@\t3).Delete Formula.";
		      cout<<"\t\t4).Modify Formula.\t      @"<<endl;
		      cout<<"\t@\t5).Exit From The Programm.\t\t\t\t      @"<<endl;
		      cout<<"\n\t\t\tSELECT YOUR CHOICE FROM MENU(1 to 5)"<<endl;
		      cout<<"\n\t\t\t    :-)\tEnter Your Choice:";
		      cin>>ch;                   //enter choice to use function
		      clrscr();                 //clearing screen
		      switch(ch)                 //nested switch case6
		      {
			case 1:
				cout<<"\n\t\t\tWelcome User to Enter Formula Programm"<<endl;
				cout<<"--------------------------------------------------------------------------------"<<endl;
				Enter1();
				getch();
			break;
			case 2:
				cout<<"\n\t\t\tWelcome User To Display Formula Programm"<<endl;
				cout<<"--------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tThe Formula You Entered Are:"<<endl;
				Display1();
				getch();
			break;
			case 3:
				cout<<"\n\t\t\tWelcome User to Delete Formula Programm"<<endl;
				cout<<"--------------------------------------------------------------------------------"<<endl;
				Del();
				getch();
			break;
			case 4:
				cout<<"\n\t\t\tWelcome User To Modify Formula Programm"<<endl;
				cout<<"--------------------------------------------------------------------------------"<<endl;
				Modify();
				getch();
			break;
			case 5:
			break;
			default:
				cout<<"\n\n\n\n\n\n\n\n\n";
				cout<<"       \t\t\t  !!!User Code Error!!!"<<endl;
				cout<<"       \t\t\tUser Entered Wrong Choice"<<endl;
		      }     //end of nested switch case6
		      clrscr();
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		      cout<<"\t\tQ.\t  WISH TO CONTINUE IN FORMULA PROGRAMM(y/n):";
		      cin>>ans;
		      clrscr();       //clearing screen
		     }while(ans=='y'||ans=='Y'); //continue till ans is y
	      break;                         //end of nested do while6
	      case 3:
		     Clear_All();         //caling clear all history function
		     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<"\t\t\tALL HISTORY DELETED SUCCESSFULLY";
		     getch();
		     clrscr();
	      break;
	      case 4:
		     exit(0);          //to exit from programm
	      default:               //default choice for wrong entry
		      cout<<"\n\n\n\n\n\n\n\n\n";
		      cout<<"\t\t\t\t  !!!SYSTEM CODE ERROR!!!"<<endl;
		      cout<<"\t\t\t\tUSER ENTERED WRONG CHOICE"<<endl;
	     }    //end of switch case
	    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	    cout<<"\t\t\tQ.\t  WISH TO GO IN MAIN MENU(y/n):";
	    cin>>ans;
	    clrscr();     //clearing screen
	    }while((ans=='y')||(ans=='Y'));//continue till user ans is y,end of do while
	   } //end of password compaing if
	   else
	   {
	    cout<<"\n\n\t\t\t      Wrong Password Entered"<<endl;
	    ifstream fin("pass.txt",ios::in);       //reading pass.txt file
	    while(fin)
	    {
	     fin>>j;
	     q=j;
	    }
	    fin.close();                    //closing file
	    ifstream fr("pass1.txt",ios::in);       //reading pass1.txt file
	    while(fr)
	    {
	     fr>>m;
	     c=m;
	    }
	    fr.close();                           //closing file
	    ofstream fw("pass1.txt",ios::out);      //creating pass1.txt file
	    m=c-2;
	    fw<<m;
	    fw.close();                   //showing number of time
	    p=m+q;                           //you can enter password
	    cout<<"\n\t\t\t    (You Have "<<p<<" Attempt left)"<<endl;
	    cout<<"\n\n\t\t\tWish To Enter Password Again(y/n):";
	    cin>>ans;				  //if ans y again enter password
	    if((ans=='y' || ans=='Y'))
	    {
	     clrscr();
	     ofstream fout("pass.txt",ios::out);         //creating text file
	     j++;
	     fout<<j;                                //writing value in it
	     fout.close();                            //closing file
	     if(j<4)goto start;                    //goto statement
	     if((j==4)&&strcmp(mah,pk)!=0)      //condition if limit exceeded for
	     {                                           //entering password
	      cout<<"\n\n\n\n\n\n\n\n";
	      cout<<"\t\t\t\t    *     *\n\t\t\t\t       |\n    ";
	      cout<<"\n\t\t\t     !!!!INTRUDER ALERT!!!!"<<endl;
	      cout<<"\t\t       EXCEEDED LIMIT OF ENTERING PASSWORD"<<endl;
	      cout<<"\t\t           YOU CAN'T OPEN FILE ANYMORE"<<endl;
	      cout<<"\t\t\t\t      * *\n\t\t\t\t    *     *";
	     }
	    }
	    else      //condition if ans is not 'y'
	    {
	      ofstream fout("pass.txt",ios::out);   //creating text file
	      j++;                             //increasing value of j
	      fout<<j;                       //writing in file
	      fout.close();	       //closing file
	      exit(0);                       //exit from programm
	    }
	   }
	 }  //close of conditon to starting programm
	 else          //ifk>4 then cannot open file
	 {
	   cout<<"\n\n\n\n\n\n\n\n";
	   cout<<"\t\t\t\t    *     *\n\t\t\t\t       |\n    ";
	   cout<<"\n\t\t\t     !!!!INTRUDER ALERT!!!!"<<endl;
	   cout<<"\t\t       EXCEEDED LIMIT OF ENTERING PASSWORD"<<endl;
	   cout<<"\t\t           YOU CAN'T OPEN FILE ANYMORE"<<endl;
	   cout<<"\t\t\t\t      * *\n\t\t\t\t    *     *";
	 }
	 getch();             //wait till user enter any key
  }                   //end of main

