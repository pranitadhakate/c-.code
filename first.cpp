/* cd Documents
g++ -o p first.cpp
./p*/

/*#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"enter the value of num1:\n";
	cin>>num1;
	cout<<"enter the value of num2:\n";
	cin>>num2;
	cout<<"the sum is\n"<<num1+num2;
	return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
int a=4,b=5;
cout<<"operators in c++:\n";
cout<<"folowing are the types of operator in c++\n";
//arithmatic oprator
cout<<"the value of is a+b:"<<a+b<<"\n";
cout<<"the value of is a-b:"<<a-b<<"\n";
cout<<"the value of is a*b:"<<a*b<<"\n";
cout<<"the value of is a/b:"<<a/b<<"\n";
cout<<"the value of is a%b:"<<a%b<<"\n";
cout<<"the value of is a++:"<<a++<<"\n";
cout<<"the value of is a--:"<<a--<<"\n";
cout<<"the value of is ++a:"<<++a<<"\n";
cout<<"the value of is --a:"<<--a<<"\n";


//compare oprator
cout<<"operators in c++:\n";
cout<<"folowing are the types of operator in c++\n";
cout<<"the value of is a==b:"<<(a==b)<<"\n";
cout<<"the value of is a!=b:"<<(a!=b)<<"\n";
cout<<"the value of is a>=b:"<<(a>=b)<<"\n";
cout<<"the value of is a<=b:"<<(a<=b)<<"\n";
cout<<"the value of is a>b:"<<(a>b)<<"\n";
cout<<"the value of is a<b:"<<(a<b)<<"\n";

//logical oprator
cout<<"operators in c++:\n";
cout<<"folowing are the types of operator in c++\n";
cout<<"((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<"\n";
cout<<"((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<"\n";  
return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
int b;
cin>>b;
if(a>b)
{
cout<<"A is grater"<<"\n";
}
else
{
cout<<"B is greater"<<"\n";
}
return 0;
}*/
/*#include<iostream>

using namespace std;
int main()
{
int a;
cout<<"enter of a:"<<"\n";
cin>>a;
if(a==0)
{
cout<<"Mon"<<"\n";
}
else if(a==1)
{
cout<<"Tue"<<"\n";
}
else if(a==2)
{
cout<<"Wed"<<"\n";
}
else
{
cout<<"sun"<<"\n";
}
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int sp;
cout<<"enter sp:"<<"\n";
cin>>sp;
int cp;
cout<<"enter cp:"<<"\n";
cin>>cp;
if(sp>cp)
{
cout<<"sub:"<<sp-cp<<"\n";
}
else
{
cout<<"invaalid"<<"\n";
}
return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
int n,d;
cout<<"M:";
cin>>n;
d=n%10;
if(d%3==0)
{
cout<<"Div:"<<"\n";
}
else
{
cout<<"no:"<<"\n";
}
return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
int  q,a,t,d;
cout<<"quantity:"<<"\n";
cin>>q;
a=q*100;
if(q>1000)
{
d=a*10/100;
t=a-d;
cout<<"t:"<<t<<"\n";
}
else
{
cout<<"no bonus"<<"\n";
}
return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
int p,c,m,b,g,si,S;
cout<<"phy:"<<"\n";
cin>>p;
cout<<"che:"<<"\n";
cin>>c;
cout<<"math:"<<"\n";
cin>>m;
cout<<"bio:"<<"\n";
cin>>b;
cout<<"geo:"<<"\n";
cin>>g;
S=(p+c+m+b+g*100)/500;
cout<<"total:"<<S"\n";
 if (S>=90)
   {
      cout<<"Grade A\n";
   }
   else if (S>80)
   {
       cout<<"Grade B\n";
   }
   else if (S>70)
   {
       cout<<"Grade c\n";
   }
   else if (S>60)
   {
       cout<<"Grade d\n";
   }
   else if (S>40)
   {
 cout<<"Grade e\n";
   }
   else if (S<40)
   {
       cout<<"Grade f\n";
   }
   else
   
      cout<<"fale\n";
   }
   return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
int a,b,c,m,sm;
cout<<"a:"<<"\n";
cin>>a;
cout<<"b:"<<"\n";
cin>>b;
cout<<"c:"<<"\n";
cin>>c;
    if (a>b)
     {
      m=a;
      sm=b;
    }
    else 
      {
      m=b;
      sm=a;
      }
    if (m>c)
    { 
       if (sm>c)
        {
     cout<<"sm:"<<sm<<"\n";
        }
      else
      {
        cout<<"c:"<<c<<"\n";
      }
    }
      else 
      {
        cout<<"m:"<<m<<"\n";
      }
      return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,m,sm,m1,sm1;
    
cout<<"a:"<<"\n";
cin>>a;
cout<<"b:"<<"\n";
cin>>b;
cout<<"c:"<<"\n";
cin>>c;
cout<<"d:"<<"\n";
cin>>d;
    if (a>b)
     {
      m=a;
      sm=b;
    }
    else 
      {
      m=b;
      sm=a;
      }
    if (c>d)
    { 
       m1=c;
       sm1=d;
     }
     else
       {
       m1=d;
       sm1=c;
       }
     
       if (m>m1)
        {
          if (m1>sm)
          {
         cout<<"m1"<<m1<<"\n";
        }
      else
      {
      cout<<"sm"<<sm<<"\n";
      }
    }
      else if (m>sm1)
      {
       cout<<"m"<<m<<"\n";
      }
      else
      {
        cout<<"sm1"<<sm1<<"\n";
      }
      
      return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,m1,m2,R;
   cout<<"a:"<<"\n";
cin>>a;
cout<<"b:"<<"\n";
cin>>b;
cout<<"c:"<<"\n";
cin>>c;
cout<<"d:"<<"\n";
cin>>d;
cout<<"e:"<<"\n";
cin>>e;
    if (a>b)
     {
      m1=a;
     }
    else 
    {
      m1=b;
    }
    if (c>d)
    {
      m2=c;
    }
    else 
    {
      m2=d;
    }
    if (m1>m2)
    {
      R=m1;
    }
    else 
    {
      R=m2;
    }
    if (R>e)
    {
     cout<<"R:"<<R<<"\n";
    }
      else
      {
      cout<<"e:"<<e<<"\n";
      }
      
      return 0;
}
*/

