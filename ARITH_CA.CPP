		     //ARITHMETIC CALCULATOR PROGRAMM
  char ans='y';
  int i;
 class Arithmetic
 {
  private:
   int size,size1;
   float add,subt, multi, divide, percent,sum[100],a[50],sq_root;
   float num,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11;
   long sq,cube,n;
  public:
   void addition()
   {
	cout<<"\t\tNumber Entered was:";
	for(i=0;i<size;i++)
	{
	 cout<<sum[i]<<" ";
	}
	cout<<"\n\t\tAddition of Entered Number is:"<<add<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void subtraction()
   {
	cout<<"\t\tNumber Entered Was:";
	cout<<num1<<" "<<num2;
	cout<<"\n\t\tSubtraction of the Entered number is:"<<subt<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void multiplication()
   {
	cout<<"\t\tNumber Entered was:";
	for(i=0;i<size1;i++)
	{
	 cout<<a[i]<<" ";
	}
	cout<<"\n\t\tMultiplication of entered number is:"<<multi<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void division()
   {
	cout<<"\t\tNumber Entered Was:";
	cout<<num3<<endl;
	cout<<"\t\tNumber To be Divided by:";
	cout<<num4;
	cout<<"\n\t\tDivision of Entered Number is:"<<divide<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void square_root()
   {
	cout<<"\t\tNumber Entered Was:";
	cout<<num;
	cout<<"\n\t\tSquare Root of the Entered Number is:"<<sq_root<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void square()
   {
	cout<<"\t\tNumber Entered Was:";
	cout<<n;
	cout<<"\n\t\tSquare of The Entered Number is:"<<sq<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void cube1()
   {
	cout<<"\t\tNumber Entered Was:";
	cout<<num5;
	cout<<"\n\t\tThe Cube of The Number is:"<<num6<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void power()
   {
	cout<<"\t\tNumber Entered Was:";
	cout<<num7<<endl;
	cout<<"\t\tPower Entered Was:";
	cout<<num8;
	cout<<"\n\t\tValue  of the Given Number on Given Power is:"<<num9<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void percentage()
   {
	cout<<"\t\tNumber Entered Was:";
	cout<<num10<<endl;
	cout<<"\t\tPercentage Entered Was:";
	cout<<num11;
	cout<<"\n\t\tPercentage Calculated is:"<<percent<<endl;
	cout<<"\t\t-------------------------------------"<<endl;
   }
   void Addition();
   void Subtraction();
   void Multiplication();
   void Division();
   void Square_Root();
   void Square();
   void Cube();
   void Power();
   void Percentage();
 }A1;
 void History_Arithmetic()
 {
	ifstream fin("math.dat",ios::in|ios::binary);
	while(fin.read((char*)&A1,sizeof(A1)))
	{
	 A1.addition();
	 getch();
	}
	fin.close();
	ifstream fin1("math1.dat",ios::in|ios::binary);
	while(fin1.read((char*)&A1,sizeof(A1)))
	{
	 A1.subtraction();
	 getch();
	}
	fin1.close();
	ifstream fin2("math2.dat",ios::in|ios::binary);
	while(fin2.read((char*)&A1,sizeof(A1)))
	{
	 A1.multiplication();
	 getch();
	}
	fin2.close();
	ifstream fin3("math3.dat",ios::in|ios::binary);
	while(fin3.read((char*)&A1,sizeof(A1)))
	{
	 A1.division();
	 getch();
	}
	fin3.close();
	ifstream fin4("math4.dat",ios::in|ios::binary);
	while(fin4.read((char*)&A1,sizeof(A1)))
	{
	 A1.square_root();
	 getch();
	}
	fin4.close();
	ifstream fin5("math5.dat",ios::in|ios::binary);
	while(fin5.read((char*)&A1,sizeof(A1)))
	{
	 A1.square();
	 getch();
	}
	fin5.close();
	ifstream fin6("math6.dat",ios::in|ios::binary);
	while(fin6.read((char*)&A1,sizeof(A1)))
	{
	 A1.cube1();
	 getch();
	}
	fin6.close();
	ifstream fin7("math7.dat",ios::in|ios::binary);
	while(fin7.read((char*)&A1,sizeof(A1)))
	{
	 A1.power();
	 getch();
	}
	fin7.close();
	ifstream fin8("math8.dat",ios::in|ios::binary);
	while(fin8.read((char*)&A1,sizeof(A1)))
	{
	 A1.percentage();
	 getch();
	}
	fin8.close();
 }
 void Clear_Arithmetic_History()
 {
	remove("math.dat");
	remove("math1.dat");
	remove("math2.dat");
	remove("math3.dat");
	remove("math4.dat");
	remove("math5.dat");
	remove("math6.dat");
	remove("math7.dat");
	remove("math8.dat");
 }
 void Arithmetic::Addition()
 {
	ofstream fout("math.dat",ios::app|ios::binary);
	do
	{
		add=0;
		cout<<"\n\t#\t    Welcome to Addition programm\t #"<<endl;
		cout<<"\t\tHow Many Numbers Do You Want To Enter? : ";
		cin>>size;
		cout<<"\t\tEnter Numbers"<<endl;
		for(i=0;i<size;i++)
		{
			cin>>sum[i];
			add=add+sum[i];
		}
		addition();
		fout.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Addition(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout.close();
 }
 void Arithmetic::Subtraction()
 {
	ofstream fout1("math1.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Subtraction programm\t #"<<endl;
		cout<<"\t\tEnter The Numbers:"<<endl;
		cin>>num1>>num2;
		subt=num1-num2;
		subtraction();
		fout1.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Subtacrtion(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout1.close();
 }
 void Arithmetic::Multiplication()
 {
	ofstream fout2("math2.dat",ios::app|ios::binary);
	do
	{
		multi=1;
		cout<<"\n\t#\t   Welcome to Multiplication programm\t\t#"<<endl;
		cout<<"\t\tHow Many Numbers Do You Want To Enter?"<<endl;
		cin>>size1;
		cout<<"\t\tEnter Numbers"<<endl;
		for(i=0;i<size1;i++)
		{
			cin>>a[i];
			multi=multi*a[i];
		}
		multiplication();
		fout2.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Multiplication(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout2.close();
 }
 void Arithmetic::Division()
 {
	ofstream fout3("math3.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Division programm\t\t  #"<<endl;
		cout<<"\t\tEnter The Numbers:"<<endl;
		cin>>num3>>num4;
		divide=num3/num4;
		division();
		fout3.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Division(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout3.close();
 }
 void Arithmetic::Square_Root()
 {
	ofstream fout4("math4.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Find Square Root programm\t\t #"<<endl;
		cout<<"\t\tEnter The Number:";
		cin>>num;
		sq_root=sqrt(num);
		square_root();
		fout4.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Square Root(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout4.close();
 }
 void Arithmetic::Square()
 {
  typedef long kong;
  kong mod, d, e;
  char ans='y';
  ofstream fout5("math5.dat",ios::app|ios::binary);
  do
  {
	cout<<"\n\t#\t   Welcome to Find Square programm\t   #"<<endl;
	cout<<"\t\tEnter The Number:";
	cin>>n;
	if(n<11)
	{
		d=n-1;
		d=((1*2)+1)*d+(d*(d-1));
		sq=1+d;
		square();
	}
	else if(n>=11)
	{
		mod=n%10;
		d=n-mod;
		e=n-d;
		e=((d*2)+1)*e+(e*(e-1));
		sq=(d*d)+e;
		square();
	}
	else
	{
		cout<<"\t\tNumber Not Satisfy Equation"<<endl;
		cout<<"\t\t     Programm Fails"<<endl;
	}
	fout5.write((char*)&A1,sizeof(A1));
	cout<<"\tQ.\tWish To Continue in Finding Square(y/n):";
	cin>>ans;
	clrscr();
  }while(ans=='y'||ans=='Y');
  fout5.close();
 }
 void Arithmetic::Cube()
 {
	ofstream fout6("math6.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Find Cube programm\t #"<<endl;
		cout<<"\t\tEnter the Number:";
		cin>>num5;
		num6=cube(num5);
		cube1();
		fout6.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Cube of a Number(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout6.close();
 }
 void Arithmetic::Power()
 {
	ofstream fout7("math7.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Find Power programm\t    #"<<endl;
		cout<<"\t\tEnter The Number:";
		cin>>num7;
		cout<<"\t\tEnter its power:";
		cin>>num8;
		num9=pow(num7,num8);
		power();
		fout7.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Finding power(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout7.close();
 }
 void Arithmetic::Percentage()
 {
	ofstream fout8("math8.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Percentage programm\t    #"<<endl;
		cout<<"\t\tEnter The Number:";
		cin>>num10;
		cout<<"\t\tEnter The percentage:";
		cin>>num11;
		percent=(num10*num11)/100;
		percentage();
		fout8.write((char*)&A1,sizeof(A1));
		cout<<"\tQ.\tWish To Continue in Finding Percentage(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fout8.close();
 }