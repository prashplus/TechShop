//MAIN PROJECT:Design by Prashant(14ce113) and Vicky(14ce109)
#include<time.h>
#include<iostream>
#include<cstdlib>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<windows.h>

using namespace std;


void loading();
void passphrase();
void process();
void mother();
void hdd();
void writer();
void sdram();
void accessories();
void usbdrive();
void externalhdd();
void mou();
void key();
void mon();
void print();
void project();
void scan();
void speak();
void add();
void addtocart(int);
void reducestock(int);
void delpid(int);
int pidgen();
int checkdeleted(int);
int check(int);
void billing();
void write();
void read();
void SEARCH();
void del();


//For Administrator purpose
int flag=1,checkout=0,total=0;

//ALL THE PRODUCT CALSSES STARTS FROM HERE

class processor
{
public:
    char modelid[20],socket[10];
    int cores,stock,PID,price;
    float clock;
    char brand[20];


    void input()
    {
        PID=pidgen();
       // cout<<"\nPID generated:"<<PID;
    cout<<"\nEnter Brand Name:";
    cin>>brand;
    cout<<"\nEnter Modelno.";
    cin>>modelid;
    cout<<"\nEnter Socket Type:";
    cin>>socket;
    cout<<"\nEnter clock speed:";
    cin>>clock;
    cout<<"\nEnter no of cores:";
    cin>>cores;
    cout<<"Enter the price:";
    cin>>price;
    cout<<"\nEnter the quantity:";
    cin>>stock;
    }
    void header()
        {
            cout<<endl;
            cout.width(6);cout<<"PID";
            cout.width(10);cout<<"BRAND";
            cout.width(10);cout<<"ModelID";
            cout.width(10);cout<<"Socket";
            cout.width(6);cout<<"Clock";
            cout.width(6);cout<<"Cores";
            cout.width(6);cout<<"Price";
            cout<<"\n***************************************************************************";
        }
    void display()
    {
            cout<<endl;
            cout.width(6);cout<<PID;
            cout.width(10);cout<<brand;
            cout.width(10);cout<<modelid;
            cout.width(10);cout<<socket;
            cout.width(6);cout<<clock;
            cout.width(6);cout<<cores;
            cout.width(6);cout<<price;
    }
    void change()
        {
            PID=pidgen();
        }

    int getcores()
       {
           return cores;
       }

};

class motherboard
    {
    public:
        char brand[10],formfactor[10],modelid[10];
        int stock,PID,price;

        void input()
            {
               PID=pidgen();
               // cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"\nEnter ModelID:";
                cin>>modelid;
                cout<<"\nEnter FormFactor:";
                cin>>formfactor;
                cout<<"\nEnter Price:";
                cin>>price;
                cout<<"\nEnter quantity:";
                cin>>stock;
            }
        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(10);cout<<"FormFactor";
                cout.width(6);cout<<"PRICE";
                cout<<"\n********************************************************************";

            }
        void display()
            {
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<formfactor;
                cout.width(6);cout<<price;

            }
            void change()
        {
            PID=pidgen();
        }
    };

