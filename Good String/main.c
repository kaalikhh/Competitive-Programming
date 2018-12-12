#include<stdio.h>
#include<limits.h>
#include<string.h>
int min(int a,int b){
return a>b?b:a;
}
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int t,i,r;
char st[100001];
scanf("%d",&t);
while(t){

scanf("%s",st);
r=strlen(st);
int front=-1,end=-1,mini=INT_MAX;
char c='a';
while(c<='z'){
for(i=0;i<r;i++){
if(st[i]==c){
front=i;
break;
}
}
for(i=r-1;i>=0;i--){
if(st[i]==c){
end=r-i-1;
break;
}
}
if(front!=-1&&end!=-1&&front+end+2<=r)
mini=min(front+end,mini);
c++;

}



if(mini==INT_MAX)
    printf("-1\n");
else
printf("%d\n",mini);


t--;
}
}
