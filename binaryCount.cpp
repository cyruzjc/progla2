#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	    int binarycount = 0;
	    char binaryString[10];
	strcpy(binaryString, "1010010010");
	    for(int i = 0; binaryString[i]!='\0'; i++){
		if(binaryString[i]=='1'){
		binarycount++;
	}
	}
    cout<<"Given a binary string 1010010010"<<endl;
    cout<<"The count of 1's on a binary string :"<<binarycount;
	    return 0;
}
