#include<stdio.h>
#include<math.h>
int main()
{
	char ar[234];
	int n,i,j,ne[234],last,two[234][234];
printf("Given polynomial:");
printf("\n P(x)=a0 +a1x + a2x^2\n");
printf("\nGraph passes through the points:");
printf("\n (1,4),(4,73),(5,last two digit of your name)\n");
printf("\nEnter size of your name:");
scanf("%d",&n);
for(i=0; i<n; i++){
printf("Enter %d character of your name:",i+1);
scanf("%s",&ar[i]);
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
printf("\nYour name encode:\n");
for(i=0; i<n; i++){
	printf("%5d",ne[i]);
}
printf("\n\nEnter the last two digit of your name:");
scanf("%d",&last);

printf("\nSubtituting: x(1,4,5)-------\n");
printf("\n P(1)=a0 +a1(1) +a2(1)^2\n P(4)=a0 +a1(4) +a2(4)^2\n P(5)=a0 +a1(5) +a2(5)^2\n ");
printf("\n a0 + a1  + a2   =4\n a0 + 4a  + 16a2 =73\n a0 + 5a1 + 25a2 =%d \n",last);

printf("\nCoefficients:-----\n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		two[i][j]=1;
	}
}
two[1][1]=4;
two[1][2]=16;
two[2][1]=5;
two[2][2]=25;
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	printf("%5d",two[i][j]);
	}
	printf("\n");


}
}
