#include<iostresma.h>
using namespace std;

bool checkPalindrome(char c[], int size){
    
    int start = 0;
    int end = size-1;
    
    while(start <= end){
        if(c[start] != c[end])
            {
                return 0;
            }else{
                start++;
                end--;
            }
            
        }
        return 1;
    }


void reverse(char c[],int size){
    
    int start = 0;
    int end  = size - 1;
    
    while(start < end){
        swap(c[start++] , c[end--]);
    }
   
}

int getsize(char c[]){
    
    int count = 0;
    for(int i = 0; c[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    
    char c[100];
    cin>>c;
    

    int size = getsize(c);
    reverse(c,size);
    
    bool ans = checkPalindrome(c, size);
    
    if(ans == 1){
        cout<<"p";
    }else
    {
        cout<<"n p";
    }
    
}