//loop
/*#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter:"<<"\n";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"num:"<<i<<"\n";
}
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int c=0,n,s=0;
cout<<"enter:"<<"\n";
cin>>n;
/*for(int i=0;i<n;i++)
{
	s=s+i;
	c++;
}
cout<<"two:"<<s<<"\n"<<c<<"\n";
return 0;
}*/
//#include<iostream>
/*using namespace std;
int main()
{
 int p,q,m,n,i;
 cout<<"n:"<<"\n";
 cin>>n;
cout<<"m:"<<"\n";
 cin>>m;
 cout<<"p:"<<"\n";
 cin>>p;
cout<<"q:"<<"\n";
 cin>>q;
 for(int i=n;i<m;i++)
 {
 if(i%p==0)
   	{
   		if(i%q!=0)
   		{
   			//caut<<"I:"<<i<<"\n";
   			cout<<"e:"<<i<<"\n";
   		}
   	}
   }
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"num:"<<"\n";
cin>>n;
int r=0;
while(n>0)
{
int re=n%10;
r=r*10+re;
n=n/10;
}
cout<<"r:"<<r<<"\n";
return 0;
}*/
/*#include <iostream>
#include <string>
#include <cstring> // Include the <cstring> header for string manipulation functions
using namespace std;

int main() {
    char str[100] = {'\0'};
    int n;
    int r;
    char s[100] = {'\0'};
    
    cout << "Enter a number: " << "\n";
    cin >> n;
    
    int i = n;

    while (i > 0) {
        r = i % 2;
        // Use std::to_string to convert an integer to a string
        strcat(s, to_string(r).c_str());
        i = i / 2;
    }

    int length = strlen(s);

    for (int j = 0; j < length / 2; j++) {
        char temp = s[j];
        s[j] = s[length - 1 - j];
        s[length - 1 - j] = temp;
    }

    cout << "Binary: " << s << "\n";
    
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int A,B,p,R,hcf,lcm;
cout<<"A:"<<"\n";
cin>>A;
cout<<"B:"<<"\n";
cin>>B;
p=A*B;
   R=A%B;
   while(R>0)
   {
   	A=B;
   	B=R;
   	R=A%B;
   }
  
   	hcf=B;
   	lcm=p/hcf;
  	cout<<"hl:"<<hcf<<"\n";
  	cout<<"lm:"<<lcm<<"\n";
  
   	
   
   return 0;
}
*/

