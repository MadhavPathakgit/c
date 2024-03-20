#include<stdio.h>
#include<string.h>
void slice(char*st,int m,int n){
    int i = 0;
while((m+i)<n){
    st[i] = st[i+m];
    i++;

}
st[i] = '\0';
}

 int main(){
    char str[] = "rarrrry";
    slice(str,1,4);
    printf("%s",str);
    return 0;
}