class harddisk
    {
    public:
        char brand[10],type[5],modelid[10];
        int PID,stock,speed,price,SIZE;

        void input()
            {
                PID=pidgen();
                //cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"\nEnter ModelID:";
                cin>>modelid;
                cout<<"\nEnter TYPE(SATA or PATA):";
                cin>>type;
                cout<<"\nEnter Size in(GB):";
                cin>>SIZE;
                cout<<"\nEnter speed(in Gbps):";
                cin>>speed;
                cout<<"\nEnter price:";
                cin>>price;
                cout<<"\nEnter stock:";
            }
        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"TYPE";
                cout.width(6);cout<<"SIZE";
                cout.width(6);cout<<"SPEED";
                cout.width(6);cout<<"PRICE";
                cout<<"\n********************************************************************************";
            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(6);cout<<type;
                cout.width(6);cout<<SIZE;
                cout.width(6);cout<<speed;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

// DVD WRITER CLASS
class dvd
    {
    public:
        int stock,price,PID,speed;
        char brand[10],modelid[10],type[10];

        void input()
            {
                PID=pidgen();
               // cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"\nEnter Model Id:";
                cin>>modelid;
                cout<<"\nEnter Type(eg. supermulti,combo):";
                cin>>type;
                cout<<"\nEnter max. Speed:";
                cin>>speed;
                cout<<"\nEnter Price:";
                cin>>price;
                cout<<"\nEnter Stock:";
                cin>>stock;
            }
        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(10);cout<<"TYPE";
                cout.width(6);cout<<"Speed";
                cout.width(6);cout<<"Price";
                cout<<"\n*************************************************************************";

            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<type;
                cout.width(6);cout<<speed;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };


class ram
    {
    public:
        int PID,stock,price,clock;
        char modelid[10],brand[10],type[10],device[10];

        void input()
            {
                PID=pidgen();
              //  cout<<"\nProduct id generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelId:";
                cin>>modelid;
                cout<<"Enter Type(eg. DDR3):";
                cin>>type;
                cout<<"Enter device supported:";
                cin>>device;
                cout<<"Enter clock speed:";
                cin>>clock;
                cout<<"Enter price:";
                cin>>price;
                cout<<"Enter Quantity:";
                cin>>stock;
            }
        void header()
            {
                cout<<"\n";
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"TYPE";
                cout.width(10);cout<<"Device";
                cout.width(6);cout<<"Clock";
                cout.width(6);cout<<"Price";
                cout<<"\n**********************************************************************";
            }

        void display()
            {
                cout<<"\n";
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(6);cout<<type;
                cout.width(10);cout<<device;
                cout.width(6);cout<<clock;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

class usb
    {
    public:
        int PID,price,stock,speed;
        char brand[10],modelid[10],type[6];

        void input()
            {
                PID=pidgen();
               // cout<<"\nPID generated"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelId:";
                cin>>modelid;
                cout<<"Enter Type:";
                cin>>type;
                cout<<"Enter Speed:";
                cin>>speed;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter Quantity:";
                cin>>stock;

            }
        void header()
            {

                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"Type";
                cout.width();cout<<"Speed";
                cout.width();cout<<"Price";
                cout<<"\n**********************************************************************";
            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(6);cout<<type;
                cout.width(6);cout<<speed;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

class mouse
    {
    public:
        int PID,stock,price;
        char brand[10],modelid[10],type[10];

        void input()
            {
                PID=pidgen();
               // cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelID:";
                cin>>modelid;
                cout<<"Enter Type(wired/Wireless):";
                cin>>type;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter quantity:";
                cin>>stock;
            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelId";
                cout.width(10);cout<<"TYPE";
                cout.width(6);cout<<"PRICE";
                cout<<"\n*********************************************************************************";
            }

        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<type;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };


class keyboard
    {
   public:
        int PID,stock,price;
        char brand[10],modelid[10],type[10];

        void input()
            {
                PID=pidgen();
              //  cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelID:";
                cin>>modelid;
                cout<<"Enter Type(wired/Wireless):";
                cin>>type;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter quantity:";
                cin>>stock;
            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelId";
                cout.width(10);cout<<"TYPE";
                cout.width(6);cout<<"PRICE";
                cout<<"\n*********************************************************************************";
            }

        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<type;
                cout.width(6);cout<<price;
            }
            void change()
        {
            PID=pidgen();
        }
    };

class monitor
    {
    public:
        int stock,price,PID;
        float SIZE;
        char brand[10],modelid[10],resolution[10],contrast[10];

        void input()
            {
                PID=pidgen();
              //  cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"ModelId:";
                cin>>modelid;
                cout<<"Enter Size:";
                cin>>SIZE;
                cout<<"Enter Resolution(a x b):";
                cin>>resolution;
                cout<<"Enter contrast:";
                cin>>contrast;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"\nEnter quantity:";
                cin>>stock;

            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"SIZE";
                cout.width(10);cout<<"Resolution";
                cout.width(10);cout<<"Contrast";
                cout.width(6);cout<<"Price";
                cout<<"\n***************************************************************************************";
            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(6);cout<<SIZE;
                cout.width(10);cout<<resolution;
                cout.width(10);cout<<contrast;
                cout.width(6);cout<<price;
            }
        void change()
            {
            PID=pidgen();
            }

    };

class printer
    {
    public:
        int PID,stock,price;
        char brand[10],modelid[10],resolution[10],type[10],inter[6],traysize[6];

        void input()
            {
                PID=pidgen();
              // cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelId:";
                cin>>modelid;
                cout<<"Enter Print Resolution(in dpi):";
                cin>>resolution;
                cout<<"Enter Type(color/bw):";
                cin>>type;
                cout<<"Enter Interface:";
                cin>>inter;
                cout<<"Enter TraySize:";
                cin>>traysize;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter quantity:";
                cin>>stock;
            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(10);cout<<"Resolution";
                cout.width(10);cout<<"Type";
                cout.width(6);cout<<"Interface";
                cout.width(6);cout<<"TraySize";
                cout.width(6);cout<<"Price";
                cout<<"\n***********************************************************************************";

            }

        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<resolution;
                cout.width(10);cout<<type;
                cout.width(6);cout<<inter;
                cout.width(6);cout<<traysize;
                cout.width(6);cout<<price;
            }
            void change()
            {
            PID=pidgen();
            }
    };

class projector
    {
    public:
        int stock,price,PID;
        float SIZE;
        char brand[10],modelid[10],resolution[10],contrast[10],inter[6];

        void input()
            {
                PID=pidgen();
             //   cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"ModelId:";
                cin>>modelid;
                cout<<"Enter Screen Size:";
                cin>>SIZE;
                cout<<"Enter Interface:";
                cin>>inter;
                cout<<"Enter Resolution(a x b):";
                cin>>resolution;
                cout<<"Enter contrast:";
                cin>>contrast;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"\nEnter quantity:";
                cin>>stock;

            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(6);cout<<"D.Size";
                cout.width(10);cout<<"Interface";
                cout.width(10);cout<<"Resolution";
                cout.width(10);cout<<"Contrast";
                cout.width(6);cout<<"Price";
                cout<<"\n***************************************************************************************";
            }
        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<SIZE;
                cout.width(6);cout<<inter;
                cout.width(10);cout<<resolution;
                cout.width(10);cout<<contrast;
                cout.width(6);cout<<price;
            }
            void change()
            {
            PID=pidgen();
            }
    };

class scanner
    {
        public:
        int PID,stock,price;
        char brand[10],modelid[10],resolution[10],type[10],inter[6],traysize[6];

        void input()
            {
                PID=pidgen();
             //   cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelId:";
                cin>>modelid;
                cout<<"Enter Scan Resolution(in dpi):";
                cin>>resolution;
                cout<<"Enter Interface:";
                cin>>inter;
                cout<<"Enter TraySize:";
                cin>>traysize;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter quantity:";
                cin>>stock;
            }

        void header()
            {
                cout<<endl;
                cout.width(6);cout<<"PID";
                cout.width(10);cout<<"BRAND";
                cout.width(10);cout<<"ModelID";
                cout.width(10);cout<<"Resolution";
                cout.width(6);cout<<"Interface";
                cout.width(6);cout<<"TraySize";
                cout.width(6);cout<<"Price";
                cout<<"\n***********************************************************************************";

            }

        void display()
            {
                cout<<endl;
                cout.width(6);cout<<PID;
                cout.width(10);cout<<brand;
                cout.width(10);cout<<modelid;
                cout.width(10);cout<<resolution;
                cout.width(6);cout<<inter;
                cout.width(6);cout<<traysize;
                cout.width(6);cout<<price;
            }
            void change()
            {
            PID=pidgen();
            }
    };

class speaker
    {
    public:
        int stock,price,PID,pmpo;
        char brand[10],modelid[10],type[10];

        void input()
            {
                PID=pidgen();
              //  cout<<"\nPID generated:"<<PID;
                cout<<"\nEnter Brand:";
                cin>>brand;
                cout<<"Enter ModelID:";
                cin>>modelid;
                cout<<"Enter Type:";
                cin>>type;
                cout<<"Enter PMPO:";
                cin>>pmpo;
                cout<<"Enter Price:";
                cin>>price;
                cout<<"Enter Stock:";
                cin>>stock;
            }

        void header()
            {
                cout<<endl;
                cout.width();cout<<"PID";
                cout.width();cout<<"BRAND";
                cout.width();cout<<"ModelID";
                cout.width();cout<<"TYPE";
                cout.width();cout<<"PMPO";
                cout.width();cout<<"PRICE";
                cout<<"\n*********************************************************************************************";
            }

        void display()
            {
                cout<<endl;
                cout.width();cout<<PID;
                cout.width();cout<<brand;
                cout.width();cout<<modelid;
                cout.width();cout<<type;
                cout.width();cout<<pmpo;
                cout.width();cout<<price;
            }
            void change()
            {
            PID=pidgen();
            }
    };

class pid
    {
    public:
        int PID;
    };
class consumer
		{
		long cno;
		char cname[20];
		char adress[20];
		long phone;
		public:

      //FUNCTION TO ENTER THE VALUES

		public:

      void entry()
		{
            cout<<"\nEnter Employee ID:";
            cin>>cno;
            cout<<"\nEnter Employee Address:";
            cin>>adress;
            cout<<"\nEnter Employee Contact No.:";
            cin>>phone;
		}

      //FUNCTION TO DISPLAY THE VALUES

      void display()
		    {
                cout<<"\nEmployee ID:"<<cno;
                cout<<"\nEmployee Address:"<<adress;
                cout<<"\nEmployee Contact No:"<<phone;
		    }
      int rcno()
      {
      return cno;
      }
      }c;


main()
    {
        int n;
        system("color 3f");
        system("mode 100,200");
        k:
        loading();


        system("cls");
        cout<<"\n\n\n\n\n\t**********************************************************************************";
        cout<<"\n\t**********************************************************************************";
        cout<<"\n\t=================================  WELCOME TO  ===================================";
        cout<<"\n\t===================   HIGH TECH COMPUTERS AND PERIPHERALS   ======================";
        cout<<"\n\t*******************   Powered By:TechShop Database System   **********************";
        cout<<"\n\t**********************************************************************************";
        cout<<"\n\t^^^^^^^^^^^Designed And Developed By: Prashant Piprotar and Vicky Patel^^^^^^^^^^^";
        cin.ignore();


        passphrase();

        char c='y';

            {

                s:
                system("cls");
                cout<<"\n\t\t\t\tMAIN MENU";
                if(flag==1)
                    cout<<"\n\t\t1. Computer Parts\n\t\t2. Computer Accessories\n\t\t3. Computer Peripherals\n\t\t4. UPDATE\n\t\t5. CheckOut\n\t\t6. Employee\n\t\t7. Switch user\n\t\t8. EXIT";
                else
                    cout<<"\n\t\t1. Computer Parts\n\t\t2. Computer Accessories\n\t\t3. Computer Peripherals\n\t\t5. CheckOut\n\t\t7. Switch user\n\t\t8. EXIT";
                cout<<"\nEnter your choice:";
                cin>>n;

                if(n==1)
                {
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n\t*****************COMPUTER PARTS******************";
                    cout<<"\n\n\t\t1.Processor\n\t\t2.Motherboard\n\t\t3.HDD\n\t\t4.DVD Writer\n\t\t5.SD-RAM\n\t\t6.Main menu";
                    cout<<"\nEnter Your choice:";
                    cin>>n;

                    switch(n)
                        {
                        case 1:process();
                            break;
                        case 2:mother();
                            break;
                        case 3:hdd();
                            break;
                        case 4:writer();
                            break;
                        case 5:sdram();
                            break;
                        case 6:goto s;
                            break;

                        default:cout<<"\nWrong Choice Entered:";
                        }
                    goto s;
                }
                else if(n==2)
                {
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n\t*****************COMPUTER ACCESSORIES******************";
                    cout<<"\n\n\t\t1.USB FLASH DRIVE\n\t\t2.External HDD\n\t\t3.MOUSE\n\t\t4.KEYBOARD\n\t\t5.Main menu";
                    cout<<"\nEnter Your choice:";
                    cin>>n;

                    switch(n)
                        {
                        case 1:usbdrive();
                            break;
                        case 2:externalhdd();
                            break;
                        case 3:mou();
                            break;
                        case 4:key();
                            break;
                        case 5:goto s;
                            break;
                        default:cout<<"\nWrong Choice Entered:";
                        }
                    goto s;
                }
                else if(n==3)
                {
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n\t*****************COMPUTER PERIPHERALS******************";
                    cout<<"\n\n\t\t1.Monitor\n\t\t2.Printer\n\t\t3.Projector\n\t\t4.Scannner\n\t\t5.Speakers\n\t\t6.MainMenu";
                    cout<<"\nEnter Your choice:";
                    cin>>n;

                    switch(n)
                        {
                        case 1:mon();
                            break;
                        case 2:print();
                            break;
                        case 3:project();
                            break;
                        case 4:scan();
                            break;
                        case 5:speak();
                            break;
                        case 6:goto s;
                            break;
                        default:cout<<"\nWrong Choice Entered:";
                        }
                        goto s;
                }
                else if(n==4&&flag==1)
                {
                    o:
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n\t\t\t************WECOME TO THE UPDATION CENTER********************";
                    cout<<"\n1.Add products\n2.Remove Products\n3.Main Menu";
                    cout<<"\nEnter your choice:";
                    cin>>n;
                    switch(n)
                    {
                        case 1:add();
                            break;
                        case 2:
                            delpid(0);
                            break;
                        case 3:
                            goto s;
                        default:
                            cout<<"\nTry again";
                            goto o;
                    }
                    goto s;
                }
                else if(n==5)
                {
                    ss:
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    fstream f;
                    f.open("cart.txt",ios::in);
                    char temp;
                    cout<<"\n\n\t\t1.Show the bill preview\n\t\t2.CheckOut\n\t\t3.Dump the cart\n\t\t4.Main Menu";
                    cin>>n;
                    if(n==1)
                    {
                        while(f)
                        {
                            f.get(temp);
                            cout<<temp;
                        }
                        f.close();
                    }
                    else if(n==2)
                    {
                    billing();

                    cout<<"\n\n\n\n\n\t\t\t\tSHOP DETAILS\n\n\n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
		cout<<"\t\t  #   TIMING: 11 AM TO 02 PM & 03 PM TO 05 PM                    \n";
		cout<<"\t\t  #   SHOP WILL CLOSED ON TUESDAY.                               \n";
		cout<<"\t\t  #   GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED.            \n";
		cout<<"\t\t  #   TAKE YOUR SMART CARD WITH YOU.                             \n";
		cout<<"\t\t  #   COLLECT YOUR SMART CARD & BILL AFTER PAYMENT.              \n";
		cout<<"\t\t  #   DO NOT BREAK ANY SHOP ITEMS.                               \n";
		cout<<"\t\t  #   FOR ANY COMPLAINT CONTACT THE CHAIR PERSON.                \n";
		cout<<"\t\t  #   25 YEARS OF EXPERIENCE.                                    \n";
		cout<<"\t\t  #   CHAIR PERSON :- MR. BHAVISHAY NIGAM.                       \n";
		cout<<"\t\t  #   AN ISO 9001-2000 CERTIFIED COMPANY.                        \n";
		cout<<"\t\t  #   WELL QUALIFIED STAFF MEMBERS.                              \n";
		cout<<"\t\t  #   Email :- www.star_computers.com                            \n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
                    }
                    else if(n==3)
                    {
                        fstream f;
                        f.open("cart.txt",ios::out);
                        f.close();
                    }
                    else if(n==4)
                    goto s;
                    else
                        goto ss;
                }
                else if(n==6&&flag==1)
                {
                    system("cls");
                    cout<<"\nLoading";
                    loading();
                    system("cls");
                    cout<<"\n***********************************EMPLOYEE INFORMATION**************************************************";
                    cout<<"\n1.Show all employees\n2.Enter New Employee\n3.Search\n4.Delete Employee Info.";
                    cin>>n;
                    if(n==1)
                    {
                        cout<<"\nStart";
                        read();
                        cout<<"\nEnd";
                        cin.ignore();
                    }
                    else if(n==2)
                    {
                        write();
                    }
                    else if(n==3)
                    {
                        SEARCH();
                    }
                    else if(n==4)
                    {
                        del();
                    }
                    else
                        goto s;
                }

                //Switch User
                else if(n==7)
                    goto k;



                else if(n==8)
                    exit(0);





                else
                {
                    goto s;
                }
                cin.ignore();
                system("cls");

                cout<<"\nWant to buy something else? :";
                cin>>c;

                if(c!='n')
                    goto s;

            }


cin.ignore();
        return 0;
    }
//MAIN PROJECT:Design by Prashant(14ce113) and Vicky(14ce109)




void loading()
    {
        system("cls");
        cout<<"\n\tLOADING";
        for(int i=0;i<5;i++)
        {
            Sleep(500);
            cout<<". ";
        }
    }


void passphrase()
    {
        int i,n,j=0,k;
        char a[10],b[10]="abc",c,d[10]="abc";


        cout<<"\n\tWhich way you want log in?";
        cout<<"\n\t1.ADMINISTRATOR\n\t2.Employee";
        cin>>n;
        if(n==1)
        {
            for(i=3;i>=0;i--)
                {
                for(k=0;k<10;k++)
                    {
                        a[k]='\0';
                    }
                j=0;
                system("cls");
                cout<<"\nNo. of retry(s) remaining: "<<i;

                cout<<"\nEnter the ADMINISTRATIVE PASSPHRASE:";

                while(j<9)
                    {
                    c=_getch();
                    a[j] = c;
                    cout<<"*";
                    if(strcmp(a,b)==0)
                        {
                        cout<<"\nAUTHORISED ENTRY";
                        flag=1;
                        Sleep(2000);
                        return;
                        }
                    j++;
                    }
                }
                cout<<"\nUNAUTHORISED ENTRY";
                Sleep(2000);
                exit(0);
        }
        else
            {
            cout<<"\nIn this session updation is NOT ALLOWED";
                for(i=3;i>=0;i--)
                {
                    for(k=0;k<10;k++)
                        {
                            a[k]='\0';
                        }
                    j=0;
                system("cls");
                cout<<"\nNo. of retry(s) remaining: "<<i;

                cout<<"\nEnter the EMPLOYEE PASSPHRASE:";

                while(j<9)
                    {
                    c=_getch();
                    a[j] = c;
                    cout<<"*";
                    if(strcmp(a,b)==0)
                        {
                        cout<<"\nAUTHORISED ENTRY";
                        flag=0;
                        Sleep(2000);
                        return;
                        }
                    j++;
                    }
                }
                cout<<"\nUNAUTHORISED ENTRY";
                Sleep(2000);
                exit(0);

            }
    }


//ALL THE SUB MENUS*************************************************************


void process()
    {
        fstream fin,f;

        int n,x,COUNT=0;char c,a[10];
        a:
        cout<<"\n\t\t***********WELCOME TO THE SECTION OF PROCESSORS***********";
        cout<<"\n\n\t1.Show all the products\n\t2.Search by brand\n\t3.Search by cores";
        cin>>x;

        f.open("deleted.txt",ios::in);
        fin.open("processor.txt",ios::in);
        processor p;
        if(x==1)
            {
                p.header();
                while(fin)
                            {
                            fin.read((char*)&p,sizeof(p));
                            if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                            p.display();
                            COUNT++;
                            }
                        if(COUNT==0)
                            cout<<"\n   :( No products found";
            }
        else if(x==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            p.header();
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(strcmp(p.brand,a)==0)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";

        }
        else if(x==3)
        {
                    cout<<"\nEnter no of the cores:";
                    cin>>x;
                     p.header();
                    while(fin)
                            {

                            fin.read((char*)&p,sizeof(p));
                            if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                            if(p.getcores()==x)
                                {
                                p.display();
                                }
                            COUNT++;
                            }
                        if(COUNT==0)
                            cout<<"\n   :( No products found";
;
        }
        else
        {
            cout<<"\nWrong choice entered";
            goto a;
        }

    while(1)
       {
        cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
        cin>>x;
        if(x==0)
            break;
        addtocart(x);

       }
    }

void mother()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF MOTHERBOARDS**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by FORMFACTOR\n3.Search by Brand";
        cin>>n;

        fin.open("motherboard.txt",ios::in);
        motherboard m;

        if(n==1)
            {
                m.header();
                    while(fin)
                            {

                            fin.read((char*)&m,sizeof(m));
                            if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                            m.display();
                            COUNT++;
                            }
                            if(COUNT==0)
                                cout<<"\n   :( No products found";


            }
        else if(n==2)
            {
                cout<<"\nEnter the formfactor:";
                cin>>a;
                m.header();
                while(fin)
                            {

                            fin.read((char*)&m,sizeof(m));
                            if(checkdeleted(m.PID))
                            {
                                continue;
                            }

                            if(strcmp(m.formfactor,a)==0)
                            {
                                m.display();
                                COUNT++;
                            }

                            if(COUNT==0)
                                cout<<"\n   :( No products found";
                            }


            }
        else if(n==3)
            {
                cout<<"\nEnter the BRAND name:";
                cin>>a;
                m.header();
                while(fin)
                            {

                            fin.read((char*)&m,sizeof(m));
                            if(checkdeleted(m.PID))
                            {
                                continue;
                            }

                            if(strcmp(m.brand,a)==0)
                            {
                                m.display();
                                COUNT++;
                            }

                            if(COUNT==0)
                                cout<<"\n   :( No products found";
                            }

            }

        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);

            }
    }

