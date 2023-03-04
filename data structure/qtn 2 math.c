#include<stdio.h>

int main(){
char ar[234];
int n,i,j,arr[234][23],ne[234],size,out[234],sum[234],mul[234],l=0,m=0;
printf("Enter size of your number:");
scanf("%d",&n);
for(i=0; i<n; i++){
printf("Enter %d character:",i+1);
scanf("%s",&ar[i]);
}
printf("\nEnter size of key matrix:");
scanf("%d",&size);
for(i=0; i<size; i++){
for(j=0; j<size; j++){
printf("Enter elements at [%d%d]:",i,j);
scanf("%d",&arr[i][j]);
}
printf("\n");
}
for(i=0; i<n; i++){
if(ar[i]=='a'){
ne[i]=1;
}if(ar[i]=='b'){
ne[i]=2;
}if(ar[i]=='c'){
ne[i]=3;
}if(ar[i]=='d'){
ne[i]=4;
}if(ar[i]=='e'){
ne[i]=5;
}if(ar[i]=='f'){
ne[i]=6;
}if(ar[i]=='g'){
ne[i]=7;
}if(ar[i]=='h'){
ne[i]=8;
}if(ar[i]=='i'){
ne[i]=9;
}if(ar[i]=='j'){
ne[i]=10;
}if(ar[i]=='k'){
ne[i]=11;
}if(ar[i]=='l'){
ne[i]=12;
}if(ar[i]=='m'){
ne[i]=13;
}if(ar[i]=='n'){
ne[i]=14;
}if(ar[i]=='o'){
ne[i]=15;
}if(ar[i]=='p'){
ne[i]=16;
}if(ar[i]=='q'){
ne[i]=17;
}if(ar[i]=='r'){
ne[i]=18;
}if(ar[i]=='s'){
ne[i]=19;
}if(ar[i]=='t'){
ne[i]=20;
}if(ar[i]=='u'){
ne[i]=21;
}if(ar[i]=='v'){
ne[i]=22;
}if(ar[i]=='w'){
ne[i]=23;
}if(ar[i]=='x'){
ne[i]=24;
}if(ar[i]=='y'){
ne[i]=25;
}if(ar[i]=='z'){
ne[i]=26;
}
}
printf("Your name encode:\n");
for(i=0; i<n; i++){
	printf("%5d",ne[i]);
}
for(i=0; i<n; i++){
out[i]=ne[i]*arr[0][0];

mul[i]=ne[i+1]*arr[1][0];
sum[i]=out[i]+mul[i];

out[i+1]=ne[i]*arr[0][1];

mul[i+1]=ne[i+1]*arr[1][1];
sum[i+1]=out[i+1]+mul[i+1];


i+2;



}
printf("\nThe encode massage is:\n");
for(i=0; i<n; i++){
printf("%5d",sum[i]);
}
}