//Pointer
/*#include<iostream>
using namespace std;
int main()
{
int a=3;
int* b=&a;
cout<<b<<endl;
return 0;
}*/
//Array
/*#include <iostream>
using namespace std;

int main() {
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;  // Index 3, not 4

    cout << "There are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // Change value
    marks[2] = 45;
    cout << "Marks" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "value " << i << " is " << marks[i] << endl;
    }

    return 0;
}*/
//structure
/*#include<iostream>
using namespace std;

typedef struct employee
{
//data
int eId;
char favChar;
float sal;
}ep;
int main()
{
ep harry;
struct employee shubh;
struct employee rohu;
harry.eId=1;
harry.favChar='c';
harry.sal=10000;
cout<<"the value is "<<harry.eId<<endl;
cout<<"the value is "<<harry.favChar<<endl;
cout<<"the value is "<<harry.sal<<endl;
return 0;
}*/
/*#include<iostream>
using namespace std;

typedef struct girls
{
int beuty;
int happy;
char tier;
}ep;
int main()
{
ep pranu;
struct girls ranu;
struct girls janu;
pranu.beuty=99;
pranu.happy=50;
pranu.tier='A';
cout<<"the beuty is"<<pranu.beuty<<endl;
cout<<"the happy is"<<pranu.happy<<endl;
cout<<"the tier is "<<pranu.tier<<endl;
return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
struct book
{
float price;
int noOfpage;
char name[50];
};
int main()
{
book mybook;
mybook.price=200.5;
mybook.noOfpage=100;
strcpy(mybook.name,"secreat seven");
cout<<"the beuty is"<<mybook.price<<endl;
cout<<"the happy is"<<mybook.noOfpage<<endl;
cout<<"the tier is "<<mybook.name<<endl;
return 0;
}*/
/*#include<iostream>
#include<cstring>
using namespace std;
struct pk{
int hp;
int speed;
int attack;
char tier;
std::string name;
};
int main()
{
pk a,b,c;
a.attack=100;
a.hp=100;
a.speed=90;
a.tier='A';
a.name="pranu";
b=a;
std::cout<<b.attack<<std::endl;
return 0;
}*/
/*#include<iostream>
using namespace std;
struct book
{
std::string name;
std::string author;
int callno;
};
void display(const book&);
int main()
{
book b1={"let us c","ypk",101};
display(b1);
return 0;
}
void display(const book&b)
{
std::cout << b.name << " " << b.author << " " << b.callno << std::endl;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
typedef struct pk
{
int hp;
int speed;
int attack;
char tier;
char name[15];
}pk;
int main()
{
 pk arr[3];
//arr[0],arr[1],arr[2].....
	arr[0].attack=50;
	arr[0].hp=100;
	arr[0].speed=30;
	arr[0].tier='A';
	strcpy(arr[0].name,"charizard");
	
	arr[1].attack=150;
	arr[1].hp=99;
	arr[1].speed=130;
	arr[1].tier='s';
	strcpy(arr[1].name,"mewtwo");
	
	arr[2].attack=50;
	arr[2].hp=30;
	arr[2].speed=80;
	arr[2].tier='B';
	strcpy(arr[2].name,"pikachu");
	
	for(int i=0;i<3;i++)
	{
	cout<<"Name:"<<arr[i].name<<endl;
	cout<<"Name:"<<arr[i].attack<<endl;
	cout<<"Name:"<<arr[i].hp<<endl;
	cout<<"Name:"<<arr[i].speed<<endl;
	cout<<"Name:"<<arr[i].tier<<endl;
	}
	return 0;
}*/

/*#include<iostream>
#include<cstring>
#include<stdbool.h>
using namespace std;
typedef struct pk
{
int hp;
int speed;
int attack;
char tier;
char name[15];
}pk;
void fun(pk p)
{
cout<<"HP:"<<p.hp<<endl;
return;
}
void change(pk p)
{
p.hp=70;
p.attack=60;
p.speed=110;
return;
}
int main()
{
pk pika;
pika.hp=60;
pika.attack=50;
pika.speed=100;
change(pika);
cout<<"HP:"<<pika.hp<<endl;
cout<<"ATTA:"<<pika.attack<<endl;
cout<<"speed:"<<pika.speed<<endl;
return 0;
}*/
//union
/*#include<iostream>

using namespace std;

union money
{
int rice ;
int car;
float pounds;
};
int main()
{
union money m1;
m1.rice=34;
m1.car='c';
cout<<m1.car<<endl;
return 0;
}*/
/*#include<iostream>

using namespace std;

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    return 0;
}*/
//function
/*#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter num1: ";
    cin >> num1;
    
    cout << "Enter num2: ";
    cin >> num2;
    
    int result = sum(num1, num2);
    cout << "SUM: " << result << endl;
    
    return 0;
}
//function prototype
//type function-name(arguments)
#include <iostream>
using namespace std;

int sum(int , int);
int main() {
    int num1, num2;
    
    cout << "Enter num1: ";
    cin >> num1;
    //nu1 nu2 are actual para
    cout << "Enter num2: ";
    cin >> num2;
    
    int result = sum(num1, num2);
    cout << "SUM: " << result << endl;
    
    return 0;
}
 int sum(int a, int b) {
 //formal parameter a and b will be taking value from actual parameters num1 and num2.
    return a + b;
}*/
   
//privete and public

#include<iostream>
using namespace std;
class employee
{
private:
int a,b,c;
public:
int d,e;
void setData(int a1,int b1,int c1);
void getData()
{
cout<<"the value of a is" <<a<<endl;
cout<<"the value of b is" <<b<<endl;
cout<<"the value of c is" <<c<<endl;
cout<<"the value of d is" <<d<<endl;
cout<<"the value of e is" <<e<<endl;
}
};
void employee :: setData(int a1,int b1,int c1)
{
a=a1;
b=b1;
c=c1;
}

int main()
{
employee harry;
harry.d=34;
harry.e=87;
harry.getData();
return 0;
}

