#include <iostream>

using namespace std;

int main(){
	
	int bead[] = {5, 4, 0, 3, 1, 6, 2};
   
	int len = sizeof(bead)/sizeof(int);
   
	int ans = 0;
	for (int i = 0; i < len; i++){
		if (bead[i] >= 0){
        	int cursor = i;
        	int cnt = 1;
        	while(true){
            	if (i == bead[cursor]) {
               		bead[cursor] = -1;
               		break;
            	}
            	int imsi = bead[cursor];
            	bead[cursor] = -1;
            	cursor = imsi;
            
            	cnt++;
        	}
        	ans = (ans >= cnt) ? ans : cnt;
      	}
      
   }
   
   printf("%d", ans);
   
   return 0;
   
}   
