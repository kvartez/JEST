#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
        ifstream wejscie;
        ofstream wyjscie;
        wejscie.open("wej.txt");
        wyjscie.open("wyj.txt");
        int a =1;
        int k [1000];
        int c=0;
        int b ;
        bool czy = false;
        bool kek = false;
        bool JD = false;
        int o = 0;
        cout << "[  ";
        while(wejscie.good()) {
        	
            	if (!wejscie.eof()) {
            		wejscie >> b;
            		
				}
			
			
			
	        for (int i = c; i>=0;i--){
	        	if (k[i] == b){
	        		czy = true;
	        		
	        		break;
					
				}else {
					
				}
			}
			
			
			if (czy == false){
				k[c]= b;
				
				c++;
			}
	        if ((wejscie.good()&&czy == false) || kek == false) {
	        	
	            if (!wejscie.eof()) {
				kek = true;
	                   wyjscie<<"\n { \n  \"liczba\":"<<b <<"\n },";
	            }
	        }
	        czy = false;
	        
	    }
		wyjscie << "\b \n ]";
	    wejscie.close();
	    wyjscie.close();
	
	return 0;
}
