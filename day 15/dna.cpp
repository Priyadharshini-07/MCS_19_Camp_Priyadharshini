
#include <iostream.h> 
using namespace std; 
void printUpperHalf(string str) 
{ 
	char f,s; 
	int p= 0; 
	
	// Each half of the DNA is made of 
	// combination of two compounds 
	for (int i = 1; i <= 4; i++) { 

		// Taking the two carbon 
		// compounds from the string 
         f= str[p]; 
		 s= str[p+1]; 
		 p+= 2; 
		
		for (int j = 4 - i; j >= 1; j--) 
			cout << " "; 
		cout << f; 
		for (int j = 1; j < i; j++) 
			cout << "--"; 
		cout << s << endl; 
	} 
} 

// Function to print lower half 
// of the DNA or the lower lobe 
void printLowerHalf(string str) 
{ 
	char f,s; 
	int p = 0; 
	for (int i = 1; i <= 4; i++) { 

		f = str[p]; 
		s = str[p + 1]; 
		p += 2; 
		
		for (int j = 1; j < i; j++) 
			cout << " "; 
		cout << f; 
		for (int j = 4 - i; j >= 1; j--) 
			cout << "--"; 
		cout << s << endl; 
	} 
} 

void printDNA(string str[], int n) 
{ 
	for (int i = 0; i < n; i++) { 

		int x = i % 6; 
		if (x % 2 == 0) 
			printUpperHalf(str[x]); 
		else
			printLowerHalf(str[x]); 
	} 
} 
int main() 
{ 

	int n = 8; 
	string DNA[] = { "ATTAATTA", "TAGCTAGC", "CGCGATAT", 
				"TAATATGC", "ATCGTACG", "CGTAGCAT" }; 
	printDNA(DNA, n); 
	
	return 0; 
} 
