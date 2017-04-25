//submitted. Accepted
#include <bits/stdc++.h>
using namespace std;

int biner(string s){
	if (s=="0000000") cout<<" ";
	else if (s=="0000101") cout<<"a";
	else if (s=="1000101") cout<<"A";

	else if (s=="1110100") cout<<"b";
	else if (s=="0110100") cout<<"B";

	else if (s=="0001100") cout<<"c";
	else if (s=="1001100") cout<<"C";

	else if (s=="1010000") cout<<"d";
	else if (s=="0010000") cout<<"D";

	else if (s=="0011001") cout<<"e";
	else if (s=="1011001") cout<<"E";

	else if (s=="1100100") cout<<"f";
	else if (s=="0100100") cout<<"F";

	else if (s=="0010010") cout<<"G";
	else if (s=="1010010") cout<<"g";

	else if (s=="1100101") cout<<"h";
	else if (s=="0100101") cout<<"H";

	else if (s=="0011011") cout<<"i";
	else if (s=="1011011") cout<<"I";

	else if (s=="1110011") cout<<"j";
	else if (s=="0110011") cout<<"J";

	else if (s=="0100010") cout<<"k";
	else if (s=="1100010") cout<<"K";

	else if (s=="1101000") cout<<"l";
	else if (s=="0101000") cout<<"L";
	
	else if (s=="0010100") cout<<"m";
	else if (s=="1010100") cout<<"M";

	else if (s=="1000011") cout<<"n";
	else if (s=="0000011") cout<<"N";

	else if (s=="1110000") cout<<"O";
	else if (s=="0110000") cout<<"o";

	else if (s=="0111001") cout<<"p";
	else if (s=="1111001") cout<<"P";

	else if (s=="1111100") cout<<"q";
	else if (s=="0111100") cout<<"Q";

	else if (s=="0010011") cout<<"r";
	else if (s=="1010011") cout<<"R";

	else if (s=="1100001") cout<<"s";
	else if (s=="0100001") cout<<"S";

	else if (s=="0101001") cout<<"t";
	else if (s=="1101001") cout<<"T";

	else if (s=="0000110") cout<<"u";
	else if (s=="1000110") cout<<"U";

	else if (s=="0010110") cout<<"v";
	else if (s=="1010110") cout<<"V";

	else if (s=="0111010") cout<<"w";
	else if (s=="1111010") cout<<"W";

	else if (s=="0001101") cout<<"x";
	else if (s=="1001101") cout<<"X";

	else if (s=="1001111") cout<<"y";
	else if (s=="0001111") cout<<"Y";

	else if (s=="1101011") cout<<"z";
	else if (s=="0101011") cout<<"Z";
}

int main(){
	while(!(feof(stdin))){
		if (!(feof(stdin))){
			string inp;
			getline(cin,inp);
			if (inp=="\n")cout<<endl;
			while(inp.length()>0){
				char buffer[10];
				size_t index = inp.copy(buffer,7);
				buffer[index] = '\0';
				inp.erase(inp.begin(), inp.begin()+7);
				string funct(buffer);
				biner(funct);
			}
			if (!(feof(stdin)))cout<<endl;
		}
	}
	return 0;
}
