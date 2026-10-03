#include<stdio.h>
#include <stdlib.h>
struct Date{
	char name[30];
	int year;
	int month;
	int day;
};
int isornotyear(int y){
	if(y%400==0)return 1;
	else if(y%100==0)return 0;
	else if(y%4==0)return 1;
	else return 0;
}
int Totalans(struct Date d){
	int total=0;
	int i=0;
	for(i=1;i<d.year;i++){
		if(isornotyear(i))total+=366;
		else		   total+=365;
	}
	
	int Month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(isornotyear(d.year)){
		Month[1]=29;
}
	for(i=0;i<d.month-1;i++){
			total+=Month[i];
		}
	total+=d.day;
	return total;	 
	}

int main(){
	struct Date p1,p2;
	int sum=0,now=0;
	printf("請輸入第一個人的生日(例如:James 2010 5 20):");
	scanf("%s %d %d %d",p1.name,&p1.year,&p1.month,&p1.day);
	
	printf("請輸入第二個人的生日(例如:James 2010 5 20):");
	scanf("%s %d %d %d",p2.name,&p2.year,&p2.month,&p2.day);
	
	int ans=abs(Totalans(p1)-Totalans(p2));
	printf("%s和%s之間的生日天數相差%d天",p1.name,p2.name,ans);
	
}
