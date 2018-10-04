#include <iostream>

using namespace std;

void if1(int a){
	if(a>0){
		a=a+1;
	}
	cout<<"if1 - "<<a<<endl;
}

void if2(int a){
	if(a>0){
		a=a+1;
	}else{
			a= a-2;}
	cout<<"if2 - "<<a<<endl;
}

void if3(int a){
	if(a>0){
		a=a+1;
	}else{
		if(a==0){
		a=10;
		}else{
			a=a-2;
		}
	}
	cout<<"if3 - "<<a<<endl;
}

void if4(int a, int b,int c){
	int temp = 0;
	if(a>0){
  		temp = temp+1;
	}
	if(b>0){
		temp = temp+1;
	}
	if(c>0){
		temp = temp+1;
	}
	cout<<"if4 - "<<temp<<endl;
}

void if5(int a, int b,int c){
	int temp = 0;
	int temp2 = 0;
	if(a>0){
  		temp = temp+1;
	}else{ temp2 = temp2+1;
	}
	if(b>0){
		temp = temp+1;
	}else{
		temp2 = temp2+1;
	}
	if(c>0){
		temp = temp+1;
	}else{
		temp2 = temp2+1;
	}
	cout<<"if5 - "<<"Good "<<temp<<" Bad "<<temp2<<endl;
}

void if6(int a, int b){
	cout<<"if6 - "<<min(a,b)<<endl;
}

void if7(int a, int b){
    if(a>b){
	cout<<"if7 - "<<"1"<<endl;
}else{
    cout<<"if7 - "<<"2"<<endl;
}
}

void if8(int a, int b){
    cout<<"if8 - "<<min(a,b)<<" - "<<max(a,b)<<endl;
}

void if9(int a, int b){
    int temp_a = a;
	int temp_b = b;
	a = min( temp_a , temp_b );
	b = max( temp_a , temp_b );
	cout<<"if9 - "<<"a - "<<a<<" , "<<"b -  "<<b<<endl;
}

void if10(int a, int b){
	if(a==b){
	a = 0;
	b = 0;
}else{
	int temp = a+b;
	a = temp;
	b = temp;
}
    cout<<"if10 - "<<"a - "<<a<<" , "<<"b -  "<<b<<endl;
}

void if11(int a,int b){
    if(a!=b){
        a = max(a,b);
        b = max(a,b);
    }else{
        a = 0;
        b = 0;
    }
    cout<<"if11 - "<<"a - "<<a<<" , "<<"b -  "<<b<<endl;
}

void if12(int a,int b,int c){
    cout<<"if12 - "<<min(a,min(b,c))<<endl;
}


void if13(int a, int b, int c){
    if(a>b&&a>c){
		if(b>c){
			cout<<c;
		}else{
			cout<<b;
		}
	}
	if(b>a&&b>c){
		if(a>c){
			cout<<a;
		}else{
			cout<<c;
		}
	}
	if(c>a&&c>b){
		if(a>b){
			cout<<a;
		}else{
			cout<<b;
		}
	}
}

void if14(int a,int b,int c){
    cout<<"if14 - "<<min(a,min(b,c))<<" - "<<max(a,max(b,c))<<endl;
}

void if15(int a,int b, int c){
    int temp_1 = max(a,b);
    int temp_2 = max(temp_1,c);
    cout<<"if15 - "<<temp_1+temp_2<<endl;
}

void if16(int a,int b,int c){
    if(a<b&&b<c){
        a = a*2;
        b = b*2;
        c = c*2;
    }else{
        a = -a;
        b = -b;
        c = -c;
    }
    cout<<"if16 - "<<"a - "<<a<<" , "<<"b -  "<<b<<" , "<<"c -  "<<c<<endl;
}

int main() {
	if1(1);
	if2(1);
	if3(1);
	if4(1,2,3);
	if5(1,2,3);
	if6(1,2);
	if7(1,2);
	if8(1,2);
	if9(1,2);
	if10(1,2);
	if11(1,2);
	if12(1,2,3);
	if13(1,2,3);
	if14(1,2,3);
	if15(1,2,3);
	if16(1,2,3);
	return 0;
}