void hdd()
    {
        int n,x,p,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF HDD**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by TYPE\n3.Search by Brand\n4.Search by size";
        cin>>n;

        fin.open("harddisk.txt",ios::in);
        harddisk h;

        if(n==1)
        {
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        h.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            cout<<"\nEnter the TYPE of the interference:";
            cin>>a;
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(strcmp(h.type,a)==0)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            h.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(strcmp(h.brand,a)==0)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n=4)
        {
            cout<<"\nEnter the Min size of HDD:";
            cin>>p;
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(p>=h.SIZE)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }

    while(1)
       {
        cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
        cin>>x;
        if(x==0)
            break;
        addtocart(x);

       }
       fin.close();
    }


void writer()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF DISC WRITER**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("dvd.txt",ios::in);
        dvd d;

        if(n==1)
        {
            d.header();
            while(fin)
                    {

                        fin.read((char*)&d,sizeof(d));
                        if(checkdeleted(d.PID))
                            {
                                continue;
                            }
                        d.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
         else if(n==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            d.header();
            while(fin)
                    {

                        fin.read((char*)&d,sizeof(d));
                        if(checkdeleted(d.PID))
                            {
                                continue;
                            }
                        if(strcmp(d.brand,a)==0)
                        {
                        d.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the Disc writer:";
            cin>>a;
            d.header();
            while(fin)
                    {

                        fin.read((char*)&d,sizeof(d));
                        if(checkdeleted(d.PID))
                            {
                                continue;
                            }
                        if(strcmp(d.type,a)==0)
                        {
                        d.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }

        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);
            }
        fin.close();
    }

void sdram()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;
        system("cls");


        cout<<"\n\t\t************WELCOME TO THE SECTION OF SD-RAM **********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE\n4.Search by device supported";
        cin>>n;

        fin.open("ram.txt",ios::in);
        ram r;

        if(n==1)
        {
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        r.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        if(strcmp(r.brand,a)==0)
                        {
                        r.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the RAM:";
            cin>>a;
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        if(strcmp(r.type,a)==0)
                        {
                        r.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==4)
        {
            cout<<"\nEnter the DEVICE:";
            cin>>a;
            r.header();
            while(fin)
                    {

                        fin.read((char*)&r,sizeof(r));
                        if(checkdeleted(r.PID))
                            {
                                continue;
                            }
                        if(strcmp(r.device,a)==0)
                        {
                        r.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);
            }
        fin.close();
    }
//ACCESSORIES********************************************************************************************



void usbdrive()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;
        system("cls");


        cout<<"\n\t\t************WELCOME TO THE SECTION OF USB-FLASH DRIVE **********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("usb.txt",ios::in);
        usb u;

        if(n==1)
        {
            u.header();
            while(fin)
                    {

                        fin.read((char*)&u,sizeof(u));
                        if(checkdeleted(u.PID))
                            {
                                continue;
                            }
                        u.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            cout<<"\nEnter the Brand:";
            cin>>a;
            u.header();
            while(fin)
                    {

                        fin.read((char*)&u,sizeof(u));
                        if(checkdeleted(u.PID))
                            {
                                continue;
                            }
                        if(strcmp(u.brand,a)==0)
                        {
                        u.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
         else if(n==3)
            {
            cout<<"\nEnter the TYPE of the Flash Drive:";
            cin>>a;
            u.header();
            while(fin)
                    {

                        fin.read((char*)&u,sizeof(u));
                        if(checkdeleted(u.PID))
                            {
                                continue;
                            }
                        if(strcmp(u.type,a)==0)
                        {
                        u.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
            }


        while(1)
            {
            cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
            cin>>x;
            if(x==0)
                break;
            addtocart(x);
            }
        fin.close();
    }

void externalhdd()
    {
        int n,x,p,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF EXTERNAL HDD**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by TYPE\n3.Search by Brand\n4.Search by size";
        cin>>n;

        fin.open("exthdd.dat",ios::in);
        harddisk h;

        if(n==1)
        {
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        h.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            cout<<"\nEnter the TYPE of the interference:";
            cin>>a;
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(strcmp(h.type,a)==0)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            h.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(strcmp(h.brand,a)==0)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n=4)
        {
            cout<<"\nEnter the Min size of HDD:";
            cin>>p;
            h.header();
            while(fin)
                    {

                        fin.read((char*)&h,sizeof(h));
                        if(checkdeleted(h.PID))
                            {
                                continue;
                            }
                        if(p>=h.SIZE)
                        {
                        h.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }

    while(1)
       {
        cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
        cin>>x;
        if(x==0)
            break;
        addtocart(x);

       }
       fin.close();
    }
void mou()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF MOUSE**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("mouse.dat",ios::in);
        mouse m;

        if(n==1)
        {
            m.header();
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        m.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            m.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        if(strcmp(m.brand,a)==0)
                        {
                        m.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the interference:";
            cin>>a;
            m.header();
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        if(strcmp(m.type,a)==0)
                        {
                        m.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }

void key()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF KEYBOARD**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TYPE";
        cin>>n;

        fin.open("keyboard.dat",ios::in);
        keyboard k;

        if(n==1)
        {
            k.header();
            while(fin)
                    {

                        fin.read((char*)&k,sizeof(k));
                        if(checkdeleted(k.PID))
                            {
                                continue;
                            }
                        k.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            k.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&k,sizeof(k));
                        if(checkdeleted(k.PID))
                            {
                                continue;
                            }
                        if(strcmp(k.brand,a)==0)
                        {
                        k.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            cout<<"\nEnter the TYPE of the interference:";
            cin>>a;
            k.header();
            while(fin)
                    {

                        fin.read((char*)&k,sizeof(k));
                        if(checkdeleted(k.PID))
                            {
                                continue;
                            }
                        if(strcmp(k.type,a)==0)
                        {
                        k.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }
//Computer Peripherals functions starts from here*******************************************************

void mon()
    {
        int n,x,COUNT=0;
        char a[10];
        float p;
        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF MONITOR**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by Screen Size";
        cin>>n;

        fin.open("monitor.dat",ios::in);
        monitor m;

        if(n==1)
        {
            m.header();
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        m.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            m.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        if(strcmp(m.brand,a)==0)
                        {
                        m.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            m.header();
            cout<<"\nEnter the Screen Size:";
            cin>>p;
            while(fin)
                    {

                        fin.read((char*)&m,sizeof(m));
                        if(checkdeleted(m.PID))
                            {
                                continue;
                            }
                        if(p==m.SIZE)
                        {
                        m.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }
void print()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF PRINTER**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by Type\n4.Search by TraySize";
        cin>>n;

        fin.open("printer.dat",ios::in);
        printer p;

        if(n==1)
        {
            p.header();
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        p.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            p.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(strcmp(p.brand,a)==0)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
         else if(n==3)
        {
            p.header();
            cout<<"\nEnter the TYPE(bw, color):";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(strcmp(p.type,a)==0)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==4)
        {
            p.header();
            cout<<"\nEnter the TraySize:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(strcmp(p.traysize,a)==0)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }

void project()
    {
        int n,x,COUNT=0;
        char a[10];
        float q;
        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF PROJECTOR**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by Screen Size\n4.Search By Interface";
        cin>>n;

        fin.open("projector.dat",ios::in);
        projector p;

        if(n==1)
        {
            p.header();
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        p.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            p.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(strcmp(p.brand,a)==0)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            p.header();
            cout<<"\nEnter the Screen Size:";
            cin>>q;
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(q==p.SIZE)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==4)
        {
            p.header();
            cout<<"\nEnter the Interface:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&p,sizeof(p));
                        if(checkdeleted(p.PID))
                            {
                                continue;
                            }
                        if(strcmp(p.inter,a)==0)
                        {
                        p.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }

void scan()
    {
        int n,x,COUNT=0;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF PRINTER**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by TraySize";
        cin>>n;

        fin.open("printer.dat",ios::in);
        scanner s;

        if(n==1)
        {
            s.header();
            while(fin)
                    {

                        fin.read((char*)&s,sizeof(s));
                        if(checkdeleted(s.PID))
                            {
                                continue;
                            }
                        s.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            s.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&s,sizeof(s));
                        if(checkdeleted(s.PID))
                            {
                                continue;
                            }
                        if(strcmp(s.brand,a)==0)
                        {
                        s.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }

        else if(n==3)
        {
            s.header();
            cout<<"\nEnter the TraySize:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&s,sizeof(s));
                        if(checkdeleted(s.PID))
                            {
                                continue;
                            }
                        if(strcmp(s.traysize,a)==0)
                        {
                        s.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }

void speak()
    {
        int n,x,COUNT=0,p;
        char a[10];

        fstream fin;

        cout<<"\n\t\t************WELCOME TO THE SECTION OF SPEAKER**********";
        cout<<"\nChoose the way you want to explore:";
        cout<<"\n1.Show all Products\n2.Search by BRAND\n3.Search by Type\n4.Search by PMPO";
        cin>>n;

        fin.open("speaker.dat",ios::in);
        speaker s;

        if(n==1)
        {
            s.header();
            while(fin)
                    {

                        fin.read((char*)&s,sizeof(s));
                        if(checkdeleted(s.PID))
                            {
                                continue;
                            }
                        s.display();
                        COUNT++;
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==2)
        {
            s.header();
            cout<<"\nEnter the Brand:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&s,sizeof(s));
                        if(checkdeleted(s.PID))
                            {
                                continue;
                            }
                        if(strcmp(s.brand,a)==0)
                        {
                        s.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==3)
        {
            s.header();
            cout<<"\nEnter the Type:";
            cin>>a;
            while(fin)
                    {

                        fin.read((char*)&s,sizeof(s));
                        if(checkdeleted(s.PID))
                            {
                                continue;
                            }
                        if(strcmp(s.type,a)==0)
                        {
                        s.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        else if(n==4)
        {
            s.header();
            cout<<"\nEnter the PMPO(watts):";
            cin>>p;
            while(fin)
                    {

                        fin.read((char*)&s,sizeof(s));
                        if(checkdeleted(s.PID))
                            {
                                continue;
                            }
                        if(p==s.pmpo)
                        {
                        s.display();
                        COUNT++;
                        }
                    }
                    if(COUNT==0)
                        cout<<"\n   :( No products found";
        }
        while(1)
            {
                cout<<"\nEnter Product ID if you want to buy something, if not then enter 0:";
                cin>>x;
                if(x==0)
                    break;
                addtocart(x);

            }
        fin.close();
    }

void add()
    {
        int n,i;
        char c='y';
        fstream fout;
        r:
        system("cls");
        cout<<"\nWhat do you want to add?";
        cout<<"\n1.Processor\n2.MotherBoard\n3.HardDist\n4.DVD\n5.Ram\n6.USB flash drive\n7.External HDD\n8.Mouse\n9.Keyboard\n10.Monitor";
        cout<<"\n11.Printer\n12.Projector\n13.Scanner\n14.Speaker";
        cout<<"\nEnter your choice:";
        cin>>n;

        if(n==1)
        {
                        processor p1;
                        fout.open("processor.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                            cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }

        }
        else if(n==2)
        {
            motherboard p1;
                        fout.open("motherboard.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                            cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==3)
        {
            harddisk p1;
                        fout.open("harddisk.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==4)
        {
            dvd p1;
                        fout.open("dvd.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==5)
        {
            ram p1;
                        fout.open("ram.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==6)
        {
            usb p1;
                        fout.open("usb.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==7)
        {
            harddisk p1;
                        fout.open("exthdd.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==8)
        {
            mouse p1;
                        fout.open("mouse.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==9)
        {
            keyboard p1;
                        fout.open("keyboard.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==10)
        {
            monitor p1;
                        fout.open("monitor.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==11)
        {
            printer p1;
                        fout.open("printer.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==12)
        {
            projector p1;
                        fout.open("projector.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==13)
        {
            scanner p1;
                        fout.open("scanner.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }
        else if(n==14)
        {
            speaker p1;
                        fout.open("speaker.txt",ios::out|ios::app);
                        while(c!='n')
                            {
                            cout<<"\nEnter your data:";
                            p1.input();
                            for(i=1;i<=p1.stock;i++)
                                {
                                p1.change();

                                fout.write((char*)&p1,sizeof(p1));
                                }
                                cout<<"\nWant to enter more data?(y/n):";
                            cin>>c;
                            }
        }

        else
        {
                    cout<<"\nTry again";
                    goto r;
        }


    }


//CART FUNCTIONS STARTS FROM HERE

void addtocart(int x)
    {
        fstream f,fin,f2;
        f.open("cart.txt",ios::out|ios::app);
        f2.open("object.txt",ios::out|ios::app);
        pid z;
        if(checkout==0)
        {
            checkout=1;
            f<<"*************************************BILL***********************************************";
            f<<"        OBJECT                                     ";f<<"                    PRICE     ";
            total=0;
        }

        //*********************************************************
        fin.open("processor.txt",ios::in);
        processor p;
        while(fin)
                            {
                            fin.read((char*)&p,sizeof(p));
                            if(x==p.PID)
                                {
                                f<<endl<<p.brand<<"   "<<p.modelid<<"                    "<<p.price;
                                total+=p.price;
                                z.PID=p.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                                fin.close();
                                return;
                                }
                            }
                            fin.close();
//*********************************************************
        fin.open("motherboard.txt",ios::in);
        motherboard m;
         while(fin)
                            {
                            fin.read((char*)&m,sizeof(m));
                            if(x==m.PID)
                            {
                                f<<endl<<m.brand<<"   "<<m.modelid<<"                    "<<m.price;
                                total+=m.price;
                                z.PID=m.PID;
                                f2.write((char*)&z,sizeof(z));
                                f2.close();
                                f.close();
                                fin.close();
                            return;
                            }
                            }
            fin.close();
//**********************************************************
        fin.open("harddisk.txt",ios::in);
        harddisk h;
        while(fin)
                    {
                        fin.read((char*)&h,sizeof(h));
                        if(x==h.PID)
                        {
                            f<<endl<<h.brand<<"   "<<h.modelid<<"                    "<<h.price;
                                total+=h.price;fin.close();
                                z.PID=h.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//************************************************************
        fin.open("dvd.txt",ios::in);
        dvd d;
        while(fin)
                    {
                        fin.read((char*)&d,sizeof(d));
                        if(x==d.PID)
                        {
                            f<<endl<<d.brand<<"   "<<d.modelid<<"                    "<<d.price;
                                total+=d.price;fin.close();
                                z.PID=d.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("ram.txt",ios::in);
        ram r;
        while(fin)
                    {
                        fin.read((char*)&r,sizeof(r));
                        if(x==r.PID)
                        {
                            f<<endl<<r.brand<<"   "<<r.modelid<<"                    "<<r.price;
                                total+=r.price;fin.close();
                                z.PID=r.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("usb.txt",ios::in);
        usb u;
        while(fin)
                    {
                        fin.read((char*)&u,sizeof(u));
                        if(x==u.PID)
                        {
                            f<<endl<<u.brand<<"   "<<u.modelid<<"                    "<<u.price;
                                total+=u.price;fin.close();
                                z.PID=u.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*****************************************************************
fin.open("exthdd.txt",ios::in);
        harddisk j;
        while(fin)
                    {
                        fin.read((char*)&j,sizeof(j));
                        if(x==j.PID)
                        {
                            f<<endl<<j.brand<<"   "<<j.modelid<<"                    "<<j.price;
                                total+=j.price;fin.close();
                                z.PID=j.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//******************************************************************
fin.open("mouse.txt",ios::in);
        mouse n;
        while(fin)
                    {
                        fin.read((char*)&n,sizeof(n));
                        if(x==n.PID)
                        {
                            f<<endl<<n.brand<<"   "<<n.modelid<<"                    "<<n.price;
                                total+=n.price;fin.close();
                                z.PID=n.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//***********************************************************************
fin.open("keyboard.txt",ios::in);
        keyboard k;
        while(fin)
                    {
                        fin.read((char*)&k,sizeof(k));
                        if(x==k.PID)
                        {
                            f<<endl<<k.brand<<"   "<<k.modelid<<"                    "<<k.price;
                                total+=k.price;fin.close();
                                z.PID=k.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//**********************************************************************
fin.open("monitor.txt",ios::in);
        monitor o;
        while(fin)
                    {
                        fin.read((char*)&o,sizeof(o));
                        if(x==o.PID)
                        {
                            f<<endl<<o.brand<<"   "<<o.modelid<<"                    "<<o.price;
                                total+=o.price;fin.close();
                                z.PID=o.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
    //**********************************************************************
fin.open("printer.txt",ios::in);
        printer q;
        while(fin)
                    {
                        fin.read((char*)&q,sizeof(q));
                        if(x==q.PID)
                        {
                            f<<endl<<q.brand<<"   "<<q.modelid<<"                    "<<q.price;
                                total+=q.price;fin.close();
                                z.PID=q.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************************
fin.open("projector.txt",ios::in);
        projector c;
        while(fin)
                    {
                        fin.read((char*)&c,sizeof(c));
                        if(x==c.PID)
                        {
                            f<<endl<<c.brand<<"   "<<c.modelid<<"                    "<<c.price;
                                total+=c.price;fin.close();
                                z.PID=c.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//**************************************************************************
fin.open("scanner.txt",ios::in);
        scanner s;
        while(fin)
                    {
                        fin.read((char*)&s,sizeof(s));
                        if(x==s.PID)
                        {
                            f<<endl<<s.brand<<"   "<<s.modelid<<"                    "<<s.price;
                                total+=s.price;fin.close();
                                z.PID=s.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//***************************************************************************
fin.open("speaker.txt",ios::in);
        speaker t;
        while(fin)
                    {
                        fin.read((char*)&t,sizeof(t));
                        if(x==t.PID)
                        {
                            f<<endl<<t.brand<<"   "<<t.modelid<<"                    "<<t.price;
                                total+=t.price;fin.close();
                                z.PID=t.PID;
                                f2.write((char*)&z,sizeof(z));
                                f.close();
                                f2.close();
                            return;
                        }
                    }
        fin.close();
//*******************************************************************************

    }
void reducestock(int x)
    {
fstream fin;
//*********************************************************
        fin.open("motherboard.txt",ios::in);
        motherboard m;
         while(fin)
                            {
                            fin.read((char*)&m,sizeof(m));
                            if(x==m.PID)
                                {
                                delpid(x);
                                fin.close();
                                return;
                                }
                            }
            fin.close();
//**********************************************************
        fin.open("harddisk.txt",ios::in);
        harddisk h;
        while(fin)
                    {
                        fin.read((char*)&h,sizeof(h));
                        if(x==h.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//************************************************************
        fin.open("dvd.txt",ios::in);
        dvd d;
        while(fin)
                    {
                        fin.read((char*)&d,sizeof(d));
                        if(x==d.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("ram.txt",ios::in);
        ram r;
        while(fin)
                    {
                        fin.read((char*)&r,sizeof(r));
                        if(x==r.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("usb.txt",ios::in);
        usb u;
        while(fin)
                    {
                        fin.read((char*)&u,sizeof(u));
                        if(x==u.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*****************************************************************
fin.open("exthdd.txt",ios::in);
        harddisk j;
        while(fin)
                    {
                        fin.read((char*)&j,sizeof(j));
                        if(x==j.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//******************************************************************
fin.open("mouse.txt",ios::in);
        mouse n;
        while(fin)
                    {
                        fin.read((char*)&n,sizeof(n));
                        if(x==n.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//***********************************************************************
fin.open("keyboard.txt",ios::in);
        keyboard k;
        while(fin)
                    {
                        fin.read((char*)&k,sizeof(k));
                        if(x==k.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//**********************************************************************
fin.open("monitor.txt",ios::in);
        monitor o;
        while(fin)
                    {
                        fin.read((char*)&o,sizeof(o));
                        if(x==o.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
    //**********************************************************************
fin.open("printer.txt",ios::in);
        printer q;
        while(fin)
                    {
                        fin.read((char*)&q,sizeof(q));
                        if(x==q.PID)
                        {
                            delpid(x);

                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*************************************************************************
fin.open("projector.txt",ios::in);
        projector c;
        while(fin)
                    {
                        fin.read((char*)&c,sizeof(c));
                        if(x==c.PID)
                        {
                            delpid(x);
                                fin.close();
                            return;
                        }
                    }
        fin.close();
//**************************************************************************
fin.open("scanner.txt",ios::in);
        scanner s;
        while(fin)
                    {
                        fin.read((char*)&s,sizeof(s));
                        if(x==s.PID)
                        {
                            delpid(x);
                                fin.close();
                            return;
                        }
                    }
        fin.close();
//***************************************************************************
fin.open("speaker.txt",ios::in);
        speaker t;
        while(fin)
                    {
                        fin.read((char*)&t,sizeof(t));
                        if(x==t.PID)
                        {
                            delpid(x);
                                fin.close();
                            return;
                        }
                    }
        fin.close();
//*******************************************************************************
    }
//Deletion of the object
void delpid(int x)
    {
        fstream f;
        f.open("deleted.txt",ios::out|ios::app);
        if(x==0)
        {
            cout<<"\nENTER PRODUCT ID TO DELETE:";
            cin>>x;
        }
        pid p;
        p.PID=x;
        f.write((char*)&p,sizeof(p));


        f.close();

    }
int checkdeleted(int x)
    {
        fstream f;
        f.open("deleted.txt",ios::in);

        pid p;

        while(f)
        {
            f.read((char*)&p,sizeof(p));
            if(p.PID==x)
                return 1;

        }
        return 0;
    }
//********************************************************************************************************
//Random no generator for generating product it.
int pidgen()
    {
        int x=5000,a;
        while(1)
       {

           x=rand()%10000;
           if((x>999)&&(x<10000))
           {
              a=check(x);
              if(a==1)
              {
                  return x;
              }

           }

       }
    }
int check(int x)
    {

        fstream fin;
//*********************************************************
        fin.open("processor.txt",ios::in);
        processor p;
        while(fin)
                            {
                            fin.read((char*)&p,sizeof(p));
                            if(x==p.PID)
                                {
                                return 0;
                                }
                            }
                            fin.close();
//*********************************************************
        fin.open("motherboard.txt",ios::in);
        motherboard m;
         while(fin)
                            {
                            fin.read((char*)&m,sizeof(m));
                            if(x==m.PID)
                            {
                            return 0;
                            }
                            }
            fin.close();
//**********************************************************
        fin.open("harddisk.txt",ios::in);
        harddisk h;
        while(fin)
                    {
                        fin.read((char*)&h,sizeof(h));
                        if(x==h.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//************************************************************
        fin.open("dvd.txt",ios::in);
        dvd d;
        while(fin)
                    {
                        fin.read((char*)&d,sizeof(d));
                        if(x==d.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("ram.txt",ios::in);
        ram r;
        while(fin)
                    {
                        fin.read((char*)&r,sizeof(r));
                        if(x==r.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*************************************************************
        fin.open("usb.txt",ios::in);
        usb u;
        while(fin)
                    {
                        fin.read((char*)&u,sizeof(u));
                        if(x==u.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*****************************************************************
fin.open("exthdd.txt",ios::in);
        harddisk j;
        while(fin)
                    {
                        fin.read((char*)&j,sizeof(j));
                        if(x==j.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//******************************************************************
fin.open("mouse.txt",ios::in);
        mouse n;
        while(fin)
                    {
                        fin.read((char*)&n,sizeof(n));
                        if(x==n.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//***********************************************************************
fin.open("keyboard.txt",ios::in);
        keyboard k;
        while(fin)
                    {
                        fin.read((char*)&k,sizeof(k));
                        if(x==k.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//**********************************************************************
fin.open("monitor.txt",ios::in);
        monitor o;
        while(fin)
                    {
                        fin.read((char*)&o,sizeof(o));
                        if(x==o.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
    //**********************************************************************
fin.open("printer.txt",ios::in);
        printer q;
        while(fin)
                    {
                        fin.read((char*)&q,sizeof(q));
                        if(x==q.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*************************************************************************
fin.open("projector.txt",ios::in);
        projector c;
        while(fin)
                    {
                        fin.read((char*)&c,sizeof(c));
                        if(x==c.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//**************************************************************************
fin.open("scanner.txt",ios::in);
        scanner s;
        while(fin)
                    {
                        fin.read((char*)&s,sizeof(s));
                        if(x==s.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//***************************************************************************
fin.open("speaker.txt",ios::in);
        speaker t;
        while(fin)
                    {
                        fin.read((char*)&t,sizeof(t));
                        if(x==t.PID)
                        {
                            return 0;
                        }
                    }
        fin.close();
//*******************************************************************************

        return 1;

    }
void billing()
    {
    char ch;

    ifstream fin("cart.txt", ios::in);
    if(!fin)
    {
        cerr<<"\n Cannot open file !\n";
        getch();
        return;
    }
    char const * const PrinterName = "usb001:"; // Identify the printer port.
    ofstream printer(PrinterName); // Open the printer stream.
    if(!printer) // Ensure the printer stream opened ok.
    {
        cerr << "\a\n\tERROR: Unable to open " << PrinterName << endl;
        cout << "\n\tPress the [ENTER] key to return ";
        loading();
        return;
    }

    while (! fin.eof())
    {
        fin.get(ch);
        printer << (ch);
    }

    printer << endl << ends << flush;
    printer.close(); // Finish the print job by closing the printer stream.
    fin.close();


    fin.close(); // Close file./
    cout << "\n\n\t\t\t\Printing...";
    fstream f,f2;
    f.open("object.txt",ios::in);
    pid p;
        while(f)
        {
            f.read((char*)&p,sizeof(p));
            reducestock(p.PID);

        }
    f.close();
    f.open("object.txt",ios::out);
    f.close();
                        f2.open("cart.txt",ios::out);
                        f2.close();
    total=0;
    checkout=0;
    cout << "\n\n\ Please press the [ENTER] key to return";
    cin.ignore();
    }



//*********************************************************************************************
void write()
		{
		char ch;
		consumer c;
		fstream f1;
		c.entry();
		f1.open("main.dat",ios::out|ios::app);
		cout<<"\n\n\tDO you want to save the record(y/n)\t";
		cin>>ch;
		if(ch!='n')
		{
		f1.write((char*)&c,sizeof(c));
		}
		f1.close();
		}

	  //FUNCTION TO READ THE VALUES

void read()
		{
		consumer c;
		fstream f1;
		f1.open("main.dat",ios::in|ios::binary);
		while(f1)
		{
		f1.read((char*)&c,sizeof(c));
		c.display();
		if(f1.eof())
		{
		cout<<"\n\n   End of the file reached\n\n";
		}
		}
		f1.close();
		}

      //FUNCTION FOR SEARCHING THE RECORD
//MAIN PROJECT:Design by Prashant(14ce113) and Vicky(14ce109)
void SEARCH()
		{
		consumer c;
		int rn;
		char found='n';
		ifstream f1("main.dat",ios::in);
		cout<<"\n\n Enter Employee ID you want to SEARCH :\t";
		cin>>rn;
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rn)
		{
		c.display();
		found='y';
		break;
		}
		}
		if(found=='n')
		cout<<"\n\n\tRECORD NOT FOUND!!!!!!!!!!!!!\n"<<endl;
		f1.close();
		}

      //FUNCTION TO DELELTE THE RECORD
void del()
		{
		ifstream f1("main.dat",ios::in);
		ofstream f2("temp.dat",ios::out);
		int rno;
		char found='f',confirm='n';
		cout<<"\n\n Enter Employee ID you want to DELETE :\t";
		cin>>rno;
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rno)
		{
		c.display();
		found='t';
		cout<<"\n\n Are you sure want to DELETE this record ? (y/n)\t";
		cin>>confirm;
		if(confirm=='n')
		f2.write((char*)&c,sizeof(c));
		}
		else
		f2.write((char*)&c,sizeof(c));
		}
		if(found=='f')
		cout<<"\n\n\tRECORD NOT FOUND\n";
		f1.close();
		f2.close();
		remove("main.dat");
		rename("temp.dat","main.dat");
		f1.open("main.dat",ios::in);
		system("cls");
		cout<<"\n\n\n Now the file contains\n\n\n";
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(f1.eof())
		c.display();
		}
		f1.close();
		}
//MAIN PROJECT:Design by Prashant(14ce113) and Vicky(14ce109)
