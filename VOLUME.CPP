			//VOLUME CALCULATING PROGRAMM
 class Volume
 {
  private:
   float slant_hght,length,breadth,side;
   float radius,radius1,radius2,radius3,radius4,radius5,radius6,radius7,radius8,radius9;
   float height,height1,height2,height3;
   float v_rcylnd, v_cone, v_cube, v_cuboid, v_hemis, v_sphere, v_frustum;
   float v_hsphere, v_hcylnd;
  public:
   void vol_of_rcylinder()
   {

	cout.setf(ios::fixed);
	cout<<"\t\tRadius Of Right Circular Cylinder Entered Was:"<<radius<<endl;
	cout<<"\t\tHeight Of Right Circular Cylinder Entered Was:"<<height<<endl;
	cout<<"\t\tVolume Of Right Circular Cylinder is:"<<setprecision(4)<<v_rcylnd<<endl;
	cout<<"\t\t-------------------------------------------------------"<<endl;
   }
   void vol_of_hcylinder()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tLarger Radius Of Hollow Cylinder Entered Was:"<<radius1<<endl;
	cout<<"\t\tSmaller Radius Of Hollow Cylinder Entered Was:"<<radius2<<endl;
	cout<<"\t\tHeight of Hollow Cylinder Entered Was:"<<height1<<endl;
	cout<<"\t\tVolume Of Hollow Cylinder is:"<<setprecision(4)<<v_hcylnd<<endl;
	cout<<"\t\t-------------------------------------------------------"<<endl;
   }
   void vol_of_cone()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tRadius Of Cone Entered Was:"<<radius3<<endl;
	cout<<"\t\tSlant Height Of Cone Entered Was:"<<slant_hght<<endl;
	cout<<"\t\tVolume Of Cone is:"<<setprecision(4)<<v_cone<<endl;
	cout<<"\t\t---------------------------------------------"<<endl;
   }
   void vol_of_cube()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tLength Of Side Of Cube Entered Was:"<<side<<endl;
	cout<<"\t\tVolume Of Cube is:"<<setprecision(4)<<v_cube<<endl;
	cout<<"\t\t-----------------------------------------"<<endl;
   }
   void vol_of_cuboid()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tLength Of Cuboid Entered Was:"<<length<<endl;
	cout<<"\t\tBreadth Of Cuboid Entered Was:"<<breadth<<endl;
	cout<<"\t\tHeight Of Cuboid Entered Was:"<<height2<<endl;
	cout<<"\t\tVolume Of Cuboid is:"<<setprecision(4)<<v_cuboid<<endl;
	cout<<"\t\t------------------------------------------"<<endl;
   }
   void vol_of_hemisphere()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tRadius Of Hemisphere Entered Was:"<<radius4<<endl;
	cout<<"\t\tVolume of Hemisphere is:"<<setprecision(4)<<v_hemis<<endl;
	cout<<"\t\t----------------------------------------"<<endl;
   }
   void vol_of_sphere()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tRadius Of Sphere Entered was:"<<radius5<<endl;
	cout<<"\t\tVolume of Sphere is:"<<setprecision(4)<<v_sphere<<endl;
	cout<<"\t\t----------------------------------------"<<endl;
   }
   void vol_of_hsphere()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tOuter Radius Of Hollow Sphere Entered Was:"<<radius6<<endl;
	cout<<"\t\tInner Radius Of Hollow Sphere:"<<radius7<<endl;
	cout<<"\t\tVolume of Hollow Sphere is:"<<setprecision(4)<<v_hsphere<<endl;
	cout<<"\t\t-------------------------------------------------"<<endl;
   }
   void vol_of_frustum()
   {
	cout.setf(ios::fixed);
	cout<<"\t\tLarger Radius Of Frustum Entered Was:"<<radius8<<endl;
	cout<<"\t\tSmaller Radius Of Frustum Entered Was:"<<radius9<<endl;
	cout<<"\t\tHeight Of Frustum Entered Was:"<<height3<<endl;
	cout<<"\t\tVolume Of Frustum is:"<<setprecision(4)<<v_frustum<<endl;
	cout<<"\t\t-------------------------------------------"<<endl;
   }
   void Vol_of_RCylinder();
   void Vol_of_HCylinder();
   void Vol_of_Cone();
   void Vol_of_Cube();
   void Vol_of_Cuboid();
   void Vol_of_Hemisphere();
   void Vol_of_Sphere();
   void Vol_of_HSphere();
   void Vol_of_Frustum();
 }V1;
 void History_Volume()
 {
	ifstream fv("Vol.dat",ios::in|ios::binary);
	while(fv.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_rcylinder();
	 getch();
	}
	fv.close();
	ifstream fv1("Vol1.dat",ios::in|ios::binary);
	while(fv1.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_hcylinder();
	 getch();
	}
	fv1.close();
	ifstream fv2("Vol2.dat",ios::in|ios::binary);
	while(fv2.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_cone();
	 getch();
	}
	fv2.close();
	ifstream fv3("Vol3.dat",ios::in|ios::binary);
	while(fv3.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_cube();
	 getch();
	}
	fv3.close();
	ifstream fv4("Vol4.dat",ios::in|ios::binary);
	while(fv4.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_cuboid();
	 getch();
	}
	fv4.close();
	ifstream fv5("Vol5.dat",ios::in|ios::binary);
	while(fv5.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_hemisphere();
	 getch();
	}
	fv5.close();
	ifstream fv6("Vol6.dat",ios::in|ios::binary);
	while(fv6.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_sphere();
	 getch();
	}
	fv6.close();
	ifstream fv7("Vol7.dat",ios::in|ios::binary);
	while(fv7.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_hsphere();
	 getch();
	}
	fv7.close();
	ifstream fv8("Vol8.dat",ios::in|ios::binary);
	while(fv8.read((char*)&V1,sizeof(V1)))
	{
	 V1.vol_of_frustum();
	 getch();
	}
	fv8.close();
 }
 void Clear_Volume_History()
 {
	remove("Vol.dat");
	remove("Vol1.dat");
	remove("Vol2.dat");
	remove("Vol3.dat");
	remove("Vol4.dat");
	remove("Vol5.dat");
	remove("Vol6.dat");
	remove("Vol7.dat");
	remove("Vol8.dat");
 }
 void Volume::Vol_of_RCylinder()
 {
	ofstream fv("Vol.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#  \tWelcome To Finding Volume of Right Cylinder Programm.      #"<<endl;
		cout<<"\t\tEnter The Radius Of Right Circular Cylinder:\n\t\t\t\t";
		cin>>radius;
		cout<<"\t\tEnter The Height Of Right Circular Cylinder:\n\t\t\t\t";
		cin>>height;
		v_rcylnd=pi*(radius*radius)*height;
		vol_of_rcylinder();
		fv.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue In Finding Volume Of RCylinder Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv.close();
 }
 void Volume::Vol_of_HCylinder()
 {
	ofstream fv1("Vol1.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t Welcome To Finding Volume of Hollow Cylinder Programm.      #"<<endl;
		cout<<"\t\tEnter The Larger Radius Of Hollow Cylinder:\n\t\t\t\t";
		cin>>radius1;
		cout<<"\t\tEnter The Smaller Radius Of Hollow Cylinder:\n\t\t\t\t";
		cin>>radius2;
		cout<<"\t\tEnter Height of Hollow Cylinder:\n\t\t\t\t";
		cin>>height1;
		v_hcylnd=pi*height1*((radius1*radius1)-(radius2*radius2));
		vol_of_hcylinder();
		fv1.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue In Finding Volume Of HCylinder Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv1.close();
 }
 void Volume::Vol_of_Cone()
 {
	ofstream fv2("Vol2.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome To Finding Volume of Cone Programm.      #"<<endl;
		cout<<"\t\tEnter The Radius Of Cone:\n\t\t\t";
		cin>>radius3;
		cout<<"\t\tEnter The Slant Height Of Cone:\n\t\t\t";
		cin>>slant_hght;
		v_cone=(1*pi*(radius3*radius3)*slant_hght)/3;
		vol_of_cone();
		fv2.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue In Finding Volume Of Cone Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv2.close();
 }
 void Volume::Vol_of_Cube()
 {
	ofstream fv3("Vol3.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome To Finding Volume of Cube Programm.      #"<<endl;
		cout<<"\t\tEnter The Length Of Side Of Cube:\n\t\t\t\t";
		cin>>side;
		v_cube=(side*side*side);
		vol_of_cube();
		fv3.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue In Finding Volume Of Cube Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv3.close();
 }
 void Volume::Vol_of_Cuboid()
 {
	ofstream fv4("Vol4.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome To Finding Volume of Cuboid Programm.      #"<<endl;
		cout<<"\t\tEnter The Length Of Cuboid:\n\t\t\t";
		cin>>length;
		cout<<"\t\tEnter The Breadth Of Cuboid:\n\t\t\t";
		cin>>breadth;
		cout<<"\t\tEnter The Height Of Cuboid:\n\t\t\t";
		cin>>height2;
		v_cuboid=length*breadth*height2;
		vol_of_cuboid();
		fv4.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue In Finding Volume Of Cuboid Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv4.close();
 }
 void Volume::Vol_of_Hemisphere()
 {
	ofstream fv5("Vol5.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Finding Volume Of Hemisphere programm\t #"<<endl;
		cout<<"\t\tEnter The Radius Of Hemisphere:\n\t\t\t";
		cin>>radius4;
		v_hemis=(2*pi*pow(radius4,3))/3;
		vol_of_hemisphere();
		fv5.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue in Finding Volume of Hemisphere Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv5.close();
 }
 void Volume::Vol_of_Sphere()
 {
	ofstream fv6("Vol6.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Finding Volume Of Sphere programm\t #"<<endl;
		cout<<"\t\tEnter The Radius Of Sphere:\n\t\t\t";
		cin>>radius5;
		v_sphere=(4*pi*pow(radius5,3))/3;
		vol_of_sphere();
		fv6.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue in Finding Volume of Sphere Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv6.close();
 }
 void Volume::Vol_of_HSphere()
 {
	ofstream fv7("Vol7.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome to Finding Volume Of Hollow Sphere programm\t #"<<endl;
		cout<<"\t\tEnter The Outer Radius Of Hollow Sphere:\n\t\t\t\t";
		cin>>radius6;
		cout<<"\t\tEnter The Inner Radius Of Hollow Sphere:\n\t\t\t\t";
		cin>>radius7;
		v_hsphere=(4*pi*(pow(radius6,3)-(pow(radius7,3))))/3;
		vol_of_hsphere();
		fv7.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.   Wish To Continue in Finding Volume of Hollow Sphere Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv7.close();
 }
 void Volume::Vol_of_Frustum()
 {
	ofstream fv8("Vol8.dat",ios::app|ios::binary);
	do
	{
		cout<<"\n\t#\t   Welcome To Finding Volume of Frustum Programm.      #"<<endl;
		cout<<"\t\tEnter The Larger Radius Of Frustum:\n\t\t\t\t";
		cin>>radius8;
		cout<<"\t\tEnter The Smaller Radius Of Frustum:\n\t\t\t\t";
		cin>>radius9;
		cout<<"\t\tEnter the Height Of Frustum:\n\t\t\t\t";
		cin>>height3;
		v_frustum=((1*pi*height3)*((radius8*radius8)+(radius8*radius9)+(radius9*radius9)))/3;
		vol_of_frustum();
		fv8.write((char*)&V1,sizeof(V1));
		cout<<"\tQ.\tWish To Continue In Finding Volume Of Frustum Program(y/n):";
		cin>>ans;
		clrscr();
	}while(ans=='y'||ans=='Y');
	fv8.close();
 }