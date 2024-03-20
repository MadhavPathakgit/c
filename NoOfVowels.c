#include<stdio.h>
#include<string.h>
int main(){
    char str [20] = "madhavpathak";
    int length = strlen(str);
    int vowel = 0;
    int consonant =0;

    for(int i = 0;i<length-1;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
        
    }
     printf("the no of vowels are:%d\n",vowel);
    printf("the no of consonat are:%d",consonant);
}
   