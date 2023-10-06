		       //AREA OF 2D FIGURES PROGRAMM
 class Area2D
 {
   private:
    float ar_tri, ar_rect, ar_circle, ar_square, ar_rhombus;
    float side,base,height,length,breadth,diagnl1,diagnl2,radius;
   public:
    void area_of_rectangle()
    {
		cout<<"\t\tLength Entered Was:"<<length<<endl;
		cout<<"\t\tBreadth Entered Was:"<<breadth<<endl;
		cout<<"\t\tArea of Rectangle is:"<<ar_rect<<endl;
		cout<<"\t\t-------------------------------------"<<endl;
    }
    void area_of_triangle()
    {
		cout<<"\t\tBase Entered Was:"<<base<<endl;
		cout<<"\t\tHeight Entered Was:"<<height<<endl;
		cout<<"\t\tArea of Triangle is:"<<ar_tri<<endl;
		cout<<"\t\t-------------------------------------"<<endl;
    }
    void area_of_square()
    {
		cout<<"\t\tSide Entered Was:"<<side<<endl;
		cout<<"\t\tArea of Square is:"<<ar_square<<endl;
		cout<<"\t\t-------------------------------------"<<endl;
    }
    void area_of_circle()
    {
		cout<<"\t\tRadius Entered Was:"<<radius<<endl;
		cout<<"\t\tArea of Circle is:"<<ar_circle<<endl;
		cout<<"\t\t-------------------------------------"<<endl;
    }
    void area_of_rhombus()
    {
		cout<<"\t\tDiagonal One Entered Was:"<<diagnl1<<endl;
		cout<<"\t\tDiagonal Two Entered Was:"<<diagnl2<<endl;
		cout<<"\t\tArea Of Rhombus is:"<<ar_rhombus<<endl;
		cout<<"\t\t-------------------------------------"<<endl;
    }
    void Area_of_Rectangle();
    void Area_of_Triangle();
    void Area_of_Square();
    void Area_of_Circle();
    void Area_of_Rhombus();
 }a1;
 void History_Areaof_2D()
 {
	 ifstream f("Ar.dat",ios::in|ios::binary);
	 while(f.read((char*)&a1,sizeof(a1)))
	 {
	   a1.area_of_rectangle();
	   getch();
	 }
	 f.close();
	 ifstream f1("Ar1.dat",ios::in|ios::binary);
	 while(f1.read((char*)&a1,sizeof(a1)))
	 {
	   a1.area_of_triangle();
	   getch();
	 }
	 f1.close();
	 ifstream f2("Ar2.dat",ios::in|ios::binary);
	 while(f2.read((char*)&a1,sizeof(a1)))
	 {
	  a1.area_of_square();
	  getch();
	 }
	 f2.close();
	 ifstream f3("Ar3.dat",ios::in|ios::binary);
	 while(f3.read((char*)&a1,sizeof(a1)))
	 {
	   a1.area_of_circle();
	   getch();
	 }
	 f3.close();
	 ifstream f4("Ar4.dat",ios::in|ios::binary);
	 while(f4.read((char*)&a1,sizeof(a1)))
	 {
	   a1.area_of_rectangle();
	   getch();
	 }
	 f4.close();
 }
 void Clear_Areaof_2D_History()
 {
	remove("Ar.dat");
	remove("Ar1.dat");
	remove("Ar2.dat");
	remove("Ar3.dat");
	remove("Ar4.dat");
 }
 void Area2D::Area_of_Rectangle()
 {
	ofstream f("Ar.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Area of Rectangle programm\t #"<<endl;
		cout<<"\t\tEnter The Length of Rectangle:\n\t\t\t";
		cin>>length;
		cout<<"\t\tEnter The Breadth of Rectangle:\n\t\t\t";
		cin>>breadth;
		ar_rect=length*breadth;
		area_of_rectangle();
		f.write((char*)&a1,sizeof(a1));
		cout<<"\tQ.\tWish To Continue in Area Of Rectangle(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	f.close();
 }
 void Area2D::Area_of_Triangle()
 {
	ofstream f1("Ar1.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Area of Triangle programm\t #"<<endl;
		cout<<"\t\tEnter The Base Of triangle:\n\t\t\t";
		cin>>base;
		cout<<"\t\tEnter The Height of Triangle:\n\t\t\t";
		cin>>height;
		ar_tri=0.5*base*height;
		area_of_triangle();
		f1.write((char*)&a1,sizeof(a1));
		cout<<"\tQ.\tWish To Continue in Area Of Triangle(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	f1.close();
 }
 void Area2D::Area_of_Square()
 {
	ofstream f2("Ar2.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Area Of Square programm\t #"<<endl;
		cout<<"\t\tEnter The Side Of Square:\n\t\t\t";
		cin>>side;
		ar_square=side*side;
		area_of_square();
		f2.write((char*)&a1,sizeof(a1));
		cout<<"\tQ.\tWish To Continue in Square(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	f2.close();
 }
 void Area2D::Area_of_Circle()
 {
	ofstream f3("Ar3.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Area Of Circle programm\t #"<<endl;
		cout<<"\t\tEnter The Radius Of Circle:\n\t\t\t";
		cin>>radius;
		ar_circle=pi*(radius*radius);
		area_of_circle();
		f3.write((char*)&a1,sizeof(a1));
		cout<<"\tQ.\tWish To Continue in Square(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	f3.close();
 }
 void Area2D::Area_of_Rhombus()
 {
	ofstream f4("Ar4.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Area Of Rhombus programm\t #"<<endl;
		cout<<"\t\tEnter First Diagonal of Rhombus:\n\t\t\t";
		cin>>diagnl1;
		cout<<"\t\tEnter Second Diagonal of Rhombus:\n\t\t\t";
		cin>>diagnl2;
		ar_rhombus=0.5*(diagnl1*diagnl2);
		area_of_rhombus();
		f4.write((char*)&a1,sizeof(a1));
		cout<<"\tQ.\tWish To Continue in Area of Rhombus(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	f4.close();
 }
