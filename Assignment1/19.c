// Any alphabet that is vowel or consonent
#include<stdio.h>
int main(){
  char ch;
printf("Enter an alphabet:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='J'||ch=='O'||ch=='U'||){
printf("%c is a vowel \n",ch);
}
else if((ch>='a'&&ch<='Z')||(ch>='A'&& ch<='Z')){
printf("%c is a consonent\n",ch);
}
else{
printf("%c is not an alphabet\n",ch);
}
return 0;
}
